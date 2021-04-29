/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSLocale, SFSpeechSynthesisVoice;

@interface SFSpeechSynthesizer : NSObject {

	NSObject*<OS_dispatch_queue> _serverTaskQueue;
	NSObject*<OS_dispatch_queue> _deviceTaskQueue;
	NSObject*<OS_dispatch_queue> _cacheTaskQueue;
	BOOL _isVoiceAssetDownloaded;
	NSLocale* _locale;
	SFSpeechSynthesisVoice* _voice;

}

@property (nonatomic,copy,readonly) NSLocale * locale;                      //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) SFSpeechSynthesisVoice * voice;              //@synthesize voice=_voice - In the implementation block
@property (nonatomic,readonly) BOOL isVoiceAssetDownloaded;                 //@synthesize isVoiceAssetDownloaded=_isVoiceAssetDownloaded - In the implementation block
+(void)initialize;
+(id)supportedLocales;
+(id)supportedVoicesByLocale:(id)arg1 ;
+(id)getVoiceByName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSLocale *)locale;
-(SFSpeechSynthesisVoice *)voice;
-(void)prewarm:(long long)arg1 ;
-(id)initWithVoice:(id)arg1 ;
-(id)startTaskWithRequest:(id)arg1 delegate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)startTaskWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)startTaskWithRequest:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isVoiceAssetDownloaded;
@end

