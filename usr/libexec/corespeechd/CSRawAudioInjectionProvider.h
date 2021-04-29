//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSAudioRecorder.h"

@class NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSRawAudioInjectionProvider : CSAudioRecorder
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_audioFeedTimer;	// 24 = 0x18
    struct __sFILE *_fp;	// 32 = 0x20
}

+ (void)createSharedAudioSession;	// IMP=0x000000010008a8c0
- (void).cxx_destruct;	// IMP=0x000000010008a950
@property(nonatomic) struct __sFILE *fp; // @synthesize fp=_fp;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *audioFeedTimer; // @synthesize audioFeedTimer=_audioFeedTimer;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;	// IMP=0x000000010008a8bc
- (id)metrics;	// IMP=0x000000010008a8b4
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x000000010008a8b0
- (id)voiceTriggerInfo;	// IMP=0x000000010008a8a8
- (_Bool)isSessionCurrentlyActivated;	// IMP=0x000000010008a8a0
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x000000010008a898
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x000000010008a890
- (void)updateMeters;	// IMP=0x000000010008a88c
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x000000010008a888
- (unsigned long long)alertStartTime;	// IMP=0x000000010008a880
- (_Bool)playAlertSoundForType:(long long)arg1;	// IMP=0x000000010008a878
- (_Bool)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1;	// IMP=0x000000010008a870
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;	// IMP=0x000000010008a868
- (id)playbackRoute;	// IMP=0x000000010008a85c
- (_Bool)duckOthersOption;	// IMP=0x000000010008a854
- (void)setDuckOthersOption:(_Bool)arg1;	// IMP=0x000000010008a850
- (_Bool)setRecordMode:(long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000010008a848
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000010008a840
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000010008a798
- (_Bool)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000010008a6f0
- (_Bool)isNarrowBandWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x000000010008a6e8
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x000000010008a6d4
- (id)recordSettingsWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x000000010008a6c8
- (id)audioDeviceInfoWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x000000010008a6c0
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x000000010008a6b8
- (id)recordRouteWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x000000010008a6ac
- (_Bool)isRecordingWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x000000010008a604
- (_Bool)stopAudioStreamWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000010008a3cc
- (void)_readAudioBufferAndFeed;	// IMP=0x000000010008a204
- (_Bool)startAudioStreamWithOption:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100089e30
- (_Bool)prepareAudioStreamRecord:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100089d88
- (_Bool)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100089cc0
- (unsigned long long)setContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100089bf8
- (void)setAudioSessionEventDelegate:(id)arg1;	// IMP=0x0000000100089bf4
- (void)setAudioServerCrashEventDelegate:(id)arg1;	// IMP=0x0000000100089bf0
- (void)unregisterObserver:(id)arg1;	// IMP=0x0000000100089b48
- (void)registerObserver:(id)arg1;	// IMP=0x0000000100089aa0
- (void)dealloc;	// IMP=0x00000001000899dc
- (id)init;	// IMP=0x0000000100089880

@end
