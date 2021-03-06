/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKKnowledgeQuerying;
@class _PSContactResolver, NSDictionary, _PSRuleRankingMLModel;

@interface _PSRuleMiningModel : NSObject {

	BOOL __PSRuleMiningIsMLModelInUse;
	BOOL __PSRuleMiningIsAdaptedMLModelOK;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	_PSContactResolver* _contactResolver;
	long long __PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions;
	long long __PSRuleMiningModelRegularizingContextOverlapConstraint;
	double __PSRuleMiningModelMinRuleConfidenceForSuggestion;
	double __PSRuleMiningMLModelScoreThreshold;
	NSDictionary* _psConfigForAdaptableModel;
	_PSRuleRankingMLModel* _ruleRankingModel;

}

@property (assign,nonatomic) long long _PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions;              //@synthesize _PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions=__PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions - In the implementation block
@property (assign,nonatomic) long long _PSRuleMiningModelRegularizingContextOverlapConstraint;                     //@synthesize _PSRuleMiningModelRegularizingContextOverlapConstraint=__PSRuleMiningModelRegularizingContextOverlapConstraint - In the implementation block
@property (assign,nonatomic) double _PSRuleMiningModelMinRuleConfidenceForSuggestion;                              //@synthesize _PSRuleMiningModelMinRuleConfidenceForSuggestion=__PSRuleMiningModelMinRuleConfidenceForSuggestion - In the implementation block
@property (assign,nonatomic) double _PSRuleMiningMLModelScoreThreshold;                                            //@synthesize _PSRuleMiningMLModelScoreThreshold=__PSRuleMiningMLModelScoreThreshold - In the implementation block
@property (assign,nonatomic) BOOL _PSRuleMiningIsMLModelInUse;                                                     //@synthesize _PSRuleMiningIsMLModelInUse=__PSRuleMiningIsMLModelInUse - In the implementation block
@property (assign,nonatomic) BOOL _PSRuleMiningIsAdaptedMLModelOK;                                                 //@synthesize _PSRuleMiningIsAdaptedMLModelOK=__PSRuleMiningIsAdaptedMLModelOK - In the implementation block
@property (retain) NSDictionary * psConfigForAdaptableModel;                                                       //@synthesize psConfigForAdaptableModel=_psConfigForAdaptableModel - In the implementation block
@property (retain) _PSRuleRankingMLModel * ruleRankingModel;                                                       //@synthesize ruleRankingModel=_ruleRankingModel - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeQuerying> knowledgeStore;                                            //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,readonly) _PSContactResolver * contactResolver;                                               //@synthesize contactResolver=_contactResolver - In the implementation block
-(BOOL)isAdaptedModelCreated;
-(BOOL)isAdaptedModelUsed;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(_PSContactResolver *)contactResolver;
-(void)setPsConfigForAdaptableModel:(NSDictionary *)arg1 ;
-(NSDictionary *)psConfigForAdaptableModel;
-(id)extractAdaptedModelRecipeID;
-(void)updateModelProperties:(id)arg1 ;
-(id)initWithKnowledgeStore:(id)arg1 contactresolver:(id)arg2 withConfig:(id)arg3 ;
-(void)updateAdaptableModelProperties:(id)arg1 ;
-(void)loadMLModel;
-(id)suggestionProxiesWithPredictionContext:(id)arg1 photoSuggestedPeople:(id)arg2 supportedBundleIDs:(id)arg3 ;
-(id)shareExtensionSuggestionsFromContext:(id)arg1 ;
-(_PSRuleRankingMLModel *)ruleRankingModel;
-(void)setRuleRankingModel:(_PSRuleRankingMLModel *)arg1 ;
-(id)filterByRegularizingRulesByContextOverlap:(id)arg1 regulularizeItems:(id)arg2 queryItems:(id)arg3 regularizationConstraint:(unsigned long long)arg4 ;
-(id)filterByRegularizingRules:(id)arg1 invalidatedByAnyConflictingItems:(id)arg2 containingItemTypes:(id)arg3 ;
-(id)suggestionArrayWithArray:(id)arg1 appendingUniqueElementsByBundleIdFromArray:(id)arg2 ;
-(long long)_PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions;
-(void)set_PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions:(long long)arg1 ;
-(long long)_PSRuleMiningModelRegularizingContextOverlapConstraint;
-(void)set_PSRuleMiningModelRegularizingContextOverlapConstraint:(long long)arg1 ;
-(double)_PSRuleMiningModelMinRuleConfidenceForSuggestion;
-(void)set_PSRuleMiningModelMinRuleConfidenceForSuggestion:(double)arg1 ;
-(double)_PSRuleMiningMLModelScoreThreshold;
-(void)set_PSRuleMiningMLModelScoreThreshold:(double)arg1 ;
-(BOOL)_PSRuleMiningIsMLModelInUse;
-(void)set_PSRuleMiningIsMLModelInUse:(BOOL)arg1 ;
-(BOOL)_PSRuleMiningIsAdaptedMLModelOK;
-(void)set_PSRuleMiningIsAdaptedMLModelOK:(BOOL)arg1 ;
@end

