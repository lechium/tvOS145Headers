/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSSet, NSString;

@interface PPLocationQuery : NSObject <NSCopying, NSSecureCoding> {

	BOOL _excludingWithoutSentiment;
	BOOL _orderByAscendingDate;
	unsigned long long _limit;
	NSDate* _fromDate;
	NSDate* _toDate;
	NSDate* _scoringDate;
	NSSet* _matchingSourceBundleIds;
	NSSet* _excludingSourceBundleIds;
	unsigned long long _deviceFilter;
	double _perRecordDecayRate;
	double _decayRate;
	NSString* _fuzzyMatchingString;
	NSSet* _matchingCategories;
	NSSet* _matchingAlgorithms;
	NSSet* _excludingAlgorithms;
	NSString* _matchingContactHandle;
	unsigned long long _consumer;

}

@property (assign,nonatomic) unsigned long long consumer;                   //@synthesize consumer=_consumer - In the implementation block
@property (assign,nonatomic) BOOL orderByAscendingDate;                     //@synthesize orderByAscendingDate=_orderByAscendingDate - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                      //@synthesize limit=_limit - In the implementation block
@property (nonatomic,retain) NSDate * fromDate;                             //@synthesize fromDate=_fromDate - In the implementation block
@property (nonatomic,retain) NSDate * toDate;                               //@synthesize toDate=_toDate - In the implementation block
@property (nonatomic,retain) NSDate * scoringDate;                          //@synthesize scoringDate=_scoringDate - In the implementation block
@property (nonatomic,retain) NSSet * matchingSourceBundleIds;               //@synthesize matchingSourceBundleIds=_matchingSourceBundleIds - In the implementation block
@property (nonatomic,retain) NSSet * excludingSourceBundleIds;              //@synthesize excludingSourceBundleIds=_excludingSourceBundleIds - In the implementation block
@property (assign,nonatomic) unsigned long long deviceFilter;               //@synthesize deviceFilter=_deviceFilter - In the implementation block
@property (assign,nonatomic) double perRecordDecayRate;                     //@synthesize perRecordDecayRate=_perRecordDecayRate - In the implementation block
@property (assign,nonatomic) double decayRate;                              //@synthesize decayRate=_decayRate - In the implementation block
@property (nonatomic,retain) NSString * fuzzyMatchingString;                //@synthesize fuzzyMatchingString=_fuzzyMatchingString - In the implementation block
@property (nonatomic,retain) NSSet * matchingCategories;                    //@synthesize matchingCategories=_matchingCategories - In the implementation block
@property (nonatomic,retain) NSSet * matchingAlgorithms;                    //@synthesize matchingAlgorithms=_matchingAlgorithms - In the implementation block
@property (nonatomic,retain) NSSet * excludingAlgorithms;                   //@synthesize excludingAlgorithms=_excludingAlgorithms - In the implementation block
@property (assign,nonatomic) BOOL excludingWithoutSentiment;                //@synthesize excludingWithoutSentiment=_excludingWithoutSentiment - In the implementation block
@property (nonatomic,retain) NSString * matchingContactHandle;              //@synthesize matchingContactHandle=_matchingContactHandle - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_algorithmsDescription:(id)arg1 ;
+(id)_matchingCategoriesDescription:(id)arg1 ;
+(id)queryForMapsWithLimit:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setConsumer:(unsigned long long)arg1 ;
-(unsigned long long)consumer;
-(NSDate *)toDate;
-(double)decayRate;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(void)setDeviceFilter:(unsigned long long)arg1 ;
-(NSDate *)fromDate;
-(void)setFromDate:(NSDate *)arg1 ;
-(void)setToDate:(NSDate *)arg1 ;
-(void)setDecayRate:(double)arg1 ;
-(BOOL)isEqualToLocationQuery:(id)arg1 ;
-(id)customizedDescription;
-(NSDate *)scoringDate;
-(void)setScoringDate:(NSDate *)arg1 ;
-(NSSet *)matchingSourceBundleIds;
-(void)setMatchingSourceBundleIds:(NSSet *)arg1 ;
-(NSSet *)excludingSourceBundleIds;
-(void)setExcludingSourceBundleIds:(NSSet *)arg1 ;
-(unsigned long long)deviceFilter;
-(double)perRecordDecayRate;
-(void)setPerRecordDecayRate:(double)arg1 ;
-(NSString *)fuzzyMatchingString;
-(void)setFuzzyMatchingString:(NSString *)arg1 ;
-(NSSet *)matchingCategories;
-(void)setMatchingCategories:(NSSet *)arg1 ;
-(NSSet *)matchingAlgorithms;
-(void)setMatchingAlgorithms:(NSSet *)arg1 ;
-(NSSet *)excludingAlgorithms;
-(void)setExcludingAlgorithms:(NSSet *)arg1 ;
-(BOOL)excludingWithoutSentiment;
-(void)setExcludingWithoutSentiment:(BOOL)arg1 ;
-(NSString *)matchingContactHandle;
-(void)setMatchingContactHandle:(NSString *)arg1 ;
-(BOOL)orderByAscendingDate;
-(void)setOrderByAscendingDate:(BOOL)arg1 ;
@end

