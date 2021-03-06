/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSLocale, NSObject;

@interface EMTTranslator : NSObject {

	shared_ptr<quasar::TranslatorFactory>* _translatorFactory;
	shared_ptr<quasar::Translator>* _translator;
	NSLocale* _sourceLocale;
	NSLocale* _targetLocale;
	vector<quasar::SystemConfig, std::__1::allocator<quasar::SystemConfig>>* _configs;
	NSObject*<OS_dispatch_queue> _translationQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
+(void)initialize;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithModelURL:(id)arg1 ;
-(id)initWithModelURL:(id)arg1 task:(id)arg2 ;
-(id)initWithModelURLs:(id)arg1 task:(id)arg2 ;
-(void)translateSpeech:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)translateTokens:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)translateString:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>*)_tokenizeString:(id)arg1 ;
-(void)prepareFor:(id)arg1 to:(id)arg2 ;
-(void)_translate:(vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>*)arg1 isFinal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)loadTranslatorFrom:(id)arg1 to:(id)arg2 ;
-(void)translateSpeech:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)translateString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)translateTokens:(id)arg1 isFinal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

