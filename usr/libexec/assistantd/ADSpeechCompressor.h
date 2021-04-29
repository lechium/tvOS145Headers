//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADSpeechCapturing-Protocol.h"

@class NSMutableData, NSString;
@protocol ADSpeechCapturingDelegate, OS_dispatch_queue;

@interface ADSpeechCompressor : NSObject <ADSpeechCapturing>
{
    id <ADSpeechCapturingDelegate> _delegate;	// 8 = 0x8
    struct OpaqueAudioConverter *_audioConverter;	// 16 = 0x10
    NSMutableData *_bufferedAudio;	// 24 = 0x18
    unsigned long long _packetIndex;	// 32 = 0x20
    unsigned long long _bytesConsumed;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010009d42c
- (void)addAudioSampleData:(id)arg1;	// IMP=0x000000010009cdb0
- (void)startCompressionNarrowband:(_Bool)arg1;	// IMP=0x000000010009caa4
- (void)reset;	// IMP=0x000000010009ca68
- (void)playRecordingStartAlert;	// IMP=0x000000010009ca64
- (void)enforcePreviousEndpointHint;	// IMP=0x000000010009ca60
- (void)updateEndpointHintForDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010009ca44
- (void)updateServerEndpointFeatures:(id)arg1;	// IMP=0x000000010009ca40
- (void)getLastStartpointTimestampAndCurrentTime:(CDUnknownBlockType)arg1;	// IMP=0x000000010009ca24
- (void)setIsDriving:(_Bool)arg1;	// IMP=0x000000010009ca20
- (void)setSpeechWasRecognizedForElapsedTime:(double)arg1;	// IMP=0x000000010009ca1c
- (void)forceSuccessAudioAlertOnStop;	// IMP=0x000000010009ca18
- (void)setFingerprintingEnabled:(_Bool)arg1;	// IMP=0x000000010009ca14
- (void)stopFingerprinting;	// IMP=0x000000010009ca10
- (void)cancelSpeechCaptureSuppressingAlert:(_Bool)arg1;	// IMP=0x000000010009c968
- (void)stopSpeechCaptureForEvent:(long long)arg1 suppressAlert:(_Bool)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x000000010009c8c0
- (void)setFingerprintWasRecognized;	// IMP=0x000000010009c8bc
- (void)setSpeechWasRecognizedForElapsedTime:(double)arg1 isFinal:(_Bool)arg2;	// IMP=0x000000010009c8b8
- (void)suspendAutomaticEndpointingInRange:(struct AFTimeRange)arg1;	// IMP=0x000000010009c8b4
- (void)setSpeechRequestOptions:(id)arg1;	// IMP=0x000000010009c8b0
- (void)releaseAudioSession;	// IMP=0x000000010009c8ac
- (void)setDelegate:(id)arg1;	// IMP=0x000000010009c81c
- (void)dealloc;	// IMP=0x000000010009c7d0
- (id)initWithQueue:(id)arg1 speechController:(id)arg2 audioSessionController:(id)arg3 audioPlaybackService:(id)arg4;	// IMP=0x000000010009c758

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
