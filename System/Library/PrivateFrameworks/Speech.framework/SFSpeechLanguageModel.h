/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Speech.framework/Speech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _EARAppLmData, NSString, _EARLmModel, NSMutableDictionary, NSLocale, NSArray, NSDictionary;

@interface SFSpeechLanguageModel : NSObject {

	_EARAppLmData* _appLmData;
	NSString* _recognizerConfigFilePath;
	_EARLmModel* _model;
	NSMutableDictionary* _oovDict;
	NSLocale* _locale;

}

@property (nonatomic,copy,readonly) NSLocale * locale;                                              //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy,readonly) NSArray * outOfVocabularyWords; 
@property (nonatomic,copy,readonly) NSDictionary * outOfVocabularyWordsAndFrequencies; 
+(void)initialize;
+(id)supportedLocales;
-(id)init;
-(NSLocale *)locale;
-(id)initWithLocale:(id)arg1 ;
-(id)metrics;
-(void)addSentence:(id)arg1 ;
-(id)deserializeModelData:(id)arg1 ;
-(long long)lmeThreshold;
-(id)initWithAssetPath:(id)arg1 ;
-(NSDictionary *)outOfVocabularyWordsAndFrequencies;
-(NSArray *)outOfVocabularyWords;
-(BOOL)addProns:(id)arg1 forWord:(id)arg2 ;
-(void)addSentences:(id)arg1 ;
-(id)addOovsFromSentence:(id)arg1 ;
-(BOOL)trainFromPlainTextAndWriteToDirectory:(id)arg1 ;
-(void)generateNgramsSerializeDataAndWriteToFile:(id)arg1 ;
-(void)addPronsFromFile:(id)arg1 ;
@end

