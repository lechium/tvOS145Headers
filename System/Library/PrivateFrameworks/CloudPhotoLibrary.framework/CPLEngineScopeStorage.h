/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class _CPLEngineScopeCache, NSMutableSet, CPLPlatformObject, NSString;

@interface CPLEngineScopeStorage : CPLEngineStorage <CPLAbstractObject> {

	_CPLEngineScopeCache* _scopeCache;
	NSMutableSet* _scopeIdentifiersExcludedFromMingling;
	NSMutableSet* _scopeIdentifiersManuallyExcludedFromMingling;
	BOOL _shouldResetGlobalsForMainScope;
	BOOL _scheduleATransportUpdate;
	BOOL _scheduleAScopeUpdate;
	BOOL _schedulePushHighPriorityToTransport;
	BOOL _schedulePushToTransport;
	BOOL _schedulePullFromTransport;
	BOOL _schedulePullFromClient;
	BOOL _shouldChangeSyncManagerPriorityBoost;
	BOOL _syncManagerPriorityBoost;
	BOOL _someScopeMightHaveToBePulledByClient;
	BOOL _clearSomeScopeMightHaveToBePulledByClient;

}

@property (nonatomic,readonly) BOOL hasStagedSyncAnchors; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)status;
-(BOOL)openWithError:(id*)arg1 ;
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(unsigned long long)scopeType;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(void)_clearScopeCache;
-(void)_cacheScope:(id)arg1 ;
-(id)_scopeWithIdentifier:(id)arg1 ;
-(id)scopeWithLocalScopeIndex:(long long)arg1 ;
-(id)scopeWithCloudScopeIndex:(long long)arg1 ;
-(id)_scopeWithStableIndex:(long long)arg1 ;
-(void)_forceSyncManagerPriorityBoost;
-(void)_checkSyncManagerPriorityBoost;
-(id)enumeratorForScopesIncludeInactive:(BOOL)arg1 ;
-(id)enumeratorForScopesNeedingUpdateFromTransport;
-(id)enumeratorForScopesNeedingToPushHighPriorityChangesToTransport;
-(BOOL)hasScopesNeedingToPushHighPriorityChangesToTransport;
-(id)enumeratorForScopesNeedingToPushChangesToTransport;
-(BOOL)hasScopesNeedingToPushChangesToTransport;
-(BOOL)setScopeHasChangesToPushToTransport:(id)arg1 error:(id*)arg2 ;
-(long long)pushToTransportTaskForScope:(id)arg1 ;
-(BOOL)setScope:(id)arg1 hasCompletedPushToTransportTask:(long long)arg2 error:(id*)arg3 ;
-(BOOL)doesScopeNeedToPushChangesToTransport:(id)arg1 ;
-(id)enumeratorForScopesNeedingToPullChangesFromTransport;
-(BOOL)hasScopesNeedingToPullChangesFromTransport;
-(BOOL)setScopeHasChangesToPullFromTransport:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAllScopesHasChangesToPullFromTransportWithError:(id*)arg1 ;
-(long long)pullFromTransportTaskForScope:(id)arg1 ;
-(BOOL)setScope:(id)arg1 hasCompletedPullFromTransportTask:(long long)arg2 error:(id*)arg3 ;
-(BOOL)doesScopeNeedToPullChangesFromTransport:(id)arg1 ;
-(BOOL)setPullFromTransportExpirationInterval:(double)arg1 scope:(id)arg2 error:(id*)arg3 ;
-(BOOL)doScopesNeedMetadataSync:(id)arg1 ;
-(id)_scopeChangeToBePulledByClientForScope:(id)arg1 ;
-(id)scopeChangesNeedingToBePulledByClientWithMaximumCount:(unsigned long long)arg1 ;
-(BOOL)clientAcknowledegedScopeChanges:(id)arg1 error:(id*)arg2 ;
-(BOOL)setScopeNeedsToBePulledByClient:(id)arg1 error:(id*)arg2 ;
-(BOOL)doesScopeNeedToBePulledByClient:(id)arg1 ;
-(BOOL)doesScopeSupportToBePulledByClient:(id)arg1 ;
-(id)enumeratorForScopesNeedingToUpdateTransport;
-(id)_createScopeFromScopeChange:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateScopeWithChange:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasScopesNeedingToUpdateTransport;
-(BOOL)setScopeNeedsToUpdateTransport:(id)arg1 error:(id*)arg2 ;
-(long long)transportUpdateTaskForScope:(id)arg1 ;
-(BOOL)setScope:(id)arg1 hasCompletedTransportUpdate:(long long)arg2 error:(id*)arg3 ;
-(BOOL)doesScopeNeedToUpdateTransport:(id)arg1 ;
-(id)allScopeIdentifiersIncludeInactive:(BOOL)arg1 ;
-(void)_resetGlobalsForMainScope;
-(BOOL)_handledDisabledFeaturesForScopeIfNecessary:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
-(id)createScopeWithIdentifier:(id)arg1 scopeType:(long long)arg2 flags:(long long)arg3 transportScope:(id)arg4 error:(id*)arg5 ;
-(BOOL)deleteScopeWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setScopeType:(long long)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(id)scopedIdentifierForLocalScopedIdentifier:(id)arg1 ;
-(id)scopedIdentifierForCloudScopedIdentifier:(id)arg1 ;
-(long long)indexForLocalScopeIdentifier:(id)arg1 ;
-(long long)indexForCloudScopeIdentifier:(id)arg1 ;
-(id)scopeIdentifierForLocalScopeIndex:(long long)arg1 ;
-(id)scopeIdentifierForCloudScopeIndex:(long long)arg1 ;
-(BOOL)setLocalScopeIndexOnChange:(id)arg1 ;
-(BOOL)setCloudScopeIndexOnChange:(id)arg1 ;
-(id)validLocalScopeIndexes;
-(id)validCloudScopeIndexes;
-(long long)stableScopeIndexForScopeIdentifier:(id)arg1 ;
-(BOOL)_resetLocalSyncStateForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetLocalSyncStateForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)_resetCompleteSyncStateForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetCompleteSyncStateForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetCompleteSyncStateIncludingIDMappingForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetSyncAnchorForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetLocalRecordsForScopeWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetCloudRecordsForScopeWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetStableRecordsForScopeWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)flagsForScope:(id)arg1 ;
-(BOOL)updateFlags:(id)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(BOOL)setValue:(BOOL)arg1 forFlag:(long long)arg2 forScope:(id)arg3 error:(id*)arg4 ;
-(BOOL)valueForFlag:(long long)arg1 forScope:(id)arg2 ;
-(id)disabledDateForScope:(id)arg1 ;
-(BOOL)setDisabledDate:(id)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(id)deleteDateForScope:(id)arg1 ;
-(BOOL)setDeleteDate:(id)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(BOOL)resetSyncStateForScope:(id)arg1 error:(id*)arg2 ;
-(id)uploadTransportGroupForScope:(id)arg1 ;
-(id)downloadTransportGroupForScope:(id)arg1 ;
-(BOOL)setupInitialSyncTransportGroupsForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateInitialSyncTransportGroupEstimatedSize:(unsigned long long)arg1 assetCount:(unsigned long long)arg2 forScope:(id)arg3 error:(id*)arg4 ;
-(BOOL)setupResetSyncTransportGroupForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)setupAnchorResetTransportGroupForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearTransportGroupsForScope:(id)arg1 error:(id*)arg2 ;
-(id)scopeWithIdentifier:(id)arg1 ;
-(BOOL)setScopeNeedsUpdateFromTransport:(id)arg1 error:(id*)arg2 ;
-(id)transportScopeForScope:(id)arg1 ;
-(BOOL)setTransportScope:(id)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(id)scopeChangeForScope:(id)arg1 ;
-(BOOL)storeScopeChange:(id)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(BOOL)didDropSomeRecordsForScope:(id)arg1 ;
-(BOOL)setDidDropSomeRecordsForScope:(id)arg1 error:(id*)arg2 ;
-(id)syncAnchorForScope:(id)arg1 ;
-(BOOL)setSyncAnchor:(id)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(BOOL)commitSyncAnchorForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)discardStagedSyncAnchorForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)discardStagedSyncAnchorWithScopeFilter:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasStagedSyncAnchorForScope:(id)arg1 ;
-(BOOL)hasStagedSyncAnchors;
-(id)transientSyncAnchorForScope:(id)arg1 ;
-(BOOL)storeTransientSyncAnchor:(id)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(BOOL)disableInitialQueriesForScope:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)_indexOfCurrentClassForInitialQueriesForScope:(id)arg1 ;
-(Class)classOfRecordsForInitialQueryForScope:(id)arg1 ;
-(BOOL)markInitialQueryIsDoneForRecordsOfClass:(Class)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasScopeFetchedInitialSyncAnchor:(id)arg1 ;
-(BOOL)setHasFetchedInitialSyncAnchor:(BOOL)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(BOOL)setInitialSyncAnchor:(id)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(id)initialSyncAnchorForScope:(id)arg1 ;
-(BOOL)resetInitialSyncAnchorForScope:(id)arg1 error:(id*)arg2 ;
-(id)remainingClassesForInitialQueryForScope:(id)arg1 ;
-(BOOL)hasFinishedInitialSyncForScope:(id)arg1 ;
-(BOOL)hasFinishedAFullSyncForScope:(id)arg1 ;
-(id)lastDateOfClearedPushRepositoryForScope:(id)arg1 ;
-(BOOL)storeLastDateOfClearedPushRepository:(id)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(id)lastDateOfCompletedPullFromTransportForScope:(id)arg1 ;
-(unsigned long long)supportedFeatureVersionInLastSyncForScope:(id)arg1 ;
-(BOOL)storeSupportedFeatureVersionInLastSync:(unsigned long long)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(BOOL)supportedFeatureVersionIsMostRecentForScope:(id)arg1 ;
-(BOOL)storeEstimatedSize:(unsigned long long)arg1 estimatedAssetCount:(unsigned long long)arg2 forScope:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)estimatedSizeForScope:(id)arg1 ;
-(unsigned long long)estimatedAssetCountForScope:(id)arg1 ;
-(BOOL)upgradeScopesWithNewLibraryOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)statusDictionaryForScope:(id)arg1 ;
-(id)primaryScope;
-(BOOL)enablePrimaryScopeWithError:(id*)arg1 ;
-(BOOL)disablePrimaryScopeWithError:(id*)arg1 ;
-(BOOL)_forceClientToPullScopeIfNecessary:(id)arg1 error:(id*)arg2 ;
-(BOOL)activateScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)deactivateScope:(id)arg1 error:(id*)arg2 ;
-(id)scopeListSyncAnchor;
-(BOOL)storeScopeListSyncAnchor:(id)arg1 error:(id*)arg2 ;
-(id)filterForIncludedScopeIdentifiers:(id)arg1 ;
-(id)filterForExcludedScopeIdentifiers:(id)arg1 ;
-(id)filterOnScopesAllowingMingling;
-(void)excludeScopeIdentifierFromMingling:(id)arg1 ;
-(void)includeScopeIdentifierInMingling:(id)arg1 ;
-(void)forceExcludeScopeIdentifierFromMingling:(id)arg1 ;
-(void)forceIncludeScopeIdentifierInMingling:(id)arg1 ;
@end

