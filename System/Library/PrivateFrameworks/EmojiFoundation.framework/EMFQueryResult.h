/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <EmojiFoundation/EmojiFoundation-Structs.h>
@class NSOrderedSet, NSArray, EMFQueryResultOverride, EMFQuery, NSDictionary;

@interface EMFQueryResult : NSObject {

	NSOrderedSet* _sortedResultSet;
	NSArray* _documentMatches;
	EMFQueryResultOverride* _resultOverride;
	EMFQuery* _query;
	NSDictionary* _matchingDocumentWeights;

}

@property (nonatomic,readonly) EMFQuery * query;                                          //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) NSArray * documentMatches;                                 //@synthesize documentMatches=_documentMatches - In the implementation block
@property (nonatomic,readonly) NSDictionary * matchingDocumentWeights;                    //@synthesize matchingDocumentWeights=_matchingDocumentWeights - In the implementation block
@property (nonatomic,copy,readonly) EMFQueryResultOverride * resultOverride;              //@synthesize resultOverride=_resultOverride - In the implementation block
+(id)_emojiStringForDocumentID:(id)arg1 usingLocaleData:(EmojiLocaleDataWrapperRef)arg2 ;
+(const EmojiTokenWrapperRef)_emojiTokenForDocumentID:(id)arg1 usingLocaleData:(EmojiLocaleDataWrapperRef)arg2 ;
-(id)description;
-(EMFQuery *)query;
-(id)emojiMatchesAndDocumentWeightsUsingEmojiLocaleData:(EmojiLocaleDataWrapperRef)arg1 ;
-(EMFQueryResultOverride *)resultOverride;
-(id)emojiMatchesForOverriddenResultsUsingEmojiLocaleData:(EmojiLocaleDataWrapperRef)arg1 ;
-(id)initWithQuery:(id)arg1 matchingDocumentWeights:(id)arg2 resultOverride:(id)arg3 ;
-(BOOL)_matchingDocumentWeightsContainsOnlyBlackLivesMatterResults;
-(id)_handleOverrideResultInterpolationForStandardResults:(id)arg1 ;
-(NSArray *)documentMatches;
-(id)_interpolateOverriddenResultsByPrepending:(id)arg1 ;
-(id)_interpolateOverriddenResultsByAppending:(id)arg1 ;
-(id)_interpolateOverriddenResultsByAppendingAndMoving:(id)arg1 ;
-(id)_interpolateOverriddenResultsByFiltering:(id)arg1 ;
-(id)_interpolateOverriddenResultsByOverwriting;
-(id)initWithQuery:(id)arg1 andMatchingDocumentWeights:(id)arg2 ;
-(id)emojiStringMatchesUsingEmojiLocaleData:(const EmojiLocaleDataWrapperRef)arg1 ;
-(NSDictionary *)matchingDocumentWeights;
@end

