/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CSCoreSpeechServices : NSObject
+(id)getCoreSpeechXPCConnection;
+(void)installedVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)fetchRemoteVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)getCoreSpeechServiceConnection;
+(void)getCurrentVoiceTriggerLocaleWithEndpointId:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)voiceTriggerRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 accessoryRTModelType:(long long)arg3 endpointId:(id)arg4 downloadedModels:(id)arg5 preinstalledModels:(id)arg6 completion:(/*^block*/id)arg7 ;
+(void)voiceTriggerJarvisLanguageList:(id)arg1 jarvisSelectedLanguage:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)voiceTriggerRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 accessoryRTModelType:(long long)arg3 downloadedModels:(id)arg4 preinstalledModels:(id)arg5 completion:(/*^block*/id)arg6 ;
+(void)voiceTriggerRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 downloadedModels:(id)arg3 preinstalledModels:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)requestUpdatedSATAudio;
+(long long)getFirstPassRunningMode;
@end
