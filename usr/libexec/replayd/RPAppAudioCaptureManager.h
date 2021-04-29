//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_queue;

@interface RPAppAudioCaptureManager : NSObject
{
    NSObject<OS_dispatch_queue> *_audioDispatchQueue;	// 8 = 0x8
    CDUnknownBlockType _appAudioOutputHandler;	// 16 = 0x10
    CDUnknownBlockType _appTapDidStartHandler;	// 24 = 0x18
    struct {
        struct OpaqueAudioQueue *_field1;
        struct AudioStreamBasicDescription _field2;
        struct AudioQueueBuffer *_field3[100];
        struct OpaqueAudioFileID *_field4;
        unsigned int _field5;
        long long _field6;
        int _field7;
    } *_audioRecorderQueue;	// 32 = 0x20
    _Bool _resumed;	// 40 = 0x28
    NSDate *_lastAudioDate;	// 48 = 0x30
    struct AudioStreamBasicDescription _audioBasicDescription;	// 56 = 0x38
    CDStruct_1b6d18a9 _lastAudioPresentationTime;	// 96 = 0x60
}

+ (struct AudioStreamBasicDescription)audioStreamBasicDescriptionWithStereo:(_Bool)arg1;	// IMP=0x0000000100028a40
- (void).cxx_destruct;	// IMP=0x0000000100029a28
- (void)stop;	// IMP=0x0000000100029660
- (void)resumeWithProcessID:(int)arg1;	// IMP=0x0000000100029528
- (void)startWithProcessID:(int)arg1 outputHandler:(CDUnknownBlockType)arg2 didStartHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100028bec
- (_Bool)handleStartAudioQueueFailed:(int)arg1 didFailHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100028b34
- (id)init;	// IMP=0x0000000100028a8c

@end

