/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
@class PGManager, NSMutableArray, NSArray, NSMutableIndexSet, NSMutableDictionary, NSMapTable, NSDate, CLLocation, CLSHolidayCalendarEventService, NSObject, NSSet, PGGraph, PHPhotoLibrary;

@interface PGMemoryController : NSObject {

	PGManager* _manager;
	NSMutableArray* _latentMemories;
	NSArray* _existingMemories;
	NSArray* _blacklistedMemories;
	long long _numberOfDaysSinceLastMemory;
	NSMutableIndexSet* _matchedCategories;
	NSMutableIndexSet* _excludedFeaturedSubcategories;
	NSArray* _existingSuggestions;
	NSMutableDictionary* _numberOfAssetsByMomentIDs;
	NSMutableDictionary* _momentsByMomentIDs;
	NSMutableDictionary* _backingMomentIDsByPHMemoryIDs;
	NSMutableDictionary* _featureVectorByPHMemoryIDs;
	NSMapTable* _numberOfMemoryGenerationDaysByMemory;
	NSDate* _localDate;
	NSDate* _universalDate;
	CLLocation* _location;
	NSDate* _earliestDate;
	NSDate* _latestDate;
	NSDate* _directModeStartDate;
	NSDate* _directModeEndDate;
	CLSHolidayCalendarEventService* _holidayService;
	unsigned long long _currentRandom;
	BOOL _isLastResort;
	BOOL _isFirstTimesAfterUpgrade;
	BOOL _isAttemptingToUpgradeBestOfPastToFeaturedTrip;
	double _forcedBeta;
	NSMutableDictionary* _scenesProcessedByYear;
	NSMutableDictionary* _facesProcessedByYear;
	BOOL _isCreatingEverMemories;
	BOOL _bypassesCategoryCheckForUpgrades;
	BOOL _ignoresMomentIsInteresting;
	BOOL _ignoresMinimumNumberOfMoments;
	BOOL _ignoresMinimumNumberOfAssets;
	BOOL _skipsAssetCollection;
	BOOL _skipsCuration;
	BOOL _skipsTitleGeneration;
	BOOL _skipsWeekendUpgrades;
	BOOL _skipsMeaningfulEventUpgrades;
	BOOL _skipsBestOfPastUpgradeToFeaturedTrip;
	BOOL _skipsBlacklistedFeatureCheck;
	BOOL _isDryTesting;
	BOOL _probabilityAlwaysPasses;
	BOOL _usesIsUtilityForMemories;
	BOOL _looksIntoFuture;
	unsigned long long _numberOfNewMemoriesForPeriodicity;
	unsigned long long _numberOfNewMemoriesForUserRequest;
	unsigned long long _minimumNumberOfAssetsForMomentMemory;
	unsigned long long _minimumNumberOfAssetsForDisjointMomentsMemory;
	unsigned long long _minimumNumberOfAssetsForContiguousMomentsMemory;
	NSObject*<OS_os_log> _loggingConnection;
	/*^block*/id _progressBlock;
	NSSet* _mandatoryFeatures;
	NSSet* _blacklistedFeatures;
	NSSet* _categoryWhitelist;
	NSSet* _categoryBlacklist;

}

