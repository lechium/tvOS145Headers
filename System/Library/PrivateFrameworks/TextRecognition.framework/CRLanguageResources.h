/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TextRecognition/TextRecognition-Structs.h>
@class NSLocale, CVNLPLanguageResourceBundle;

@interface CRLanguageResources : NSObject {

	NSLocale* _locale;
	void* _lmCharacterLanguageModel;
	CVNLPLanguageModelRef _cvnlpCharacterLanguageModel;
	const LXLexiconRef _staticLexicon;
	void* _wordLanguageModel;
	CVNLPLanguageResourceBundle* __cvnlpLanguageResourceBundle;

}

@property (retain) CVNLPLanguageResourceBundle * _cvnlpLanguageResourceBundle;               //@synthesize _cvnlpLanguageResourceBundle=__cvnlpLanguageResourceBundle - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                                            //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) void* lmCharacterLanguageModel;                                 //@synthesize lmCharacterLanguageModel=_lmCharacterLanguageModel - In the implementation block
@property (assign,nonatomic) CVNLPLanguageModelRef cvnlpCharacterLanguageModel;              //@synthesize cvnlpCharacterLanguageModel=_cvnlpCharacterLanguageModel - In the implementation block
@property (assign,nonatomic) const LXLexiconRef staticLexicon;                               //@synthesize staticLexicon=_staticLexicon - In the implementation block
@property (assign,nonatomic) void* wordLanguageModel;                                        //@synthesize wordLanguageModel=_wordLanguageModel - In the implementation block
+(BOOL)isLanguageSupported:(id)arg1 ;
+(void*)createCharacterModel:(id)arg1 ;
+(LXLexiconRef)createStaticLexicon:(id)arg1 ;
+(void*)createWordLanguageModel:(id)arg1 ;
+(CVNLPLanguageModelRef)createCVNLPCharacterLanguageModel:(id)arg1 ;
+(BOOL)isCustomWordsSupportedForLanguageIdentifier:(id)arg1 ;
-(void)dealloc;
-(NSLocale *)locale;
-(const LXLexiconRef)staticLexicon;
-(void)setStaticLexicon:(const LXLexiconRef)arg1 ;
-(id)initWithLanguageIdentifier:(id)arg1 ;
-(void*)wordLanguageModel;
-(id)cvnlpLanguageResourceBundle:(id)arg1 ;
-(CVNLPLanguageResourceBundle *)_cvnlpLanguageResourceBundle;
-(void*)lmCharacterLanguageModel;
-(CVNLPLanguageModelRef)cvnlpCharacterLanguageModel;
-(void)set_cvnlpLanguageResourceBundle:(CVNLPLanguageResourceBundle *)arg1 ;
-(void)setLmCharacterLanguageModel:(void*)arg1 ;
-(void)setCvnlpCharacterLanguageModel:(CVNLPLanguageModelRef)arg1 ;
-(void)setWordLanguageModel:(void*)arg1 ;
@end

