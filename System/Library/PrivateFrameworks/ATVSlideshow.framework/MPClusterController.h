/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, MPCluster, MPDocument, NSDate;

@interface MPClusterController : NSObject {

	NSMutableDictionary* mSlides;
	NSMutableDictionary* mSlideClusters;
	MPCluster* mAllSlidesCluster;
	double mMinimumRequiredClusterRating;
	MPDocument* mAuthoredDocument;
	NSDate* mOldestSlideTimestamp;
	NSDate* mNewestSlideTimestamp;

}
+(id)sharedController;
+(void)releaseSharedController;
-(id)init;
-(void)dealloc;
-(void)flush;
-(void)setAuthoredDocument:(id)arg1 ;
-(id)allSlides;
-(id)orderedAndPrioritizedSlideClusters;
-(void)updateClusterRatings;
-(id)clustersBasedOnOrderedPaths:(id)arg1 ;
-(id)allSlidesSortedByPaths:(id)arg1 ;
-(id)slideForPath:(id)arg1 ;
-(id)findBestCluster:(id)arg1 withMaxEffectSize:(long long)arg2 idealEffectSize:(long long)arg3 ;
-(long long)addSlideForPath:(id)arg1 withIndex:(long long)arg2 ;
-(id)clusterSlidesSortedByUserDefinedSortOrder:(id)arg1 userDefinedSlideOrder:(id)arg2 ;
-(id)allSlidesSortedChronologically;
-(void)resetAllUsageCounters;
-(void)addKeywords:(id)arg1 forSlide:(id)arg2 ;
-(void)updateYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateMonthClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateMonthOfYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateDayOfYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateHourOfYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateMinuteOfYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateRoundedFiveMinuteOfYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateRoundedFifteenMinuteOfYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateAllSlidesClusterWithSlide:(id)arg1 ;
-(id)allSlidesSortedByUsage;
-(id)yearClusterForAssetAtPath:(id)arg1 ;
-(id)monthClusterForAssetAtPath:(id)arg1 ;
-(id)monthOfYearClusterForAssetAtPath:(id)arg1 ;
-(id)dayOfYearClusterForAssetAtPath:(id)arg1 ;
-(id)hourOfYearClusterForAssetAtPath:(id)arg1 ;
-(id)minuteOfYearClusterForAssetAtPath:(id)arg1 ;
-(id)roundedFiveMinuteOfYearClusterForAssetAtPath:(id)arg1 ;
-(id)roundedFifteenMinuteOfYearClusterForAssetAtPath:(id)arg1 ;
-(id)findBestCluster:(id)arg1 ;
-(void)_removeAllSingleSlideClustersForClusterCategory:(id)arg1 ;
-(id)prioritizedSlideClustersDictionary;
-(id)yearClusters;
-(id)monthClusters;
-(id)monthOfYearClusters;
-(id)dayOfYearClusters;
-(id)hourOfYearClusters;
-(id)minuteOfYearClusters;
-(id)roundedFiveMinuteOfYearClusters;
-(id)roundedFifteenMinuteOfYearClusters;
-(id)keywordClusters;
-(id)locationClusters;
-(id)userProvidedClusters;
-(void)removeAllSingleSlideClusters;
-(void)updateRatingsForYearClusters;
-(void)updateRatingsForMonthClusters;
-(void)updateRatingsForMonthOfYearClusters;
-(void)updateRatingsForDayOfYearClusters;
-(void)updateRatingsForHourOfYearClusters;
-(void)updateRatingsForMinuteOfYearClusters;
-(void)updateRatingsForRoundedFiveMinuteOfYearClusters;
-(void)updateRatingsForRoundedFifteenMinuteOfYearClusters;
-(void)updateRatingsForKeywordClusters;
-(void)updateRatingsForLocationClusters;
-(id)nextLeastUsedSlides:(long long)arg1 forLayer:(id)arg2 markAsUsed:(BOOL)arg3 ;
-(id)clusterSlidesSortedChronologically:(id)arg1 ;
-(void)sortClusterSlidesChronologically:(id*)arg1 ;
-(void)flushClusters;
-(id)findBestChronologicalCluster:(id)arg1 startingWithSlide:(id)arg2 ;
-(id)findBestClusterBasedOnUserDefinedSlideOrder:(id)arg1 startingWithSlide:(id)arg2 ;
-(void)addPaths:(id)arg1 toUserDefinedCluster:(id)arg2 ;
-(void)createLocationClustersForPaths:(id)arg1 ;
-(void)dumpClustersStatistics;
-(void)dumpSlidesStatistics;
@end

