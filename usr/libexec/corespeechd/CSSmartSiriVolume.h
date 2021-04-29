//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSAudioServerCrashMonitorDelegate-Protocol.h"
#import "CSAudioStreamProvidingDelegate-Protocol.h"
#import "CSMediaPlayingMonitorDelegate-Protocol.h"
#import "CSSiriClientBehaviorMonitorDelegate-Protocol.h"
#import "CSSiriEnabledMonitorDelegate-Protocol.h"
#import "CSSmartSiriVolumeProcessor-Protocol.h"

@class CSAsset, CSAudioStream, CSSmartSiriVolumeEnablePolicy, NSString, NSUserDefaults;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSSmartSiriVolume : NSObject <CSMediaPlayingMonitorDelegate, CSAudioStreamProvidingDelegate, CSSiriEnabledMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSSiriClientBehaviorMonitorDelegate, CSSmartSiriVolumeProcessor>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume>> _smartSiriVolumeNoiseLevel;	// 16 = 0x10
    struct unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume>> _smartSiriVolumeLKFS;	// 24 = 0x18
    struct vector<float, std::__1::allocator<float>> _floatBuffer;	// 32 = 0x20
    NSUserDefaults *_defaults;	// 56 = 0x38
    CSSmartSiriVolumeEnablePolicy *_ssvEnablePolicy;	// 64 = 0x40
    unsigned long long _startAnalyzeSampleCount;	// 72 = 0x48
    unsigned long long _samplesFed;	// 80 = 0x50
    unsigned long long _processedSampleCount;	// 88 = 0x58
    _Bool _isStartSampleCountMarked;	// 96 = 0x60
    _Bool _isListenPollingStarting;	// 97 = 0x61
    _Bool _shouldPauseSSVProcess;	// 98 = 0x62
    _Bool _shouldPauseLKFSProcess;	// 99 = 0x63
    _Bool _alarmSoundIsFiring;	// 100 = 0x64
    _Bool _timerSoundIsFiring;	// 101 = 0x65
    _Bool _mediaIsPlaying;	// 102 = 0x66
    CSAsset *_currentAsset;	// 104 = 0x68
    float _musicVolumeDB;	// 112 = 0x70
    float _alarmVolume;	// 116 = 0x74
    unsigned long long _noiseLevelChannelBitset;	// 120 = 0x78
    unsigned long long _LKFSChannelBitset;	// 128 = 0x80
    unsigned int _energyBufferSize;	// 136 = 0x88
    unsigned int _noiseLowerPercentile;	// 140 = 0x8c
    unsigned int _noiseUpperPercentile;	// 144 = 0x90
    unsigned int _LKFSLowerPercentile;	// 148 = 0x94
    unsigned int _LKFSUpperPercentile;	// 152 = 0x98
    float _noiseTimeConstant;	// 156 = 0x9c
    float _noiseMicSensitivityOffset;	// 160 = 0xa0
    float _noiseMicSensitivityOffsetDeviceSimple;	// 164 = 0xa4
    float _LKFSTimeConstant;	// 168 = 0xa8
    float _LKFSMicSensitivityOffset;	// 172 = 0xac
    float _noiseTTSMappingInputRangeLow;	// 176 = 0xb0
    float _noiseTTSMappingInputRangeHigh;	// 180 = 0xb4
    float _noiseTTSMappingOutputRangeLow;	// 184 = 0xb8
    float _noiseTTSMappingOutputRangeHigh;	// 188 = 0xbc
    float _LKFSTTSMappingInputRangeLow;	// 192 = 0xc0
    float _LKFSTTSMappingInputRangeHigh;	// 196 = 0xc4
    float _LKFSTTSMappingOutputRangeLow;	// 200 = 0xc8
    float _LKFSTTSMappingOutputRangeHigh;	// 204 = 0xcc
    float _userOffsetInputRangeLow;	// 208 = 0xd0
    float _userOffsetInputRangeHigh;	// 212 = 0xd4
    float _userOffsetOutputRangeLow;	// 216 = 0xd8
    float _userOffsetOutputRangeHigh;	// 220 = 0xdc
    float _TTSVolumeLowerLimitDB;	// 224 = 0xe0
    float _TTSVolumeUpperLimitDB;	// 228 = 0xe4
    float _noiseWeight;	// 232 = 0xe8
    CSAudioStream *_audioStream;	// 240 = 0xf0
    NSObject<OS_dispatch_source> *_listenPollingTimer;	// 248 = 0xf8
    long long _listenPollingTimerCount;	// 256 = 0x100
}

