/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NLLexicon, NLTokenizer;

@interface NLLanguageModel : NSObject {

	NSString* _localization;
	void* _model;
	NLLexicon* _lexicon;
	NLTokenizer* _tokenizer;

}

@property (copy,readonly) NSString * localization; 
@property (copy,readonly) NLLexicon * lexicon; 
-(id)description;
-(void)dealloc;
-(NSString *)localization;
-(BOOL)getConditionalProbabilityForTokenID:(unsigned)arg1 context:(const unsigned*)arg2 length:(unsigned long long)arg3 probability:(double*)arg4 ;
-(NLLexicon *)lexicon;
-(id)initWithLocalization:(id)arg1 ;
-(double)conditionalProbabilityForEntry:(id)arg1 context:(id)arg2 ;
-(double)conditionalProbabilityForWord:(id)arg1 context:(id)arg2 ;
-(void)enumeratePredictionsForContext:(id)arg1 maxEntriesPerPrediction:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumeratePredictionsForContext:(id)arg1 maxWordsPerPrediction:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

