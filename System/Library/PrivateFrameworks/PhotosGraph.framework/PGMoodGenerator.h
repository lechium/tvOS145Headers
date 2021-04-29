/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHAssetCollection, PGManager, PGMoodVector, PGMoodGeneratorOptions;

@interface PGMoodGenerator : NSObject {

	PHAssetCollection* _assetCollection;
	PGManager* _graphManager;
	unsigned long long _suggestedMood;
	PGMoodVector* _positiveMoodVector;
	PGMoodVector* _negativeMoodVector;
	PGMoodVector* _historyWeightedPositiveMoodVector;
	PGMoodGeneratorOptions* _options;
	double _positiveThreshold;
	double _negativeThreshold;

}

@property (retain) PGMoodGeneratorOptions * options;              //@synthesize options=_options - In the implementation block
@property (assign) double positiveThreshold;                      //@synthesize positiveThreshold=_positiveThreshold - In the implementation block
@property (assign) double negativeThreshold;                      //@synthesize negativeThreshold=_negativeThreshold - In the implementation block
-(PGMoodGeneratorOptions *)options;
-(void)setOptions:(PGMoodGeneratorOptions *)arg1 ;
-(unsigned long long)suggestedMood;
-(unsigned long long)recommendedMoods;
-(unsigned long long)forbiddenMoods;
-(id)historyWeightedPositiveMoodVector;
-(id)negativeMoodVector;
-(id)positiveMoodVector;
-(id)initWithAssetCollection:(id)arg1 graphManager:(id)arg2 options:(id)arg3 ;
-(id)_moodSources;
-(void)_processMoodSources;
-(double)positiveThreshold;
-(void)setPositiveThreshold:(double)arg1 ;
-(double)negativeThreshold;
-(void)setNegativeThreshold:(double)arg1 ;
@end

