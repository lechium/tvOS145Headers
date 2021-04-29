/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGAbstractSuggester.h>

@class PGSuggestionOptions, PGLongTailAdditionalOptions, NSArray, NSDictionary, NSMutableSet, NSString;

@interface PGLongTailSuggester : PGAbstractSuggester {

	PGSuggestionOptions* _options;
	PGLongTailAdditionalOptions* _additionalOptions;
	unsigned long long _maximumNumberOfSuggestions;
	unsigned long long _numberOfGeneratedSuggestions;
	unsigned _randomSeed;
	NSArray* _eligibleAssetUUIDs;
	NSDictionary* _verifiedPersonUUIDsByAssetUUIds;
	NSMutableSet* _suggestedAssetsFromPreviousBatch;
	NSMutableSet* _candidateAssetsFromPreviousBatch;
	NSString* _meNodeLocalIdentifier;

}
+(id)suggestionTypes;
+(id)suggestionSubtypes;
+(unsigned long long)randomIntegerWithUpperBound:(unsigned long long)arg1 seed:(unsigned)arg2 ;
-(void)reset;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)reasonsForSuggestion:(id)arg1 ;
-(BOOL)canGenerateSuggestionWithAsset:(id)arg1 onDate:(id)arg2 ;
-(void)startSuggestingWithOptions:(id)arg1 ;
-(id)nextSuggestionWithProgress:(/*^block*/id)arg1 ;
-(BOOL)_shouldUsePreviousBatchOfCandidateAssets;
-(id)_nextCandidateAssetsWithProgress:(/*^block*/id)arg1 ;
-(id)nextSuggestedAssetWithProgress:(/*^block*/id)arg1 ;
-(unsigned long long)_longTailScoreWithAsset:(id)arg1 withAdditionalOptions:(id)arg2 ;
-(id)_fetchVerifiedPersonUUIDsByAssetUUIds:(id)arg1 ;
-(id)_batchOfRandomAssetsWithCount:(unsigned long long)arg1 progress:(/*^block*/id)arg2 ;
-(id)highlightedAssetPredicate;
-(BOOL)isMomentNodeInteresting:(id)arg1 ;
-(id)allInterestingMomentsFromGraph:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)_eligibleAssetUUIDsWithProgress:(/*^block*/id)arg1 ;
-(id)_candidateByAssetUUIDsFromAssets:(id)arg1 ;
-(id)_bestAssetUUIDsFromCandidates:(id)arg1 percentile:(unsigned long long)arg2 ;
-(id)_assetUUIDByWeightedProbablisticSamplingFromAssetUUIDS:(id)arg1 weights:(id)arg2 ;
-(id)_assetUUIDsFromAssets:(id)arg1 atIndices:(id)arg2 ;
-(NSRange)_randomRangeWithLocationUpperBound:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 ;
@end

