/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSAudioStreamProvidingDelegate <NSObject>
@optional
-(void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;

@required
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;

@end

