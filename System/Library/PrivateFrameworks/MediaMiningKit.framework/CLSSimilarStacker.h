/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CLSSimilarStacker : NSObject {

	long long _algorithm;
	/*^block*/id _sceneprintGetterBlock;
	double _distanceThresholdForIdenticalSimilarity;
	double _distanceThresholdForIdenticalSimilarityWithPeople;
	double _distanceThresholdForSemanticalSimilarity;
	double _distanceThresholdForSemanticalSimilarityWithPeople;
	double _distanceThresholdForSemanticalSimilarityWithPersons;

}

@property (readonly) long long algorithm;                                                             //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,copy) id sceneprintGetterBlock;                                                  //@synthesize sceneprintGetterBlock=_sceneprintGetterBlock - In the implementation block
@property (assign,nonatomic) double distanceThresholdForIdenticalSimilarity;                          //@synthesize distanceThresholdForIdenticalSimilarity=_distanceThresholdForIdenticalSimilarity - In the implementation block
@property (assign,nonatomic) double distanceThresholdForIdenticalSimilarityWithPeople;                //@synthesize distanceThresholdForIdenticalSimilarityWithPeople=_distanceThresholdForIdenticalSimilarityWithPeople - In the implementation block
@property (assign,nonatomic) double distanceThresholdForSemanticalSimilarity;                         //@synthesize distanceThresholdForSemanticalSimilarity=_distanceThresholdForSemanticalSimilarity - In the implementation block
@property (assign,nonatomic) double distanceThresholdForSemanticalSimilarityWithPeople;               //@synthesize distanceThresholdForSemanticalSimilarityWithPeople=_distanceThresholdForSemanticalSimilarityWithPeople - In the implementation block
@property (assign,nonatomic) double distanceThresholdForSemanticalSimilarityWithPersons;              //@synthesize distanceThresholdForSemanticalSimilarityWithPersons=_distanceThresholdForSemanticalSimilarityWithPersons - In the implementation block
+(/*^block*/id)distanceBlockForAlgorithm:(long long)arg1 sceneprintGetterBlock:(/*^block*/id)arg2 ;
+(double)defaultDistanceThresholdForAlgorithm:(long long)arg1 similarity:(long long)arg2 ;
-(long long)algorithm;
-(id)initWithAlgorithm:(long long)arg1 ;
-(id)stackSimilarItems:(id)arg1 withSimilarity:(long long)arg2 timestampSupport:(BOOL)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)sceneprintGetterBlock;
-(double)distanceThresholdForIdenticalSimilarity;
-(double)distanceThresholdForIdenticalSimilarityWithPeople;
-(double)distanceThresholdForSemanticalSimilarity;
-(double)distanceThresholdForSemanticalSimilarityWithPeople;
-(double)distanceThresholdForSemanticalSimilarityWithPersons;
-(/*^block*/id)similarGroupComparator;
-(id)adaptiveStackSimilarItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(double)distanceBetweenItem:(id)arg1 andItem:(id)arg2 ;
-(double)distanceThresholdForSimilarity:(long long)arg1 ;
-(void)setSceneprintGetterBlock:(id)arg1 ;
-(void)setDistanceThresholdForIdenticalSimilarity:(double)arg1 ;
-(void)setDistanceThresholdForIdenticalSimilarityWithPeople:(double)arg1 ;
-(void)setDistanceThresholdForSemanticalSimilarity:(double)arg1 ;
-(void)setDistanceThresholdForSemanticalSimilarityWithPeople:(double)arg1 ;
-(void)setDistanceThresholdForSemanticalSimilarityWithPersons:(double)arg1 ;
@end
