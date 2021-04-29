/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLMomentGenerationDataManagementPLHighlightItemModelReader;
@class NSDateInterval, PLFrequentLocationManager, PLLocalCreationDateCreator, PLDateRangeTitleGenerator, PLHighlightHierarchy, NSMutableSet, PLPhotosHighlightClusterGenerator;

@interface PLPhotosHighlightGenerator : NSObject {

	BOOL _didCallBeginGeneration;
	NSDateInterval* _recentHighlightsDateInterval;
	PLFrequentLocationManager* _frequentLocationManager;
	PLLocalCreationDateCreator* _localCreationDateCreator;
	PLDateRangeTitleGenerator* _dateRangeTitleGenerator;
	PLHighlightHierarchy* _entitiesToUpdate;
	NSMutableSet* _highlightsWithDeletedAssets;
	NSMutableSet* _upsertedHighlights;
	NSMutableSet* _highlightsToDelete;
	id<PLMomentGenerationDataManagement><PLHighlightItemModelReader> _dataManager;
	NSMutableSet* _highlightsNeedingNewKeyAsset;

}

@property (nonatomic,retain) PLHighlightHierarchy * entitiesToUpdate;                                                          //@synthesize entitiesToUpdate=_entitiesToUpdate - In the implementation block
@property (nonatomic,retain) NSMutableSet * highlightsWithDeletedAssets;                                                       //@synthesize highlightsWithDeletedAssets=_highlightsWithDeletedAssets - In the implementation block
@property (nonatomic,retain) NSMutableSet * upsertedHighlights;                                                                //@synthesize upsertedHighlights=_upsertedHighlights - In the implementation block
@property (nonatomic,retain) NSMutableSet * highlightsToDelete;                                                                //@synthesize highlightsToDelete=_highlightsToDelete - In the implementation block
@property (assign,nonatomic) BOOL didCallBeginGeneration;                                                                      //@synthesize didCallBeginGeneration=_didCallBeginGeneration - In the implementation block
@property (assign,nonatomic,__weak) id<PLMomentGenerationDataManagement><PLHighlightItemModelReader> dataManager;              //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,readonly) NSDateInterval * recentHighlightsDateInterval;                                                  //@synthesize recentHighlightsDateInterval=_recentHighlightsDateInterval - In the implementation block
@property (nonatomic,readonly) PLPhotosHighlightClusterGenerator * highlightClusterGenerator; 
@property (nonatomic,retain) NSMutableSet * highlightsNeedingNewKeyAsset;                                                      //@synthesize highlightsNeedingNewKeyAsset=_highlightsNeedingNewKeyAsset - In the implementation block
@property (nonatomic,readonly) PLFrequentLocationManager * frequentLocationManager;                                            //@synthesize frequentLocationManager=_frequentLocationManager - In the implementation block
@property (nonatomic,readonly) PLLocalCreationDateCreator * localCreationDateCreator;                                          //@synthesize localCreationDateCreator=_localCreationDateCreator - In the implementation block
@property (nonatomic,readonly) PLDateRangeTitleGenerator * dateRangeTitleGenerator;                                            //@synthesize dateRangeTitleGenerator=_dateRangeTitleGenerator - In the implementation block
+(void)initialize;
+(id)userDefaults;
+(BOOL)assetEligibleForCuration:(id)arg1 ;
+(void)updateKeyAssetForHighlights:(id)arg1 ;
+(id)_provisionalKeyAssetForDayHighlight:(id)arg1 ;
+(id)_provisionalKeyAssetForDayGroupHighlight:(id)arg1 ;
+(id)_provisionalKeyAssetForMonthAndYearHighlight:(id)arg1 ;
+(id)_bestAssetInAssets:(id)arg1 fallback:(BOOL)arg2 ;
+(double)curationScoreForAsset:(id)arg1 ;
+(BOOL)_shouldUpdateKeyAssetForParentHighlight:(id)arg1 withKeyAssetObjectID:(id)arg2 ;
+(void)_updateParentHighlighNeedingNewKeyAsset:(id)arg1 withProvisionalKeyAsset:(id)arg2 updatedHighlights:(id)arg3 ;
+(id)provisionalKeyAssetForHighlight:(id)arg1 ;
+(BOOL)assetEligibleForRecents:(id)arg1 ;
+(void)updateTitleForHighlights:(id)arg1 forKind:(unsigned short)arg2 forceUpdateLocale:(BOOL)arg3 dateRangeTitleGenerator:(id)arg4 ;
-(PLHighlightHierarchy *)entitiesToUpdate;
-(NSMutableSet *)highlightsWithDeletedAssets;
-(NSMutableSet *)upsertedHighlights;
-(NSMutableSet *)highlightsToDelete;
-(BOOL)didCallBeginGeneration;
-(id<PLMomentGenerationDataManagement><PLHighlightItemModelReader>)dataManager;
-(NSDateInterval *)recentHighlightsDateInterval;
-(PLPhotosHighlightClusterGenerator *)highlightClusterGenerator;
-(NSMutableSet *)highlightsNeedingNewKeyAsset;
-(PLFrequentLocationManager *)frequentLocationManager;
-(PLLocalCreationDateCreator *)localCreationDateCreator;
-(PLDateRangeTitleGenerator *)dateRangeTitleGenerator;
-(id)initWithDataManager:(id)arg1 frequentLocationManager:(id)arg2 localCreationDateCreator:(id)arg3 ;
-(void)_resetProperties;
-(void)beginGenerationWithAssets:(id)arg1 hiddenAssets:(id)arg2 ;
-(void)registerHighlightsWithDeletedMoments:(id)arg1 ;
-(void)generateHighlightsForUpsertedMoments:(id)arg1 frequentLocationsDidChange:(BOOL)arg2 ;
-(id)_highlightToReuseForMoments:(id)arg1 ;
-(void)_insertDayPhotosHighlightCluster:(id)arg1 ;
-(id)_insertDayGroupPhotosHighlightCluster:(id)arg1 ;
-(BOOL)_updateHighlightProperties:(id)arg1 fromHighlightCluster:(id)arg2 ;
-(id)_titleForAggregationDayGroupHighlight:(id)arg1 ;
-(void)finishGeneration;
-(void)processRecentHighlights;
-(void)processUnprocessedMomentLocations;
-(void)updateHighlightTitles;
-(void)cleanupEmptyHighlights;
-(id)_fetchAllMoments;
-(id)_fetchMomentsWithLocationTypeUnprocessed;
-(id)_fetchMomentsRequiringLocationProcessingWhenFrequentLocationsChanged;
-(id)_lastHighlightTitlesUpdateDay;
-(void)_setLastHighlightTitlesUpdateDay:(id)arg1 ;
-(id)_highlightMomentClustersForMoments:(id)arg1 excludingMomentIds:(id)arg2 ;
-(id)_collectMomentsRequiringReprocessingFromMoments:(id)arg1 withAllMoments:(id)arg2 ;
-(void)setEntitiesToUpdate:(PLHighlightHierarchy *)arg1 ;
-(void)setHighlightsWithDeletedAssets:(NSMutableSet *)arg1 ;
-(void)setUpsertedHighlights:(NSMutableSet *)arg1 ;
-(void)setHighlightsToDelete:(NSMutableSet *)arg1 ;
-(void)setDidCallBeginGeneration:(BOOL)arg1 ;
-(void)setDataManager:(id<PLMomentGenerationDataManagement><PLHighlightItemModelReader>)arg1 ;
-(void)setHighlightsNeedingNewKeyAsset:(NSMutableSet *)arg1 ;
-(id)fetchAllOngoingTripDayGroupHighlights;
-(id)fetchAllRecentHighlights;
-(BOOL)setDefaultVisibilityStateForHighlight:(id)arg1 withHighlightCluster:(id)arg2 ;
-(void)updateCurationForHighlight:(id)arg1 withAssetsBelongingToCuration:(id)arg2 ;
-(void)resetDayGroupCurationForAsset:(id)arg1 ;
-(void)resetPreviousRecentHighlightCurationForHighlight:(id)arg1 ;
-(void)updateRecentHighlightCurationForHighlight:(id)arg1 ;
-(void)generateHighlightListForUpdatedHighlights:(id)arg1 deletedHighlights:(id)arg2 ;
-(void)updateHighlightNeedingNewKeyAssetsWithAsset:(id)arg1 ;
-(void)_updateDayHighlight:(id)arg1 withNewAssets:(id)arg2 ;
-(BOOL)_highlightTypeSupportsVisibilityStateDayOnly:(unsigned short)arg1 ;
-(void)_updateDayGroupHighlight:(id)arg1 withNewAssets:(id)arg2 ;
-(void)_consumeHighlightItemListChanges:(id)arg1 forKind:(unsigned short)arg2 rule:(id)arg3 resultBlock:(/*^block*/id)arg4 ;
-(id)updateElectedEventForUpdatedMonths:(id)arg1 ;
@end

