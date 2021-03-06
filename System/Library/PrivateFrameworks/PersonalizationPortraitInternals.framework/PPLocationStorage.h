/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PPSQLDatabase, PPDKStorage, PPRecordStorageHelper, PPSourceStorage;

@interface PPLocationStorage : NSObject {

	PPSQLDatabase* _db;
	PPDKStorage* _dkStorage;
	id _deletionObserver;
	PPRecordStorageHelper* _storageHelper;
	PPSourceStorage* _sourceStorage;

}
-(id)init;
-(void)dealloc;
-(id)initWithDatabase:(id)arg1 ;
-(BOOL)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(BOOL)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(BOOL)arg5 decayRate:(double)arg6 error:(id*)arg7 ;
-(BOOL)iterLocationRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithDatabase:(id)arg1 maxRecords:(unsigned)arg2 dkStorage:(id)arg3 loadEmptyDatabaseFromDK:(BOOL)arg4 ;
-(BOOL)_shouldSuppressRepeatedImpressions:(id)arg1 ;
-(id)decayedFeedbackCountsForClusterIdentifier:(id)arg1 ;
-(BOOL)decayFeedbackCountsWithDecayRate:(double)arg1 shouldContinueBlock:(/*^block*/id)arg2 ;
-(void)_truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned)arg1 txnWitness:(id)arg2 ;
-(id)sourceStatsWithExcludedAlgorithms:(id)arg1 ;
-(id)tempTableForSourceIdsExcludedAlgorithms:(id)arg1 txnWitness:(id)arg2 ;
-(id)thirdPartyBundleIdsFromToday;
-(id)lastDonationTimeForSourcesBeforeDate:(id)arg1 ;
-(id)_areasOfInterestForLocationRecordId:(long long)arg1 txnWitness:(id)arg2 ;
-(id)_contextualNamedEntitiesForLocationRecordId:(long long)arg1 txnWitness:(id)arg2 ;
-(id)_placemarkFromRecordQueryRowWithStatement:(id)arg1 columnMapping:(id)arg2 txnWitness:(id)arg3 ;
-(BOOL)_donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(BOOL)arg5 decayRate:(double)arg6 txnWitness:(id)arg7 ;
-(void)_insertContextualNamedEntities:(id)arg1 forLocationWithRowId:(long long)arg2 txnWitness:(id)arg3 ;
-(void)_insertAreasOfInterest:(id)arg1 forLocationWithRowId:(long long)arg2 txnWitness:(id)arg3 ;
-(void)_deleteLocationsWithRowIdTableWithName:(id)arg1 txnWitness:(id)arg2 atLeastOneLocationRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 ;
-(BOOL)donateLocationFeedback:(id)arg1 ;
-(BOOL)deleteAllLocationsOlderThanDate:(id)arg1 atLeastOneLocationRemoved:(BOOL*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 atLeastOneLocationRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 atLeastOneLocationRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 atLeastOneLocationRemoved:(BOOL*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 atLeastOneLocationRemoved:(BOOL*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)deleteAllLocationFeedbackCountRecordsOlderThanDate:(id)arg1 ;
-(BOOL)pruneOrphanedLocationFeedbackCountRecordsWithLimit:(unsigned long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 isComplete:(BOOL*)arg4 ;
@end

