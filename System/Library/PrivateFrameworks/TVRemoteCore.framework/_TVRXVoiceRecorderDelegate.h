/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _TVRXVoiceRecorderDelegate <NSObject>
@optional
-(void)voiceRecorder:(id)arg1 isAboutToBeginRecording:(/*^block*/id)arg2;
-(void)voidRecorderDidStop:(id)arg1;
-(id)createBufferWithSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maxPacketSize:(unsigned long long)arg3;
-(void)voiceRecorder:(id)arg1 bufferAvailable:(id)arg2;

@end

