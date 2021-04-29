/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PSIQueryDelegate;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PSIParse, NSArray, NSMutableDictionary, NSDictionary, NSMutableSet, NSString, NSSet, PSITokenizer;

@interface PSIQuery : NSObject {

	id<PSIQueryDelegate> _delegate;
	PSIParse* _baseParse;
	BOOL _baseParseCouldHaveResults;
	NSArray* _implicitelyTokenizedParses;
	BOOL _implicitlyTokenizedParsesCouldHaveResults;
	NSArray* _datedParses;
	NSArray* _implicitlyTokenizedDatedParses;
	NSArray* _wordEmbeddingParses;
	NSArray* _identifierTokens;
	NSMutableDictionary* _groupIdsByTokenKey;
	NSDictionary* _substitutionsByStringToken;
	NSArray* _socialGroupPersonIdentifiers;
	AB _didStart;
	AB _isCanceled;
	NSMutableSet* _socialGroupExtendedAssetIds;
	NSMutableSet* _socialGroupExtendedCollectionIds;
	BOOL _usesPrefixBasedWordEmbedding;
	BOOL _calculateTokenCounts;
	BOOL _enableImplicitTokenization;
	BOOL _implicitTokenizationUsePrefixMatch;
	BOOL _implicitTokenizationLastTokenUsesPrefixMatch;
	BOOL _preventUnnecessaryImplicitTokenization;
	BOOL _exactMatchIgnoreUntokenizedCharacters;
	BOOL _lastImplicitTokenAllowsWordEmbeddings;
	BOOL _useWildcardText;
	NSArray* _queryTokens;
	NSString* _searchText;
	unsigned long long _wordEmbeddingMode;
	NSDictionary* _substitutions;
	unsigned long long _numberOfNextKeywordSuggestionToProcess;
	NSArray* _nextKeywordSuggestions;
	NSSet* _sceneIdentifiers;
	NSArray* _dedupedGroupResults;
	unsigned long long _mergeFilterTokenAssetIDsIntervalID;

}

