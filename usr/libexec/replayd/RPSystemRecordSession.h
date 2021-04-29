//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RPSession.h"

#import "RPCaptureManagerProtocol-Protocol.h"

@class RPMovieWriter;

@interface RPSystemRecordSession : RPSession <RPCaptureManagerProtocol>
{
    RPMovieWriter *_movieWriter;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100031bb4
- (void)handleResumeContextIDFailure;	// IMP=0x00000001000319a0
- (void)handleResumeCaptureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003161c
- (void)handleTimerDidUpdate:(id)arg1;	// IMP=0x00000001000314e8
- (void)handleDeviceRestrictionWarning;	// IMP=0x00000001000312d4
- (void)handleDeviceLockedWarning;	// IMP=0x00000001000310c0
- (void)handleIncomingCallWarning;	// IMP=0x0000000100030eac
- (void)handleMemoryWarning;	// IMP=0x0000000100030738
- (void)handleSystemAlertStop;	// IMP=0x0000000100030524
- (id)dispatchCaptureQueue;	// IMP=0x00000001000304b4
- (void)captureDidFailWithError:(id)arg1;	// IMP=0x0000000100030440
- (void)didCaptureSampleWithType:(int)arg1 withSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 withTransformFlags:(unsigned long long)arg3;	// IMP=0x00000001000302b8
- (struct CGSize)adjustedWindowSizeForSystemRecording;	// IMP=0x000000010003018c
- (void)setCaptureMicrophoneEnabled:(_Bool)arg1;	// IMP=0x0000000100030108
- (void)pauseSession;	// IMP=0x000000010002ff80
- (void)stopSystemRecordingWithURLHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002fb74
- (void)stopSystemRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002f74c
- (void)startSystemRecordingWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 contextID:(id)arg3 windowSize:(struct CGSize)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010002f03c
- (id)outputPath;	// IMP=0x000000010002efa4

@end
