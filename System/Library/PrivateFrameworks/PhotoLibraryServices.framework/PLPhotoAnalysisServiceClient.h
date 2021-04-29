/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSDictionary, NSObject, NSXPCConnection, NSURL;

@interface PLPhotoAnalysisServiceClient : NSObject {

	NSDictionary* _cachedRequestContextDictionary;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	NSXPCConnection* _xpcConnection;
	BOOL _graphIsReady;
	unsigned long long _graphLoadcount;
	BOOL _graphLoadWasSent;
	os_unfair_lock_s _lock;
	NSURL* _libraryURL;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> backgroundQueue; 
@property (nonatomic,readonly) NSXPCConnection * xpcConnection; 
@property (nonatomic,readonly) NSURL * libraryURL;                                        //@synthesize libraryURL=_libraryURL - In the implementation block
-(id)init;
-(void)dealloc;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_xpcConnection;
-(NSXPCConnection *)xpcConnection;
-(id)initWithLibraryURL:(id)arg1 ;
-(NSURL *)libraryURL;
-(id)dumpAnalysisStatusError:(id*)arg1 ;
-(void)unloadGraph;
-(id)requestGraphSearchMetadataWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestSynonymsDictionariesWithError:(id*)arg1 ;
-(id)requestZeroKeywordsWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(BOOL)arg3 withOptions:(id)arg4 error:(id*)arg5 ;
-(id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id*)arg4 ;
-(id)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id*)arg4 ;
-(void)loadGraph;
-(void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)reloadWidgetTimelineWithReply:(/*^block*/id)arg1 ;
-(id)requestContextDictionaryWithOperationId:(BOOL)arg1 ;
-(id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)searchResultNodesForSceneClassifications:(id)arg1 error:(id*)arg2 ;
-(id)searchResultNodesForSceneIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)localizedLabelForSceneIdentifier:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(long long)suggestedPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(long long)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)resetFaceClusteringState:(id*)arg1 ;
-(BOOL)resetFaceClassificationModel:(id*)arg1 ;
-(BOOL)reclusterFacesWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)processPersonsWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)faceClusteringInformation:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)differencesBetweenClustersInClusterCacheAndLibrary:(id*)arg1 ;
-(id)requestSuggestedMePersonIdentifierWithError:(id*)arg1 ;
-(void)personPromoterStatus:(/*^block*/id)arg1 ;
-(void)personPromoterAdvancedStatus:(/*^block*/id)arg1 ;
-(id)faceCandidatesForKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)rebuildPersonsWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestOnDemandFaceCropsForFaceLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)requestContextDictionary;
-(NSObject*<OS_dispatch_queue>)backgroundQueue;
-(void)_sendGraphLoadIfNeeded;
-(BOOL)isGraphReady;
-(int)photoanalysisdPid;
-(void)cancelOperationsWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)notifyLibraryAvailableAtURL:(id)arg1 ;
-(void)writeQALog:(id)arg1 ;
-(void)_setupXPCConnection;
-(void)dispatchOnQueue:(id)arg1 blockWithoutBoost:(/*^block*/id)arg2 ;
-(void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)runTurboAnalysis;
-(void)stopTurboAnalysis;
-(BOOL)turboIsEnabled;
-(void)recordFeatureUsageFromCounts:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)cacheCPAnalyticsPropertiesWithReply:(/*^block*/id)arg1 ;
-(id)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id*)arg5 ;
-(id)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id*)arg5 ;
-(id)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateMemoriesWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)simulateMemoriesNotificationWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)generateSuggestionsWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestGenerateQuestionsWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)requestLastQuestionGenerationJobDateWithError:(id*)arg1 ;
-(id)requestSortedArrayOfPersonIdentifiers:(id)arg1 withError:(id*)arg2 ;
-(id)requestAllSocialGroupsForPersonIdentifier:(id)arg1 withError:(id*)arg2 ;
-(id)requestSocialGroupsForPersonIdentifiers:(id)arg1 withError:(id*)arg2 ;
-(id)requestRelatedMomentsForPersonIdentifiers:(id)arg1 withError:(id*)arg2 ;
-(id)requestAssetsForPersonIdentifiers:(id)arg1 withError:(id*)arg2 ;
-(id)requestSignalModelInfosWithError:(id*)arg1 ;
-(void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)rebuildGraphWithOptions:(id)arg1 progress:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)invalidateGraphWithReply:(/*^block*/id)arg1 ;
-(id)requestLocalizedSceneAncestryInformationWithError:(id*)arg1 ;
-(id)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)requestCurationDebugInformationForAssetLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)requestUtilityAssetInformationWithError:(id*)arg1 ;
-(id)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)requestMemoryTreeDebugInformationWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestMemoryInfosWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestTransientMemoryPropertiesWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestAvailableSuggestionTypeInfosWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestSuggestionInfosWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestExportGraphForPurpose:(id)arg1 error:(id*)arg2 ;
-(id)requestGraphStatisticsWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)requestHighlightEstimatesWithReply:(/*^block*/id)arg1 ;
-(id)requestGraphStatus:(id*)arg1 ;
-(id)requestGraphPerformQuery:(id)arg1 error:(id*)arg2 ;
-(void)requestGraphRebuildFractionCompletedWithReply:(/*^block*/id)arg1 ;
-(BOOL)requestInvalidateTransientCaches:(id*)arg1 ;
-(BOOL)requestInvalidatePersistentCaches:(id*)arg1 ;
-(void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 reply:(/*^block*/id)arg6 ;
-(id)requestMetadataSnapshotFolderCreation:(id*)arg1 ;
-(id)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 error:(id*)arg4 ;
-(void)generateMemoriesRelatedDiagnosticsLogsWithReply:(/*^block*/id)arg1 ;
-(id)requestDefaultsObjectForKey:(id)arg1 withError:(id*)arg2 ;
-(BOOL)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 withError:(id*)arg3 ;
-(BOOL)requestTitleForMemoryWithLocalIdentifier:(id)arg1 title:(id*)arg2 subtitle:(id*)arg3 error:(id*)arg4 ;
-(BOOL)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 title:(id*)arg3 subtitle:(id*)arg4 error:(id*)arg5 ;
-(BOOL)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 title:(id*)arg3 subtitle:(id*)arg4 error:(id*)arg5 ;
-(BOOL)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 title:(id*)arg3 subtitle:(id*)arg4 error:(id*)arg5 ;
-(id)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)requestSuggestedContributionsForAssetsMetadata:(id)arg1 error:(id*)arg2 ;
-(BOOL)requestHighlightEnrichmentWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)requestEnrichmentWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)requestHighlightCollectionEnrichmentWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)requestAssetRevGeocodingWithError:(id*)arg1 ;
-(BOOL)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg1 withError:(id*)arg2 ;
-(id)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)requestSharingSuggestionsFromMessageStrings:(id)arg1 participantPHIdentifiers:(id)arg2 error:(id*)arg3 ;
-(id)requestPeopleSuggestionLearningStatisticsWithError:(id*)arg1 ;
-(id)requestPeopleSuggestionLearningWithError:(id*)arg1 ;
-(id)requestTextFeaturesForMomentLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)requestM5CompatibleMemoriesReturningError:(id*)arg1 ;
-(id)runCurationWithItems:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)reportMetricsWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)requestRunPFLWithAttachments:(id)arg1 recipeUserInfo:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(id)requestContactInferencesForPersonLocalIdentifiers:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)requestRelationshipInferencesForPersonLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)requestSuggestedPersonsWithOptions:(id)arg1 error:(id*)arg2 ;
@end

