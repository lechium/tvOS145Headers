//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADAudioFileWriter, ADRecordingInfo, CSAudioRecordContext, CSAudioRecordDeviceInfo, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, NSURL, NSUUID;
@protocol AFRelinquishableAssertion, OS_dispatch_group, OS_dispatch_queue;

@interface ADSpeechCapturingContext : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _isCurrent;	// 16 = 0x10
    NSString *_startSpeechId;	// 24 = 0x18
    NSString *_selectedResultCandidateId;	// 32 = 0x20
    CSAudioRecordContext *_audioRecordContext;	// 40 = 0x28
    CSAudioRecordDeviceInfo *_audioRecordDeviceInfo;	// 48 = 0x30
    NSDictionary *_voiceTriggerInfo;	// 56 = 0x38
    NSDictionary *_recordingSettings;	// 64 = 0x40
    ADRecordingInfo *_recordingInfo;	// 72 = 0x48
    ADAudioFileWriter *_audioFileWriter;	// 80 = 0x50
    NSURL *_recordedAudioFileURL;	// 88 = 0x58
    id <AFRelinquishableAssertion> _startRecordingAudioSessionAssertion;	// 96 = 0x60
    id <AFRelinquishableAssertion> _twoShotDetectionAudioSessionAssertion;	// 104 = 0x68
    NSObject<OS_dispatch_group> *_recordingAudioGroup;	// 112 = 0x70
    _Bool _voiceIdentificationTraining_allowsWithoutResultCandidate;	// 120 = 0x78
    NSMutableSet *_voiceIdentificationTraining_allowedResultCandidateIds;	// 128 = 0x80
    NSMutableDictionary *_voiceIdentificationTraining_resultCandidateToSharedUserIdMap;	// 136 = 0x88
    NSUUID *_turnIdentifier;	// 144 = 0x90
    NSString *_voiceIdentificationTraining_withoutResultCandidateSharedUserId;	// 152 = 0x98
    _Bool _stopRecordingInstrumented;	// 160 = 0xa0
    _Bool _wantsRecordedAudioBufferLogs;	// 161 = 0xa1
    NSString *_sessionUUID;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000001001b306c
@property(readonly, nonatomic) _Bool wantsRecordedAudioBufferLogs; // @synthesize wantsRecordedAudioBufferLogs=_wantsRecordedAudioBufferLogs;
@property(readonly, copy, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)_removeRecordedAudio;	// IMP=0x00000001001b2e5c
- (void)_donateRecordedAudioForVoiceIdentificationTrainingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b287c
- (void)_didResignCurrent;	// IMP=0x00000001001b27a4
- (void)_didBecomeCurrent;	// IMP=0x00000001001b26e0
- (void)instrumentStopRecordingForEndpointType:(int)arg1;	// IMP=0x00000001001b25c8
- (void)instrumentSiriCueForAlertType:(long long)arg1;	// IMP=0x00000001001b2414
- (void)_instrumentSiriCue:(int)arg1;	// IMP=0x00000001001b2380
- (void)instrumentSiriCue:(int)arg1;	// IMP=0x00000001001b230c
- (void)_finalizeAudioFileWriterWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b1fc8
- (void)_initializeAudioFileWriterWithAudioStreamBasicDescription:(const struct AudioStreamBasicDescription *)arg1;	// IMP=0x00000001001b1e34
- (void)endRecordingAudio;	// IMP=0x00000001001b1b88
- (void)appendRecordedAudioBuffer:(id)arg1;	// IMP=0x00000001001b1af0
- (void)beginRecordingAudioWithAudioStreamBasicDescription:(const struct AudioStreamBasicDescription *)arg1;	// IMP=0x00000001001b1944
- (void)relinquishAudioSessionAssertionsWithError:(id)arg1;	// IMP=0x00000001001b17cc
- (void)relinquishAudioSessionAssertionsWithContext:(id)arg1;	// IMP=0x00000001001b1654
- (void)didStopRecordingWithError:(id)arg1;	// IMP=0x00000001001b1504
- (void)willStopRecordingAtHostTime:(unsigned long long)arg1;	// IMP=0x00000001001b12a8
- (void)didDetectTwoShotWithAudioActivationInfo:(id)arg1 atTime:(double)arg2;	// IMP=0x00000001001b0c58
- (void)willPrepareAndStartRecordingWithAudioActivationInfo:(id)arg1;	// IMP=0x00000001001b067c
- (void)updateRecordingSettings:(id)arg1;	// IMP=0x00000001001b0540
- (void)updateRecordingInfo:(id)arg1;	// IMP=0x00000001001b0404
- (void)updateVoiceTriggerInfo:(id)arg1;	// IMP=0x00000001001b0298
- (void)updateAudioRecordDeviceInfo:(id)arg1;	// IMP=0x00000001001b012c
- (void)updateAudioRecordContext:(id)arg1;	// IMP=0x00000001001afff0
- (void)acquireRecordedAudioWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001afc9c
- (void)getAudioRecordRouteAndDeviceIdentificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001afa8c
- (void)updateAccessToRecordedAudioForVoiceIdentificationTraining:(_Bool)arg1 forResultCandidateId:(id)arg2 sharedUserId:(id)arg3;	// IMP=0x00000001001af814
- (void)updateSelectedResultCandidateId:(id)arg1;	// IMP=0x00000001001af6a8
- (void)updateStartSpeechId:(id)arg1;	// IMP=0x00000001001af53c
- (void)resignCurrent;	// IMP=0x00000001001af428
- (void)becomeCurrent;	// IMP=0x00000001001af310
- (id)initWithSessionUUID:(id)arg1 turnIdentifier:(id)arg2;	// IMP=0x00000001001af0dc
- (id)description;	// IMP=0x00000001001af048
- (void)dealloc;	// IMP=0x00000001001aee68

@end