@property (readonly) PGGraph * graph; 
@property (readonly) PHPhotoLibrary * photoLibrary; 
@property (assign) unsigned long long numberOfNewMemoriesForPeriodicity;                                               //@synthesize numberOfNewMemoriesForPeriodicity=_numberOfNewMemoriesForPeriodicity - In the implementation block
@property (assign) unsigned long long numberOfNewMemoriesForUserRequest;                                               //@synthesize numberOfNewMemoriesForUserRequest=_numberOfNewMemoriesForUserRequest - In the implementation block
@property (readonly) unsigned long long minimumNumberOfAssetsForMomentMemory;                                          //@synthesize minimumNumberOfAssetsForMomentMemory=_minimumNumberOfAssetsForMomentMemory - In the implementation block
@property (readonly) unsigned long long minimumNumberOfAssetsForDisjointMomentsMemory;                                 //@synthesize minimumNumberOfAssetsForDisjointMomentsMemory=_minimumNumberOfAssetsForDisjointMomentsMemory - In the implementation block
@property (readonly) unsigned long long minimumNumberOfAssetsForContiguousMomentsMemory;                               //@synthesize minimumNumberOfAssetsForContiguousMomentsMemory=_minimumNumberOfAssetsForContiguousMomentsMemory - In the implementation block
@property (readonly) NSObject*<OS_os_log> loggingConnection;                                                           //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (copy,readonly) id progressBlock;                                                                            //@synthesize progressBlock=_progressBlock - In the implementation block
@property (readonly) BOOL isCreatingEverMemories;                                                                      //@synthesize isCreatingEverMemories=_isCreatingEverMemories - In the implementation block
@property (readonly) BOOL looksIntoFuture;                                                                             //@synthesize looksIntoFuture=_looksIntoFuture - In the implementation block
@property (assign) BOOL bypassesCategoryCheckForUpgrades;                                                              //@synthesize bypassesCategoryCheckForUpgrades=_bypassesCategoryCheckForUpgrades - In the implementation block
@property (retain) NSSet * blacklistedFeatures;                                                                        //@synthesize blacklistedFeatures=_blacklistedFeatures - In the implementation block
@property (retain) NSSet * categoryWhitelist;                                                                          //@synthesize categoryWhitelist=_categoryWhitelist - In the implementation block
@property (retain) NSSet * categoryBlacklist;                                                                          //@synthesize categoryBlacklist=_categoryBlacklist - In the implementation block
@property (assign) BOOL ignoresMomentIsInteresting;                                                                    //@synthesize ignoresMomentIsInteresting=_ignoresMomentIsInteresting - In the implementation block
@property (assign) BOOL ignoresMinimumNumberOfMoments;                                                                 //@synthesize ignoresMinimumNumberOfMoments=_ignoresMinimumNumberOfMoments - In the implementation block
@property (assign) BOOL ignoresMinimumNumberOfAssets;                                                                  //@synthesize ignoresMinimumNumberOfAssets=_ignoresMinimumNumberOfAssets - In the implementation block
@property (assign) BOOL skipsAssetCollection;                                                                          //@synthesize skipsAssetCollection=_skipsAssetCollection - In the implementation block
@property (assign) BOOL skipsCuration;                                                                                 //@synthesize skipsCuration=_skipsCuration - In the implementation block
@property (assign) BOOL skipsTitleGeneration;                                                                          //@synthesize skipsTitleGeneration=_skipsTitleGeneration - In the implementation block
@property (assign) BOOL skipsWeekendUpgrades;                                                                          //@synthesize skipsWeekendUpgrades=_skipsWeekendUpgrades - In the implementation block
@property (assign) BOOL skipsMeaningfulEventUpgrades;                                                                  //@synthesize skipsMeaningfulEventUpgrades=_skipsMeaningfulEventUpgrades - In the implementation block
@property (assign) BOOL skipsBestOfPastUpgradeToFeaturedTrip;                                                          //@synthesize skipsBestOfPastUpgradeToFeaturedTrip=_skipsBestOfPastUpgradeToFeaturedTrip - In the implementation block
@property (assign) BOOL skipsBlacklistedFeatureCheck;                                                                  //@synthesize skipsBlacklistedFeatureCheck=_skipsBlacklistedFeatureCheck - In the implementation block
@property (assign) BOOL usesIsUtilityForMemories;                                                                      //@synthesize usesIsUtilityForMemories=_usesIsUtilityForMemories - In the implementation block
@property (readonly) unsigned long long maximumNumberOfFacesPerAssetForSingleFocusedPersonFacedAssets; 
@property (readonly) double minimumRatioOfFocusedPersonFacesPerAssetForMultipleFocusedPersonsFacedAssets; 
@property (assign) BOOL isDryTesting;                                                                                  //@synthesize isDryTesting=_isDryTesting - In the implementation block
@property (assign) BOOL probabilityAlwaysPasses;                                                                       //@synthesize probabilityAlwaysPasses=_probabilityAlwaysPasses - In the implementation block
@property (nonatomic,retain) NSSet * mandatoryFeatures;                                                                //@synthesize mandatoryFeatures=_mandatoryFeatures - In the implementation block
+(unsigned long long)minimumNumberOfCuratedAssetsForMemories;
+(void)computeMinimumNumbersOfAssetsWithCompletionBlock:(/*^block*/id)arg1 ;
+(double)computeBetaWithManager:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)initWithManager:(id)arg1 ;
-(PGGraph *)graph;
-(id)progressBlock;
-(PHPhotoLibrary *)photoLibrary;
-(NSObject*<OS_os_log>)loggingConnection;
-(id)curatedKeyAssetForAssetCollection:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 ;
-(id)createMemoriesWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(void)setBlacklistedFeatures:(NSSet *)arg1 ;
-(NSSet *)blacklistedFeatures;
-(void)performSynchronouslyOnGraphUsingBlock:(/*^block*/id)arg1 ;
-(void)matchFeatureVector:(id)arg1 relatedType:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(unsigned long long)maximumNumberOfFacesPerAssetForSingleFocusedPersonFacedAssets;
-(double)minimumRatioOfFocusedPersonFacesPerAssetForMultipleFocusedPersonsFacedAssets;
-(unsigned)randomNumber;
-(unsigned)randomNumberLessThan:(unsigned long long)arg1 ;
-(BOOL)probabilityPassWithThreshold:(double)arg1 ;
-(id)momentForMomentID:(id)arg1 ;
-(BOOL)eventIsTimely:(id)arg1 ;
-(BOOL)libraryHasEnoughProcessedScenes:(BOOL)arg1 andProcessedFaces:(BOOL)arg2 ;
-(BOOL)libraryHasEnoughScenesProcessed:(BOOL)arg1 haveFacesProcessed:(BOOL)arg2 forYear:(id)arg3 ;
-(BOOL)momentNodesHaveScenesProcessed:(id)arg1 ;
-(BOOL)eventPassesContextualityCheck:(id)arg1 ;
-(BOOL)isUpcomingDayOfYearFromReferenceDate:(id)arg1 ;
-(BOOL)isUpcomingDayOfYearFromReferenceDate:(id)arg1 localDate:(id)arg2 ;
-(BOOL)_memories:(id)arg1 containMemory:(id)arg2 ;
-(BOOL)_memories:(id)arg1 containAssetCollection:(id)arg2 ;
-(BOOL)_assetCollection:(id)arg1 matchesAssetCollection:(id)arg2 ;
-(BOOL)_memories:(id)arg1 coverTypeOfMemory:(id)arg2 ;
-(unsigned long long)_numberOfAssetsInMomentsForIDs:(id)arg1 withNumberOfAssetsByMomentIDs:(id)arg2 ;
-(float)_assetOverlapBetweenMomentsForIDs:(id)arg1 andMomentsForIDs:(id)arg2 ;
-(float)_assetOverlapBetweenMomentsForIDs:(id)arg1 andMomentsForIDs:(id)arg2 withNumberOfAssetsByMomentIDs:(id)arg3 ;
-(BOOL)potentialMemory:(id)arg1 isTooSimilarTooSoonToPHMemory:(id)arg2 ;
-(id)_idsOfMomentsBackingPHMemory:(id)arg1 ;
-(BOOL)isOKToProceedWithDirectEarlyPotentialMemory:(id)arg1 ;
-(BOOL)isOKToProceedWithEarlyPotentialMemory:(id)arg1 ;
-(BOOL)canUsePotentialMemory:(id)arg1 isDebug:(BOOL)arg2 ;
-(BOOL)_wantsTodaysBirthdayWithReason:(unsigned long long)arg1 ;
-(id)_uuidOfPersonsWithBirthdayOnDate:(id)arg1 ;
-(BOOL)_doTodaysBirthdayWithLocalDate:(id)arg1 ;
-(BOOL)_wantsDayInHistoryWithReason:(unsigned long long)arg1 ;
-(BOOL)_doDayInHistoryWithLocalDate:(id)arg1 ;
-(BOOL)_wantsNearbyTodayWithReason:(unsigned long long)arg1 location:(id)arg2 ;
-(BOOL)_doNearbyTodayWithLocalDate:(id)arg1 andLocation:(id)arg2 ;
-(unsigned long long)desireLevelForYearSummaryWithLocalDate:(id)arg1 ;
-(BOOL)_doYearSummaryWithLocalDate:(id)arg1 ;
-(BOOL)_doBestOfRandomYear;
-(BOOL)_wantsBestOfPastWithReason:(unsigned long long)arg1 ;
-(BOOL)_doBestOfPastWithLocalDate:(id)arg1 ;
-(BOOL)_wantsRecentPastEventsWithReason:(unsigned long long)arg1 ;
-(BOOL)_doRecentPastEventsWithLocalDate:(id)arg1 ;
-(BOOL)_wantsUpcomingRelatedEventsWithReason:(unsigned long long)arg1 ;
-(BOOL)_doUpcomingRelatedEventsWithLocalDate:(id)arg1 ;
-(BOOL)_wantsKeyPeopleForUpcomingHolidayEventWithReason:(unsigned long long)arg1 ;
-(BOOL)_doKeyPeopleForUpcomingHolidayEventWithLocalDate:(id)arg1 ;
-(BOOL)_wantsTodayInTimeWithReason:(unsigned long long)arg1 ;
-(BOOL)_doTodayInTimeWithLocalDate:(id)arg1 ;
-(unsigned long long)_desireLevelForLastSeasonWithLocalDate:(id)arg1 ;
-(unsigned long long)_desireLevelForSeasonInHistoryWithLocalDate:(id)arg1 ;
-(BOOL)_doSeasonWithLocalDate:(id)arg1 forType:(unsigned long long)arg2 ;
-(BOOL)_wantsCelebrationOverTimeWithReason:(unsigned long long)arg1 ;
-(BOOL)_doCelebrationOverTimeWithLocalDate:(id)arg1 ;
-(BOOL)_wantsHomeAggregationWithLocalDate:(id)arg1 reason:(unsigned long long)arg2 ;
-(BOOL)_doHomeAggregationWithLocalDate:(id)arg1 ;
-(BOOL)_wantsFeaturedNeighborWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doFeaturedNeighborBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_wantsFeaturedPeopleWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doFeaturedPeopleBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_wantsFeaturedSocialGroupWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doFeaturedSocialGroupBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_wantsFeaturedPersonWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doPeopleMemoriesForPeopleWithUUID:(id)arg1 year:(long long)arg2 ;
-(BOOL)_doPersonOverTimeMemoriesForPersonWithName:(id)arg1 ;
-(BOOL)_doFeaturedPersonBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_wantsFeaturedPersonOverTimeWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doFeaturedPersonOverTimeBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_wantsFeaturedSocialGroupOverTimeWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doFeaturedSocialGroupOverTimeBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_wantsFeaturedTripWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doFeaturedTripBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedTripBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 ;
-(BOOL)_wantsFeaturedWeekendWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doFeaturedWeekendBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_wantsFeaturedPetWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doFeaturedPetBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_wantsFeaturedBabyWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doFeaturedBabyBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_wantsFeaturedPastSupersetWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doFeaturedPastSupersetBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_wantsFeaturedFoodieWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doFeaturedFoodieBeforeLocalDate:(id)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doFeaturedFoodieOfType:(id)arg1 kind:(id)arg2 beforeLocalDate:(id)arg3 oldMemory:(BOOL)arg4 ;
-(BOOL)_wantsFeaturedMeaningfulEventWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doFeaturedMeaningfulEventBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedMeaningfulEventBeforeLocalDate:(id)arg1 eventType:(unsigned long long)arg2 usingLowRequirements:(BOOL)arg3 oldMemory:(BOOL)arg4 ;
-(BOOL)_doFeaturedMeaningfulEventBeforeLocalDate:(id)arg1 meaning:(unsigned long long)arg2 lowRequirements:(BOOL)arg3 ;
-(BOOL)_wantsFeaturedMeaningfulEventAggregationWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doFeaturedMeaningfulEventAggregationBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedMeaningfulEventAggregationBeforeLocalDate:(id)arg1 eventType:(unsigned long long)arg2 usingLowRequirements:(BOOL)arg3 oldMemory:(BOOL)arg4 ;
-(BOOL)_doFeaturedMeaningfulEventAggregationBeforeLocalDate:(id)arg1 meaning:(unsigned long long)arg2 lowRequirements:(BOOL)arg3 ;
-(BOOL)_wantsFeaturedPeopleVisitingWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doFeaturedPeopleVisitingBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_wantsPlaceRegionWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doPlaceRegionBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_wantsPlaceLocationWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doPlaceLocationBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_wantsPlaceBusinessWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doPlaceBusinessBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_wantsPlaceAreaWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doPlaceAreaBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_wantsEarlyMomentsWithPeopleWithReason:(unsigned long long)arg1 ;
-(BOOL)_doEarlyMomentsWithPeopleForLocalDate:(id)arg1 ;
-(BOOL)_wantsThrowbackThursdayWithReason:(unsigned long long)arg1 ;
-(BOOL)_doThrowbackThursdayForLocalDate:(id)arg1 ;
-(BOOL)_doSometimeInHistory;
-(BOOL)_wantsContextualWithReason:(unsigned long long)arg1 location:(id)arg2 peopleNames:(id)arg3 ;
-(BOOL)_doContextualWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 ;
-(BOOL)_doContextualTodayWidgetWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 ;
-(BOOL)_wantsFeaturedRecurrentTripWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doFeaturedRecurrentTripBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(unsigned long long)_generatorTypeForFeaturedSubcategory:(unsigned long long)arg1 ;
-(unsigned long long)_featuredSubcategoryForGeneratorType:(unsigned long long)arg1 ;
-(BOOL)_hasExhaustedFeatured:(BOOL*)arg1 ;
-(BOOL)_wantsFeaturedForType:(unsigned long long)arg1 reason:(unsigned long long)arg2 usingLowRequirements:(BOOL)arg3 ;
-(BOOL)_doFeaturedForType:(unsigned long long)arg1 beforeLocalDate:(id)arg2 usingLowRequirements:(BOOL)arg3 oldMemory:(BOOL)arg4 ;
-(BOOL)_doOneFeaturedWithLocalDate:(id)arg1 reason:(unsigned long long)arg2 usingLowRequirements:(BOOL)arg3 hasExhaustedFeatured:(BOOL*)arg4 ;
-(id)_createOneMemoryWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 localDate:(id)arg3 location:(id)arg4 peopleNames:(id)arg5 ;
-(id)_createMoreMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(/*^block*/id)arg4 ;
-(double)updatedBeta:(double)arg1 forNumberOfDaysSinceLastMemory:(long long)arg2 ;
-(id)_createPeriodicMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(/*^block*/id)arg4 ;
-(id)_createTodayWidgetMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(/*^block*/id)arg4 ;
-(id)_createFirstEverMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(/*^block*/id)arg4 ;
-(id)_createSecondEverMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(/*^block*/id)arg4 ;
-(id)_createThirdEverMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(/*^block*/id)arg4 ;
-(id)_createFirstTimesAfterUpgradeMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(/*^block*/id)arg4 ;
-(unsigned long long)subcategoryForString:(id)arg1 ;
-(unsigned long long)_meaningFromString:(id)arg1 ;
-(id)_doDirectModeWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 parameters:(id)arg4 progress:(/*^block*/id)arg5 ;
-(void)resetIgnoresAndSkips;
-(unsigned long long)numberOfNewMemoriesForPeriodicity;
-(void)setNumberOfNewMemoriesForPeriodicity:(unsigned long long)arg1 ;
-(unsigned long long)numberOfNewMemoriesForUserRequest;
-(void)setNumberOfNewMemoriesForUserRequest:(unsigned long long)arg1 ;
-(unsigned long long)minimumNumberOfAssetsForMomentMemory;
-(unsigned long long)minimumNumberOfAssetsForDisjointMomentsMemory;
-(unsigned long long)minimumNumberOfAssetsForContiguousMomentsMemory;
-(BOOL)isCreatingEverMemories;
-(BOOL)bypassesCategoryCheckForUpgrades;
-(void)setBypassesCategoryCheckForUpgrades:(BOOL)arg1 ;
-(NSSet *)mandatoryFeatures;
-(void)setMandatoryFeatures:(NSSet *)arg1 ;
-(NSSet *)categoryWhitelist;
-(void)setCategoryWhitelist:(NSSet *)arg1 ;
-(NSSet *)categoryBlacklist;
-(void)setCategoryBlacklist:(NSSet *)arg1 ;
-(BOOL)ignoresMomentIsInteresting;
-(void)setIgnoresMomentIsInteresting:(BOOL)arg1 ;
-(BOOL)ignoresMinimumNumberOfMoments;
-(void)setIgnoresMinimumNumberOfMoments:(BOOL)arg1 ;
-(BOOL)ignoresMinimumNumberOfAssets;
-(void)setIgnoresMinimumNumberOfAssets:(BOOL)arg1 ;
-(BOOL)skipsAssetCollection;
-(void)setSkipsAssetCollection:(BOOL)arg1 ;
-(BOOL)skipsCuration;
-(void)setSkipsCuration:(BOOL)arg1 ;
-(BOOL)skipsTitleGeneration;
-(void)setSkipsTitleGeneration:(BOOL)arg1 ;
-(BOOL)skipsWeekendUpgrades;
-(void)setSkipsWeekendUpgrades:(BOOL)arg1 ;
-(BOOL)skipsMeaningfulEventUpgrades;
-(void)setSkipsMeaningfulEventUpgrades:(BOOL)arg1 ;
-(BOOL)skipsBestOfPastUpgradeToFeaturedTrip;
-(void)setSkipsBestOfPastUpgradeToFeaturedTrip:(BOOL)arg1 ;
-(BOOL)skipsBlacklistedFeatureCheck;
-(void)setSkipsBlacklistedFeatureCheck:(BOOL)arg1 ;
-(BOOL)isDryTesting;
-(void)setIsDryTesting:(BOOL)arg1 ;
-(BOOL)probabilityAlwaysPasses;
-(void)setProbabilityAlwaysPasses:(BOOL)arg1 ;
-(BOOL)usesIsUtilityForMemories;
-(void)setUsesIsUtilityForMemories:(BOOL)arg1 ;
-(BOOL)looksIntoFuture;
-(id)assetFetchOptionsForMemories;
-(id)bestAssetInAssets:(id)arg1 forReferencePersonsWithLocalIdentifiers:(id)arg2 requiredMinimumNumberOfReferencePersons:(unsigned long long)arg3 ;
-(id)feederForMemoriesWithFeeder:(id)arg1 didFeederChange:(BOOL*)arg2 ;
-(id)feederForMemoriesWithAssetCollection:(id)arg1 ;
-(id)keyAssetWithFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)curatedAssetsWithFeeder:(id)arg1 options:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)filteredAssetCollectionFromAssetCollection:(id)arg1 withContextualAssets:(id)arg2 approximateTimeDistance:(double)arg3 ;
-(id)bestAssetsInAssets:(id)arg1 forReferencePersons:(id)arg2 minimumRatioOfReferencePersonsPerAsset:(double)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)beautifyAssets:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)curatedAssetsForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 withContextualAssetLocalIdentifiers:(id)arg3 minimumProportion:(double)arg4 progressBlock:(/*^block*/id)arg5 ;
-(id)filteredAssetsFromAssetCollection:(id)arg1 throughCriteria:(id)arg2 ;
-(id)deduplicatedAssets:(id)arg1 ;
-(id)dejunkAndDedupeAssetsInAssets:(id)arg1 options:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)blacklistableFeaturesForPotentialMemory:(id)arg1 ;
-(id)anyBlacklistedFeatureHitByEarlyPotentialMemory:(id)arg1 ;
-(id)anyBlacklistedFeatureHitByCompletePotentialMemory:(id)arg1 ;
-(BOOL)anyBlacklistedFeatureIsHitByEvent:(id)arg1 ;
-(id)_holidayFeatureForPotentialMemory:(id)arg1 prominentOnly:(BOOL)arg2 ;
-(id)_dateFeatureForPotentialMemory:(id)arg1 prominentOnly:(BOOL)arg2 ;
-(id)_areaFeatureForPotentialMemory:(id)arg1 prominentOnly:(BOOL)arg2 ;
-(id)_addressFeatureForPotentialMemory:(id)arg1 prominentOnly:(BOOL)arg2 ;
-(id)_localIdentifierOfMainPersonInEvent:(id)arg1 prominentOnly:(BOOL)arg2 ;
-(id)_personFeatureForPotentialMemory:(id)arg1 prominentOnly:(BOOL)arg2 ;
-(id)_timeBlacklistableFeatureForPotentialMemory:(id)arg1 ;
-(id)_locationBlacklistableFeatureForPotentialMemory:(id)arg1 ;
-(id)_peopleBlacklistableFeatureForPotentialMemory:(id)arg1 ;
-(id)_holidayFeatureForPotentialMemory:(id)arg1 ;
-(id)_dateFeatureForPotentialMemory:(id)arg1 ;
-(id)_areaFeatureForPotentialMemory:(id)arg1 ;
-(id)_addressFeatureForPotentialMemory:(id)arg1 ;
-(id)_personFeatureForEarlyPotentialMemory:(id)arg1 ;
@end

