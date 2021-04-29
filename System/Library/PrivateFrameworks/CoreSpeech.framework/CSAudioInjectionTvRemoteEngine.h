/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSAudioInjectionEngine.h>
#import <libobjc.A.dylib/CSAudioInjectionEngineDelegate.h>
#import <libobjc.A.dylib/CSAudioConverterDelegate.h>

@protocol OS_dispatch_queue, CSAudioInjectionEngineDelegate;
@class NSObject, NSUUID, CSAudioInjectionDevice, CSAudioConverter, NSString;

@interface CSAudioInjectionTvRemoteEngine : CSAudioInjectionEngine <CSAudioInjectionEngineDelegate, CSAudioConverterDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	id<CSAudioInjectionEngineDelegate> _delegate;
	NSUUID* _uuid;
	CSAudioInjectionDevice* _connectedDevice;
	CSAudioConverter* _opusEncoder;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CSAudioInjectionEngineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) CSAudioInjectionDevice * connectedDevice;                 //@synthesize connectedDevice=_connectedDevice - In the implementation block
@property (nonatomic,retain) CSAudioConverter * opusEncoder;                                  //@synthesize opusEncoder=_opusEncoder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CSAudioInjectionEngineDelegate>)delegate;
-(void)setDelegate:(id<CSAudioInjectionEngineDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(BOOL)isRecording;
-(id)initWithStreamHandleId:(unsigned long long)arg1 ;
-(void)setConnectedDevice:(CSAudioInjectionDevice *)arg1 ;
-(BOOL)isAlwaysOnVoiceTriggerAvailable;
-(void)setAlwaysOnVoiceTriggerEnabled:(BOOL)arg1 ;
-(void)startAudioStreamWithOption:(id)arg1 ;
-(void)stopAudioStream;
-(BOOL)injectAudio:(id)arg1 ;
-(BOOL)injectAudio:(id)arg1 withScaleFactor:(float)arg2 playbackStarted:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)audioEngineDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(BOOL)arg3 error:(id)arg4 ;
-(void)audioEngineDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(void)audioEngineBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 ;
-(void)audioEngineAudioChunkForTvAvailable:(id)arg1 audioChunk:(id)arg2 ;
-(BOOL)alwaysOnVoiceTriggerEnabled;
-(void)attachDevice:(id)arg1 ;
-(CSAudioInjectionDevice *)connectedDevice;
-(void)audioConverterDidConvertPackets:(id)arg1 packets:(id)arg2 durationInSec:(float)arg3 timestamp:(unsigned long long)arg4 arrivalTimestampToAudioRecorder:(unsigned long long)arg5 ;
-(CSAudioConverter *)opusEncoder;
-(void)setOpusEncoder:(CSAudioConverter *)arg1 ;
@end

