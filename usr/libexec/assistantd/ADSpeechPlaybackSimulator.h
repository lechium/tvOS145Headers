//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADSpeechCapturing-Protocol.h"

@class NSString;
@protocol ADSpeechCapturingDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ADSpeechPlaybackSimulator : NSObject <ADSpeechCapturing>
{
    id <ADSpeechCapturingDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_playbackSource;	// 24 = 0x18
}

+ (id)_speechLogDecodingError;	// IMP=0x0000000100239c00
- (void).cxx_destruct;	// IMP=0x000000010023a954
- (void)startPlaybackWithURL:(id)arg1 narrowBand:(_Bool)arg2 dictation:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100239d5c
- (void)enforcePreviousEndpointHint;	// IMP=0x0000000100239d58
- (void)updateEndpointHintForDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100239d3c
- (void)updateServerEndpointFeatures:(id)arg1;	// IMP=0x0000000100239d38
- (void)playRecordingStartAlert;	// IMP=0x0000000100239d34
- (void)getLastStartpointTimestampAndCurrentTime:(CDUnknownBlockType)arg1;	// IMP=0x0000000100239d18
- (void)setIsDriving:(_Bool)arg1;	// IMP=0x0000000100239d14
- (void)setFingerprintWasRecognized;	// IMP=0x0000000100239d10
- (void)setSpeechWasRecognizedForElapsedTime:(double)arg1 isFinal:(_Bool)arg2;	// IMP=0x0000000100239d0c
- (void)forceSuccessAudioAlertOnStop;	// IMP=0x0000000100239d08
- (void)setFingerprintingEnabled:(_Bool)arg1;	// IMP=0x0000000100239d04
- (void)stopFingerprinting;	// IMP=0x0000000100239d00
- (void)cancelSpeechCaptureSuppressingAlert:(_Bool)arg1;	// IMP=0x0000000100239cf0
- (void)stopSpeechCaptureForEvent:(long long)arg1 suppressAlert:(_Bool)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x0000000100239ce0
- (void)setSpeechWasRecognized;	// IMP=0x0000000100239cdc
- (void)suspendAutomaticEndpointingInRange:(struct AFTimeRange)arg1;	// IMP=0x0000000100239cd8
- (void)setSpeechRequestOptions:(id)arg1;	// IMP=0x0000000100239cd4
- (void)releaseAudioSession;	// IMP=0x0000000100239cd0
- (id)delegate;	// IMP=0x0000000100239cb8
- (void)setDelegate:(id)arg1;	// IMP=0x0000000100239c28
- (id)initWithQueue:(id)arg1 speechController:(id)arg2 audioSessionController:(id)arg3 audioPlaybackService:(id)arg4;	// IMP=0x0000000100239b88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

