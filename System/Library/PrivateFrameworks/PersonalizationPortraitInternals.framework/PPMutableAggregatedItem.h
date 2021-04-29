/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLCustomModel.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@protocol MLFeatureProvider;
@class NSDate, PPU16CountedSet, NSMutableSet, NSCountedSet, NSSet;

@interface PPMutableAggregatedItem : NSObject <MLCustomModel, MLFeatureProvider> {

	NSDate* _previousSourceDate;
	unsigned char _domain;
	double _multiplier;
	double _perRecordDecayRate;
	NSDate* _scoringDate;
	BOOL _userCreated;
	BOOL _matchesPrimaryLanguage;
	float _maxScore;
	float _minScore;
	float _sumScore;
	unsigned _sumDwellTimeInSeconds;
	unsigned _recordCount;
	unsigned _exactMatchInSourceTextCount;
	float _sumOfSourceDateInHours;
	float _sumOfSquaredSourceDateInHours;
	float _sumOfSquaredInterArrivalHours;
	float _decayedSum;
	float _decayRate;
	float _maxDecayedScore;
	PPU16CountedSet* _algorithmCountedSet;
	PPU16CountedSet* _namedEntityCategoryCountedSet;
	PPU16CountedSet* _rankHistogram;
	NSMutableSet* _osBuildSet;
	NSMutableSet* _assetVersionSet;
	NSCountedSet* _bundleIdCountedSet;
	NSMutableSet* _groupIdSet;
	PPU16CountedSet* _sourceHourCountedSet;
	PPU16CountedSet* _sourceDayOfWeekCountedSet;
	NSDate* _maxSourceDate;
	NSDate* _minSourceDate;
	NSDate* _maxRelevanceDate;
	id<MLFeatureProvider> _recordOfMaxDecayedScore;
	unsigned long long _sumLengthSeconds;
	unsigned long long _sumLengthCharacters;
	unsigned long long _sumDonationCount;
	unsigned long long _sumContactHandleCount;

}

