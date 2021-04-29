//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_queue;

@interface RPMicAudioCaptureManager : NSObject
{
    NSObject<OS_dispatch_queue> *_audioDispatchQueue;	// 8 = 0x8
    CDUnknownBlockType _microphoneOutputHandler;	// 16 = 0x10
    struct AudioStreamBasicDescription _audioBasicDescription;	// 24 = 0x18
    _Bool _recordingMicrophone;	// 64 = 0x40
    _Bool _sessionInProgress;	// 65 = 0x41
    NSDate *_lastMicAudioDate;	// 72 = 0x48
    CDStruct_1b6d18a9 _micInterruptionPresentationTimeStamp;	// 80 = 0x50
    _Bool _micInterrupted;	// 104 = 0x68
    CDUnknownBlockType _micDidStartHandler;	// 112 = 0x70
}

+ (struct AudioStreamBasicDescription)audioStreamBasicDescriptionWithStereo:(_Bool)arg1;	// IMP=0x000000010000667c
- (void).cxx_destruct;	// IMP=0x0000000100006d28
- (void)stopMicrophoneCapture;	// IMP=0x0000000100006cfc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100006c38
- (void)startMicrophoneCaptureWithOutput:(CDUnknownBlockType)arg1 didStartHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006b10
- (void)stopAllCapture;	// IMP=0x0000000100006a10
- (void)stopCaptureSession;	// IMP=0x0000000100006a0c
- (void)startCaptureSession;	// IMP=0x0000000100006a08
- (void)dealloc;	// IMP=0x0000000100006980
- (id)init;	// IMP=0x0000000100006888
- (void)handleAudioSessionInterruption:(id)arg1;	// IMP=0x00000001000066c8

@end