@property (assign,nonatomic) unsigned long long mergeFilterTokenAssetIDsIntervalID;                  //@synthesize mergeFilterTokenAssetIDsIntervalID=_mergeFilterTokenAssetIDsIntervalID - In the implementation block
@property (nonatomic,readonly) BOOL useWildcardText;                                                 //@synthesize useWildcardText=_useWildcardText - In the implementation block
@property (nonatomic,retain) NSDictionary * substitutions;                                           //@synthesize substitutions=_substitutions - In the implementation block
@property (nonatomic,retain) NSArray * nextKeywordSuggestions;                                       //@synthesize nextKeywordSuggestions=_nextKeywordSuggestions - In the implementation block
@property (nonatomic,copy) NSSet * sceneIdentifiers;                                                 //@synthesize sceneIdentifiers=_sceneIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * dedupedGroupResults;                                            //@synthesize dedupedGroupResults=_dedupedGroupResults - In the implementation block
@property (nonatomic,copy) NSSet * socialGroupExtendedAssetIds;                                      //@synthesize socialGroupExtendedAssetIds=_socialGroupExtendedAssetIds - In the implementation block
@property (nonatomic,copy) NSSet * socialGroupExtendedCollectionIds;                                 //@synthesize socialGroupExtendedCollectionIds=_socialGroupExtendedCollectionIds - In the implementation block
@property (nonatomic,readonly) PSITokenizer * tokenizer; 
@property (nonatomic,copy,readonly) NSArray * queryTokens;                                           //@synthesize queryTokens=_queryTokens - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchText;                                           //@synthesize searchText=_searchText - In the implementation block
@property (getter=isCanceled,readonly) BOOL canceled; 
@property (assign,nonatomic) unsigned long long wordEmbeddingMode;                                   //@synthesize wordEmbeddingMode=_wordEmbeddingMode - In the implementation block
@property (assign,nonatomic) BOOL usesPrefixBasedWordEmbedding;                                      //@synthesize usesPrefixBasedWordEmbedding=_usesPrefixBasedWordEmbedding - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfNextKeywordSuggestionToProcess;              //@synthesize numberOfNextKeywordSuggestionToProcess=_numberOfNextKeywordSuggestionToProcess - In the implementation block
@property (assign,nonatomic) BOOL calculateTokenCounts;                                              //@synthesize calculateTokenCounts=_calculateTokenCounts - In the implementation block
@property (assign,nonatomic) BOOL enableImplicitTokenization;                                        //@synthesize enableImplicitTokenization=_enableImplicitTokenization - In the implementation block
@property (assign,nonatomic) BOOL implicitTokenizationUsePrefixMatch;                                //@synthesize implicitTokenizationUsePrefixMatch=_implicitTokenizationUsePrefixMatch - In the implementation block
@property (assign,nonatomic) BOOL implicitTokenizationLastTokenUsesPrefixMatch;                      //@synthesize implicitTokenizationLastTokenUsesPrefixMatch=_implicitTokenizationLastTokenUsesPrefixMatch - In the implementation block
@property (assign,nonatomic) BOOL preventUnnecessaryImplicitTokenization;                            //@synthesize preventUnnecessaryImplicitTokenization=_preventUnnecessaryImplicitTokenization - In the implementation block
@property (assign,nonatomic) BOOL exactMatchIgnoreUntokenizedCharacters;                             //@synthesize exactMatchIgnoreUntokenizedCharacters=_exactMatchIgnoreUntokenizedCharacters - In the implementation block
@property (assign,nonatomic) BOOL lastImplicitTokenAllowsWordEmbeddings;                             //@synthesize lastImplicitTokenAllowsWordEmbeddings=_lastImplicitTokenAllowsWordEmbeddings - In the implementation block
@property (nonatomic,readonly) BOOL implicitTokenizationIncludeBaseParseResults; 
+(void)bootstrap;
+(id)parsedDatesFromText:(id)arg1 ;
+(NSRange)searchTextExtendedRangeForParse:(id)arg1 ;
+(BOOL)enumerateDatedParsesWithParse:(id)arg1 currentTokenIndex:(unsigned long long)arg2 potentialComboAttributes:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
+(BOOL)tokenIsEligibleForDateParsing:(id)arg1 ;
+(id)dateAttributesFromToken:(id)arg1 ;
+(id)dateFilterWithAttributes:(id)arg1 andAttributes:(id)arg2 ;
+(id)dateFilterByCombiningDateFilter:(id)arg1 withDateFilter:(id)arg2 ;
+(id)datedParsesWithParses:(id)arg1 ;
+(id)dateFilterWithAttributes:(id)arg1 ;
+(void)_restoreAssetIdsForGroupsInGroupArrays:(id)arg1 atRemovalIndexes:(id)arg2 groupIdToOriginalAssetIdsMap:(id)arg3 searchTokens:(id)arg4 ;
+(id)_indexesToRemoveForDuplicatedFilterGroupsinGroupArrays:(id)arg1 searchTokens:(id)arg2 ;
+(void)_aggregateAssetIdsOnFilterGroupsInGroupArrays:(id)arg1 searchTokens:(id)arg2 groupIdToOriginalAssetIdsMap:(id*)arg3 ;
+(id)_indexesOfFilterTokensInSearchTokens:(id)arg1 ;
+(BOOL)_shouldApplyFilterTokensForGroupArrays:(id)arg1 searchTokens:(id)arg2 filterGroupIds:(id)arg3 ;
-(id)description;
-(void)cancel;
-(void)bootstrap;
-(BOOL)isCanceled;
-(NSArray *)queryTokens;
-(PSITokenizer *)tokenizer;
-(NSDictionary *)substitutions;
-(BOOL)implicitTokenizationUsePrefixMatch;
-(BOOL)implicitTokenizationLastTokenUsesPrefixMatch;
-(BOOL)lastImplicitTokenAllowsWordEmbeddings;
-(BOOL)_enumerateImplicitlyTokenizedParsesWithBaseParse:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)implicitlyTokenizedParsesWithBaseParse:(id)arg1 ;
-(unsigned long long)mergeFilterTokenAssetIDsIntervalID;
-(BOOL)useWildcardText;
-(NSArray *)nextKeywordSuggestions;
-(NSSet *)sceneIdentifiers;
-(NSArray *)dedupedGroupResults;
-(NSSet *)socialGroupExtendedAssetIds;
-(NSSet *)socialGroupExtendedCollectionIds;
-(NSString *)searchText;
-(unsigned long long)wordEmbeddingMode;
-(BOOL)usesPrefixBasedWordEmbedding;
-(unsigned long long)numberOfNextKeywordSuggestionToProcess;
-(BOOL)calculateTokenCounts;
-(BOOL)enableImplicitTokenization;
-(BOOL)preventUnnecessaryImplicitTokenization;
-(BOOL)exactMatchIgnoreUntokenizedCharacters;
-(BOOL)implicitTokenizationIncludeBaseParseResults;
-(id)initWithQueryTokens:(id)arg1 searchText:(id)arg2 useWildcardText:(BOOL)arg3 delegate:(id)arg4 ;
-(void)runWithResultsHandler:(/*^block*/id)arg1 ;
-(CFSetRef)_idsOfGroupsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(BOOL)arg3 isFilterTypeToken:(BOOL)arg4 ;
-(CFSetRef)_idsOfGroupsMatchingToken:(id)arg1 ;
-(void)processImplicitTokenization;
-(void)processDates;
-(void)processWordEmbeddings;
-(BOOL)recursiveAddToGroupResults:(id)arg1 aggregate:(id)arg2 atIndex:(unsigned long long)arg3 outOf:(unsigned long long)arg4 inGroupArrays:(id)arg5 dateFilter:(id)arg6 datedTokens:(id)arg7 ;
-(id)processParse:(id)arg1 ;
-(void)computeSuggestions;
-(void)enumerateParsesWithMode:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)suggestionWhitelistedScenes;
-(void)_postProcessPersonGroupsInGroupArrays:(id)arg1 ;
-(void)setWordEmbeddingMode:(unsigned long long)arg1 ;
-(void)setUsesPrefixBasedWordEmbedding:(BOOL)arg1 ;
-(void)setSubstitutions:(NSDictionary *)arg1 ;
-(void)setNumberOfNextKeywordSuggestionToProcess:(unsigned long long)arg1 ;
-(void)setNextKeywordSuggestions:(NSArray *)arg1 ;
-(void)setSceneIdentifiers:(NSSet *)arg1 ;
-(void)setCalculateTokenCounts:(BOOL)arg1 ;
-(void)setEnableImplicitTokenization:(BOOL)arg1 ;
-(void)setImplicitTokenizationUsePrefixMatch:(BOOL)arg1 ;
-(void)setImplicitTokenizationLastTokenUsesPrefixMatch:(BOOL)arg1 ;
-(void)setPreventUnnecessaryImplicitTokenization:(BOOL)arg1 ;
-(void)setExactMatchIgnoreUntokenizedCharacters:(BOOL)arg1 ;
-(void)setLastImplicitTokenAllowsWordEmbeddings:(BOOL)arg1 ;
-(void)setDedupedGroupResults:(NSArray *)arg1 ;
-(void)setSocialGroupExtendedAssetIds:(NSSet *)arg1 ;
-(void)setSocialGroupExtendedCollectionIds:(NSSet *)arg1 ;
-(void)setMergeFilterTokenAssetIDsIntervalID:(unsigned long long)arg1 ;
@end

