/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CHPostprocessingStep.h>

@class CHRecognizer;

@interface CHSemanticTokenizerStep : CHPostprocessingStep {

	CHRecognizer* _recognizer;
	void* _languageModel;

}

@property (assign,nonatomic) CHRecognizer * recognizer;              //@synthesize recognizer=_recognizer - In the implementation block
@property (assign,nonatomic) void* languageModel;                    //@synthesize languageModel=_languageModel - In the implementation block
-(id)process:(id)arg1 ;
-(void*)languageModel;
-(void)setLanguageModel:(void*)arg1 ;
-(id)initWithRecognizer:(id)arg1 languageModel:(void*)arg2 ;
-(CHRecognizer *)recognizer;
-(void)setRecognizer:(CHRecognizer *)arg1 ;
-(void)_updateTokenInappropriateFlag:(id)arg1 ;
@end