- (id).cxx_construct;	// IMP=0x00000001000719b8
- (void).cxx_destruct;	// IMP=0x0000000100071930
@property(nonatomic) long long listenPollingTimerCount; // @synthesize listenPollingTimerCount=_listenPollingTimerCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *listenPollingTimer; // @synthesize listenPollingTimer=_listenPollingTimer;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
- (id)getVolumeForTTSType:(unsigned long long)arg1 withOverrideMediaVolume:(id)arg2 WithRequestTime:(unsigned long long)arg3;	// IMP=0x000000010007174c
- (float)_getUserOffsetFromMusicVolumeDB:(float)arg1;	// IMP=0x00000001000716d4
- (float)_getMusicVolumeDBCSSSVDeviceDefault:(float)arg1;	// IMP=0x0000000100071690
- (float)_getMusicVolumeDBCSSSVDeviceSimple:(float)arg1;	// IMP=0x0000000100071684
- (float)_getDevicedBFSForInputLinearVolume:(float)arg1;	// IMP=0x0000000100071624
- (float)_convertDB2Mag:(float)arg1;	// IMP=0x0000000100071618
- (void)_setDefaultParameters;	// IMP=0x0000000100071574
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;	// IMP=0x00000001000714ac
- (void)_resetStartAnalyzeTime;	// IMP=0x00000001000714a0
- (float *)_getFloatBufferData:(id)arg1;	// IMP=0x00000001000713cc
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x00000001000713c8
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;	// IMP=0x00000001000713c4
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x000000010007124c
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x0000000100071248
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;	// IMP=0x00000001000710d0
- (void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;	// IMP=0x0000000100070fa8
- (void)didReceiveAlarmVolumeChanged:(float)arg1;	// IMP=0x0000000100070f3c
- (void)didReceiveMusicVolumeChanged:(float)arg1;	// IMP=0x0000000100070ea8
- (void)didReceiveTimerChanged:(long long)arg1;	// IMP=0x0000000100070ce0
- (void)didReceiveAlarmChanged:(long long)arg1;	// IMP=0x0000000100070b18
- (void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2;	// IMP=0x0000000100070960
- (float)_combineResultsWithOptimalFromNoise:(float)arg1 andOptimalFromLkfs:(float)arg2 withUserOffset:(float)arg3;	// IMP=0x0000000100070784
- (float)_estimatedTTSVolume:(float)arg1 lowerLimit:(float)arg2 upperLimit:(float)arg3 TTSmappingInputRangeLow:(float)arg4 TTSmappingInputRangeHigh:(float)arg5 TTSmappingOutputRangeLow:(float)arg6 TTSmappingOutputRangeHigh:(float)arg7;	// IMP=0x00000001000706e0
- (float)_scaleInputWithInRangeOutRange:(float)arg1 minIn:(float)arg2 maxIn:(float)arg3 minOut:(float)arg4 maxOut:(float)arg5;	// IMP=0x00000001000706c0
- (float)_deviceSpecificLinearVolumeToDBMappingCSSSVDeviceSimple:(float)arg1;	// IMP=0x000000010007068c
- (float)_deviceSpecificDBToLinearVolumeMappingCSSSVDeviceSimple:(float)arg1;	// IMP=0x0000000100070650
- (float)_getDeviceSimpledBFSForOutputLinearVolume:(float)arg1;	// IMP=0x000000010007061c
- (float)_getDeviceSimpleOutputLinearVolumeFordBFSValue:(float)arg1;	// IMP=0x00000001000705e0
- (float)estimatedTTSVolumeForNoiseLevelAndLKFS:(float)arg1 LKFS:(float)arg2;	// IMP=0x000000010006fe64
- (void)didDetectKeywordWithResult:(id)arg1;	// IMP=0x000000010006fa68
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;	// IMP=0x000000010006fa64
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;	// IMP=0x000000010006f8b4
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;	// IMP=0x000000010006f608
- (void)reset;	// IMP=0x000000010006f568
- (void)_resumeSSVProcessing;	// IMP=0x000000010006f444
- (void)_pauseSSVProcessing;	// IMP=0x000000010006f324
- (float)estimateSoundLevelbySoundType:(long long)arg1;	// IMP=0x000000010006f108
- (void)_processAudioChunk:(id)arg1 soundType:(long long)arg2;	// IMP=0x000000010006ee2c
- (void)prepareSoundLevelBufferFromSamples:(id)arg1 soundType:(long long)arg2 firedVoiceTriggerEvent:(_Bool)arg3 triggerStartTimeSampleOffset:(unsigned long long)arg4 triggerEndTimeSampleOffset:(unsigned long long)arg5;	// IMP=0x000000010006ec50
- (void)_prepareSoundLevelBufferFromSamples:(unsigned int)arg1 soundType:(long long)arg2;	// IMP=0x000000010006ebc8
- (void)_reset;	// IMP=0x000000010006eb38
- (void)_setAsset:(id)arg1;	// IMP=0x000000010006e7b0
- (void)setAsset:(id)arg1;	// IMP=0x000000010006e718
- (void)fetchInitSystemVolumes;	// IMP=0x000000010006e624
- (void)initializeTimerState;	// IMP=0x000000010006e470
- (void)initializeAlarmState;	// IMP=0x000000010006e2bc
- (void)initializeMediaPlayingState;	// IMP=0x000000010006e05c
- (void)_stopListening;	// IMP=0x000000010006de34
- (void)_startListenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006d748
- (void)_startListenPollingWithInterval:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010006d2d8
- (void)_startListenPolling;	// IMP=0x000000010006d1c8
- (void)startSmartSiriVolume;	// IMP=0x000000010006cde4
- (id)initWithSamplingRate:(float)arg1 asset:(id)arg2;	// IMP=0x000000010006c9bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
