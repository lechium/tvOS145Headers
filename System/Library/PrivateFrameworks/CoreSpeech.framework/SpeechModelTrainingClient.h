/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection;

@interface SpeechModelTrainingClient : NSObject {

	NSXPCConnection* _smtConnection;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)initWithServiceName:(id)arg1 ;
-(id)_serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)trainPersonalizedLMWithLanguage:(id)arg1 configuration:(id)arg2 asset:(id)arg3 fides:(BOOL)arg4 activity:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)trainPersonalizedLMWithLanguage:(id)arg1 configuration:(id)arg2 asset:(id)arg3 directory:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)trainPersonalizedLMWithLanguage:(id)arg1 configuration:(id)arg2 fides:(BOOL)arg3 activity:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)trainGlobalNNLMwithFidesRecipe:(id)arg1 attachments:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)trainGlobalNNLMwithFidesSessionURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)upperCaseString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)trainPersonalizedLMWithLanguage:(id)arg1 directory:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

