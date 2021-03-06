/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface REMLExplanation : NSObject
+(id)explanationForCondition:(id)arg1 ;
+(id)explanationForFeature:(id)arg1 mean:(float)arg2 variance:(float)arg3 ;
+(id)explanationForFilteringRule:(id)arg1 ;
-(BOOL)_isSystemFeature:(id)arg1 ;
-(id)_formattedNameForFeature:(id)arg1 style:(unsigned long long)arg2 ;
-(BOOL)_canCombineWithSimilarExplanation:(id)arg1 ;
-(long long)_rankExplanationToSimilarExplanation:(id)arg1 ;
-(id)_formattedFeatureListFromFeatures:(id)arg1 style:(unsigned long long)arg2 ;
-(BOOL)canCombineExplanationWithExplanation:(id)arg1 ;
-(id)explanationByCombiningWithExplanation:(id)arg1 ;
-(BOOL)shouldProvideExplanation;
-(id)explanationWithStyle:(unsigned long long)arg1 ;
-(long long)rankExplanationToExplanation:(id)arg1 ;
@end