@property (nonatomic,readonly) PPU16CountedSet * algorithmCountedSet;                        //@synthesize algorithmCountedSet=_algorithmCountedSet - In the implementation block
@property (nonatomic,readonly) PPU16CountedSet * namedEntityCategoryCountedSet;              //@synthesize namedEntityCategoryCountedSet=_namedEntityCategoryCountedSet - In the implementation block
@property (nonatomic,readonly) float maxScore;                                               //@synthesize maxScore=_maxScore - In the implementation block
@property (nonatomic,readonly) float minScore;                                               //@synthesize minScore=_minScore - In the implementation block
@property (nonatomic,readonly) float sumScore;                                               //@synthesize sumScore=_sumScore - In the implementation block
@property (nonatomic,readonly) PPU16CountedSet * rankHistogram;                              //@synthesize rankHistogram=_rankHistogram - In the implementation block
@property (nonatomic,readonly) unsigned sumDwellTimeInSeconds;                               //@synthesize sumDwellTimeInSeconds=_sumDwellTimeInSeconds - In the implementation block
@property (nonatomic,readonly) unsigned recordCount;                                         //@synthesize recordCount=_recordCount - In the implementation block
@property (nonatomic,readonly) unsigned exactMatchInSourceTextCount;                         //@synthesize exactMatchInSourceTextCount=_exactMatchInSourceTextCount - In the implementation block
@property (nonatomic,readonly) BOOL userCreated;                                             //@synthesize userCreated=_userCreated - In the implementation block
@property (nonatomic,readonly) NSMutableSet * osBuildSet;                                    //@synthesize osBuildSet=_osBuildSet - In the implementation block
@property (nonatomic,readonly) NSMutableSet * assetVersionSet;                               //@synthesize assetVersionSet=_assetVersionSet - In the implementation block
@property (nonatomic,readonly) NSCountedSet * bundleIdCountedSet;                            //@synthesize bundleIdCountedSet=_bundleIdCountedSet - In the implementation block
@property (nonatomic,readonly) NSMutableSet * groupIdSet;                                    //@synthesize groupIdSet=_groupIdSet - In the implementation block
@property (nonatomic,readonly) PPU16CountedSet * sourceHourCountedSet;                       //@synthesize sourceHourCountedSet=_sourceHourCountedSet - In the implementation block
@property (nonatomic,readonly) PPU16CountedSet * sourceDayOfWeekCountedSet;                  //@synthesize sourceDayOfWeekCountedSet=_sourceDayOfWeekCountedSet - In the implementation block
@property (nonatomic,readonly) NSDate * maxSourceDate;                                       //@synthesize maxSourceDate=_maxSourceDate - In the implementation block
@property (nonatomic,readonly) NSDate * minSourceDate;                                       //@synthesize minSourceDate=_minSourceDate - In the implementation block
@property (nonatomic,readonly) NSDate * maxRelevanceDate;                                    //@synthesize maxRelevanceDate=_maxRelevanceDate - In the implementation block
@property (nonatomic,readonly) float sumOfSourceDateInHours;                                 //@synthesize sumOfSourceDateInHours=_sumOfSourceDateInHours - In the implementation block
@property (nonatomic,readonly) float sumOfSquaredSourceDateInHours;                          //@synthesize sumOfSquaredSourceDateInHours=_sumOfSquaredSourceDateInHours - In the implementation block
@property (nonatomic,readonly) float sumOfSquaredInterArrivalHours;                          //@synthesize sumOfSquaredInterArrivalHours=_sumOfSquaredInterArrivalHours - In the implementation block
@property (nonatomic,readonly) float decayedSum;                                             //@synthesize decayedSum=_decayedSum - In the implementation block
@property (nonatomic,readonly) float decayRate;                                              //@synthesize decayRate=_decayRate - In the implementation block
@property (nonatomic,readonly) BOOL matchesPrimaryLanguage;                                  //@synthesize matchesPrimaryLanguage=_matchesPrimaryLanguage - In the implementation block
@property (nonatomic,readonly) id<MLFeatureProvider> recordOfMaxDecayedScore;                //@synthesize recordOfMaxDecayedScore=_recordOfMaxDecayedScore - In the implementation block
@property (nonatomic,readonly) float maxDecayedScore;                                        //@synthesize maxDecayedScore=_maxDecayedScore - In the implementation block
@property (nonatomic,readonly) unsigned long long sumLengthSeconds;                          //@synthesize sumLengthSeconds=_sumLengthSeconds - In the implementation block
@property (nonatomic,readonly) unsigned long long sumLengthCharacters;                       //@synthesize sumLengthCharacters=_sumLengthCharacters - In the implementation block
@property (nonatomic,readonly) unsigned long long sumDonationCount;                          //@synthesize sumDonationCount=_sumDonationCount - In the implementation block
@property (nonatomic,readonly) unsigned long long sumContactHandleCount;                     //@synthesize sumContactHandleCount=_sumContactHandleCount - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
+(float)_decay:(float)arg1 decayRate:(float)arg2 timeElapsedSeconds:(double)arg3 ;
-(unsigned)recordCount;
-(float)maxScore;
-(float)minScore;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(float)decayRate;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)userCreated;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
-(id)dictionaryForCountedSet:(id)arg1 ;
-(double)decayedScoreAddendForScore:(double)arg1 sourceDate:(id)arg2 featureProvider:(id)arg3 ;
-(void)_resetPropertiesWithAlgorithmMaxValue:(unsigned long long)arg1 namedEntityCategoryMaxValue:(unsigned long long)arg2 ;
-(id)_sortRecordsByDescendingSourceDate:(id)arg1 ;
-(id)initWithNamedEntityRecords:(id)arg1 scoringDate:(id)arg2 multiplier:(float)arg3 decayRate:(float)arg4 sorted:(BOOL)arg5 ;
-(id)initWithNamedEntityRecords:(id)arg1 scoringDate:(id)arg2 multiplier:(float)arg3 perRecordDecayRate:(float)arg4 decayRate:(float)arg5 ;
-(id)initWithTopicRecords:(id)arg1 scoringDate:(id)arg2 decayRate:(float)arg3 sorted:(BOOL)arg4 ;
-(id)initWithTopicRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4 ignoreMultiplier:(BOOL)arg5 ;
-(id)initWithLocationRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4 ;
-(PPU16CountedSet *)algorithmCountedSet;
-(PPU16CountedSet *)namedEntityCategoryCountedSet;
-(float)sumScore;
-(PPU16CountedSet *)rankHistogram;
-(unsigned)sumDwellTimeInSeconds;
-(unsigned)exactMatchInSourceTextCount;
-(NSMutableSet *)osBuildSet;
-(NSMutableSet *)assetVersionSet;
-(NSCountedSet *)bundleIdCountedSet;
-(NSMutableSet *)groupIdSet;
-(PPU16CountedSet *)sourceHourCountedSet;
-(PPU16CountedSet *)sourceDayOfWeekCountedSet;
-(NSDate *)maxSourceDate;
-(NSDate *)minSourceDate;
-(NSDate *)maxRelevanceDate;
-(float)sumOfSourceDateInHours;
-(float)sumOfSquaredSourceDateInHours;
-(float)sumOfSquaredInterArrivalHours;
-(float)decayedSum;
-(BOOL)matchesPrimaryLanguage;
-(id<MLFeatureProvider>)recordOfMaxDecayedScore;
-(float)maxDecayedScore;
-(unsigned long long)sumLengthSeconds;
-(unsigned long long)sumLengthCharacters;
-(unsigned long long)sumDonationCount;
-(unsigned long long)sumContactHandleCount;
@end

