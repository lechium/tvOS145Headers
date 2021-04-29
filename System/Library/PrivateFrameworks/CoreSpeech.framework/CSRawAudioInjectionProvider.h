/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CoreSpeech-Structs.h>
#import <CoreSpeech/CSAudioRecorder.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSHashTable;

@interface CSRawAudioInjectionProvider : CSAudioRecorder {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_source> _audioFeedTimer;
	_sFILE* _fp;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                   //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> audioFeedTimer;              //@synthesize audioFeedTimer=_audioFeedTimer - In the implementation block
@property (assign,nonatomic) _sFILE* fp;                                                //@synthesize fp=_fp - In the implementation block
+(void)createSharedAudioSession;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)metrics;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)updateMeters;
-(id)playbackRoute;
-(id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1 ;
-(void)setAudioServerCrashEventDelegate:(id)arg1 ;
-(void)setAudioSessionEventDelegate:(id)arg1 ;
-(unsigned long long)setContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)prepareAudioStreamRecord:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)startAudioStreamWithOption:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)stopAudioStreamWithStreamHandleId:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isRecordingWithStreamHandleId:(unsigned long long)arg1 ;
-(id)recordRouteWithStreamHandleId:(unsigned long long)arg1 ;
-(id)audioDeviceInfoWithStreamHandleId:(unsigned long long)arg1 ;
-(id)recordSettingsWithStreamHandleId:(unsigned long long)arg1 ;
-(float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1 ;
-(BOOL)isNarrowBandWithStreamHandleId:(unsigned long long)arg1 ;
-(BOOL)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)deactivateAudioSession:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)setRecordMode:(long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)setDuckOthersOption:(BOOL)arg1 ;
-(BOOL)duckOthersOption;
-(BOOL)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 ;
-(BOOL)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1 ;
-(BOOL)playAlertSoundForType:(long long)arg1 ;
-(unsigned long long)alertStartTime;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(BOOL)isSessionCurrentlyActivated;
-(id)voiceTriggerInfo;
-(void)enableMiniDucking:(BOOL)arg1 ;
-(void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 ;
-(void)_readAudioBufferAndFeed;
-(NSObject*<OS_dispatch_source>)audioFeedTimer;
-(void)setAudioFeedTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(_sFILE*)fp;
-(void)setFp:(_sFILE*)arg1 ;
@end
