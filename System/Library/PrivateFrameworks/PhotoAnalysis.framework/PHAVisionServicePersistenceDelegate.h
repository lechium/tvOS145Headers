/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PVPersistenceDelegate.h>

@class PHPhotoLibrary, PHAManager, NSString;

@interface PHAVisionServicePersistenceDelegate : NSObject <PVPersistenceDelegate> {

	PHPhotoLibrary* _photoLibrary;
	PHAManager* _photoAnalysisManager;
	unsigned _faceAlgorithmUmbrellaVersion;
	unsigned _sceneAlgorithmUmbrellaVersion;
	BOOL _personBuilderMergeCandidatesDisabled;

}

@property (assign,nonatomic) BOOL personBuilderMergeCandidatesDisabled;              //@synthesize personBuilderMergeCandidatesDisabled=_personBuilderMergeCandidatesDisabled - In the implementation block
@property (assign,nonatomic) unsigned faceAlgorithmUmbrellaVersion;                  //@synthesize faceAlgorithmUmbrellaVersion=_faceAlgorithmUmbrellaVersion - In the implementation block
@property (assign,nonatomic) unsigned sceneAlgorithmUmbrellaVersion;                 //@synthesize sceneAlgorithmUmbrellaVersion=_sceneAlgorithmUmbrellaVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newFacesDeterministicSortDescriptors;
+(void)enumerateFetchResult:(id)arg1 withBatchSize:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(unsigned long long)countOfClusteringEligibleFaces;
-(BOOL)_ungroupFaceClusterSequenceNumbers:(id)arg1 canceler:(id)arg2 error:(id*)arg3 ;
-(void)_categorizeGroupedFacesInFetchResult:(id)arg1 intoFaceLocalIdentifiersByFaceGroup:(id)arg2 ungroupedFaceLocalIdentifiers:(id*)arg3 canceler:(id)arg4 photoLibrary:(id)arg5 ;
-(BOOL)_resetFaceClusterSequenceNumberOfFacesInFetchResult:(id)arg1 inPhotoLibrary:(id)arg2 canceler:(id)arg3 error:(id*)arg4 ;
-(id)_fetchResultForUngroupedFacesWithNonZeroClusterSequenceNumberInPhotoLibrary:(id)arg1 ;
-(id)_fetchResultForGroupedFacesWithClusterSequenceNumberSetToZeroInPhotoLibrary:(id)arg1 ;
-(BOOL)deleteEmptyGroupsAndReturnError:(id*)arg1 ;
-(id)_localIdentifiersOfUnverifiedPersonsAssociatedWithFaceGroups:(id)arg1 withCanceler:(id)arg2 ;
-(BOOL)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 canceler:(id)arg3 error:(id*)arg4 ;
-(BOOL)cleanupUngroupedFacesWithNonZeroClusterSequenceNumbersWithCanceler:(id)arg1 error:(id*)arg2 ;
-(id)bestRepresentativeFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 canceler:(id)arg3 ;
-(id)bestRepresentativeFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 candidateFaces:(id)arg3 canceler:(id)arg4 ;
-(id)_faceToFaceCountMapForFaces:(id)arg1 ;
-(id)_representativenessByFaceCSNFromFaces:(id)arg1 canceler:(id)arg2 ;
-(void)_enumeratePersonsWithLocalIdentifiers:(id)arg1 fetchOptions:(id)arg2 personCache:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)_getMergeCandidates:(id)arg1 invalidMergeCandidates:(id)arg2 forPersonsWithLocalIdentifiers:(id)arg3 ;
-(BOOL)personBuilderMergeCandidatesDisabled;
-(id)otherFacesOnAssetWithFace:(id)arg1 options:(id)arg2 ;
-(id)_duplicateFaceCSNsOnAssetForPerson:(id)arg1 faceCSNsOnPerson:(id)arg2 faceByCSNCache:(id)arg3 ;
-(void)dedupeGraphVerifiedPersonsInFaceGroup:(id)arg1 personCache:(id)arg2 ;
-(void)_getTrainingFacesByPerson:(id*)arg1 confirmedFaceCSNs:(id*)arg2 faceCSNsByPerson:(id*)arg3 faceCSNsByMigratedPerson:(id*)arg4 faceCSNsByQuickClassificationPerson:(id*)arg5 mergeCandidates:(id*)arg6 invalidMergeCandidates:(id*)arg7 rejectedPersonsByPerson:(id*)arg8 faceInFaceGroupByCSN:(id*)arg9 inFaces:(id)arg10 personCache:(id)arg11 canceler:(id)arg12 ;
-(void)_getRejectedTrainingFaceCSNs:(id*)arg1 rejectedFaceCSNs:(id*)arg2 rejectedPersonLocalIdentifiers:(id*)arg3 forPerson:(id)arg4 faceInFaceGroupByCSN:(id)arg5 ;
-(BOOL)_completePersonBuildingWithPersonsToUpdate:(id)arg1 facesToRemoveByPerson:(id)arg2 facesToAddByPerson:(id)arg3 updateFaceGroup:(id)arg4 newMergeCandidatePairs:(id)arg5 newInvalidMergeCandidatePairs:(id)arg6 faceInFaceGroupByCSN:(id)arg7 personCache:(id)arg8 keyFaceUpdateBlock:(/*^block*/id)arg9 canceler:(id)arg10 context:(id)arg11 error:(id*)arg12 ;
-(unsigned long long)_level0ClusterIdForFaceCSN:(unsigned long long)arg1 level0Clusters:(id)arg2 ;
-(void)_updateFaceCSNsToAddByPerson:(id)arg1 faceCSNsToRemoveByPerson:(id)arg2 faceInFaceGroupByCSN:(id)arg3 faceCSNsByPersonLocalIdentifier:(id)arg4 faceCSNsByMigratedPersonLocalIdentifier:(id)arg5 personsToUpdate:(id)arg6 ;
-(id)_updatedFaceGroupByFGLocalIdentifierFromClusterCSNsWithCanceler:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(void)_buildPersonsFromUpdatedFaceGroups:(id)arg1 faceClusterer:(id)arg2 keyFaceUpdateBlock:(/*^block*/id)arg3 canceler:(id)arg4 context:(id)arg5 ;
-(unsigned long long)countOfFaces;
-(unsigned long long)countOfUnclusteredClusteringEligibleFaces;
-(unsigned long long)countOfClusteredFaces;
-(id)unclusteredClusteringEligibleFaceLocalIdentifiers:(id*)arg1 ;
-(id)facesForClusteringWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned)arg2 groupingIdentifiers:(id)arg3 ;
-(id)deterministicallyOrderedFaceIdentifiersWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned)arg2 ;
-(id)facesFromAsset:(id)arg1 ;
-(id)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:(id)arg1 canceler:(id)arg2 error:(id*)arg3 ;
-(BOOL)persistFaces:(id)arg1 deleteFaces:(id)arg2 forAsset:(id)arg3 persistedFaces:(id*)arg4 error:(id*)arg5 ;
-(BOOL)ungroupFaceClusterSequenceNumbers:(id)arg1 batchSizeForUnclusteringFaces:(unsigned long long)arg2 canceler:(id)arg3 error:(id*)arg4 ;
-(BOOL)cleanupGroupedFacesWithClusterSequenceNumberSetToZeroWithCanceler:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateFaceprint:(id)arg1 ofPersistedFace:(id)arg2 error:(id*)arg3 ;
-(BOOL)persistGeneratedFaceCrops:(id)arg1 error:(id*)arg2 ;
-(id)dirtyFaceCropsWithLimit:(unsigned long long)arg1 ;
-(BOOL)clearDirtyStateOnFaceCrops:(id)arg1 error:(id*)arg2 ;
-(id)associateFace:(id)arg1 withFaceCrop:(id)arg2 error:(id*)arg3 ;
-(id)faceAssociatedWithFaceCrop:(id)arg1 ;
-(id)groupedClusterSequenceNumbersOfFacesInFaceGroupsOfMinimumSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)persistChangesToAlgorithmicFaceGroups:(id)arg1 faceCSNByLocalIdentifierForNewlyClusteredFaces:(id)arg2 faceCSNsOfUnclusteredFaces:(id)arg3 localIdentifiersOfUnclusteredFaces:(id)arg4 persistenceCompletionBlock:(/*^block*/id)arg5 canceler:(id)arg6 error:(id*)arg7 ;
-(BOOL)resetLibraryClustersWithCanceler:(id)arg1 error:(id*)arg2 ;
-(BOOL)recordNeedToPersonBuildOnFaceGroupContainingFace:(id)arg1 error:(id*)arg2 ;
-(BOOL)needsPersonBuilding;
-(void)buildPersonsWithFaceClusterer:(id)arg1 keyFaceUpdateBlock:(/*^block*/id)arg2 canceler:(id)arg3 context:(id)arg4 extendTimeoutBlock:(/*^block*/id)arg5 ;
-(id)suggestedPersonLocalIdentifierForPersonLocalIdentifier:(id)arg1 faceClusterer:(id)arg2 canceler:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(void)logPVErrorMessage:(id)arg1 ;
-(void)logPVWarningMessage:(id)arg1 ;
-(void)logPVInfoMessage:(id)arg1 ;
-(void)logPVDebugMessage:(id)arg1 ;
-(unsigned)faceAlgorithmUmbrellaVersion;
-(void)setFaceAlgorithmUmbrellaVersion:(unsigned)arg1 ;
-(unsigned)sceneAlgorithmUmbrellaVersion;
-(void)setSceneAlgorithmUmbrellaVersion:(unsigned)arg1 ;
-(BOOL)cleanupMergeCandidatesWithMinimumFaceGroupSize:(unsigned long long)arg1 canceler:(id)arg2 error:(id*)arg3 ;
-(id)fetchFaceWithLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)fetchFaceWithClusterSequenceNumber:(id)arg1 error:(id*)arg2 ;
-(id)fetchPersonWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeAutoAssignedFacesFromVerifiedPersonsAndPrepareForPersonBuilding:(id)arg1 canceler:(id)arg2 error:(id*)arg3 ;
-(void)setPersonBuilderMergeCandidatesDisabled:(BOOL)arg1 ;
-(id)initWithPhotoAnalysisManager:(id)arg1 ;
-(id)fetchAssetWithLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)fetchPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)verifiedPersonsFetchResultWithLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)personsFetchResultWithLocalIdentifiers:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)momentIdentifierForFace:(id)arg1 withFetchOptions:(id)arg2 ;
-(id)assetForIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)facesFromFaceGroupWithMostNumberOfFacesOnPerson:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_fetchPHFacesForFaceIdentifiers:(id)arg1 ;
-(id)_pvFaceprintForPHFace:(id)arg1 ;
-(void)collectPersonBuilderMetrics;
-(BOOL)_cleanupMergeCandidatesForVerifiedPersons:(id)arg1 inLibrary:(id)arg2 minimumFaceGroupSize:(unsigned long long)arg3 canceler:(id)arg4 error:(id*)arg5 ;
@end

