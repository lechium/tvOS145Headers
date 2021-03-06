//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPCaptureManagerProtocol-Protocol.h"

@class RPCaptureManager, RPClipBuffer;
@protocol OS_dispatch_queue;

@interface RPClipCaptureManager : NSObject <RPCaptureManagerProtocol>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    int _state;	// 16 = 0x10
    RPCaptureManager *_captureManager;	// 24 = 0x18
    struct OpaqueVTCompressionSession *_session;	// 32 = 0x20
    RPClipBuffer *_clipBufferVideo;	// 40 = 0x28
    RPClipBuffer *_clipBufferAppAudio;	// 48 = 0x30
    RPClipBuffer *_clipBufferMicAudio;	// 56 = 0x38
    struct CGSize _windowSize;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100028754
- (oneway void)appAudioCaptureStopWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100028750
- (oneway void)appAudioCaptureResumeWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002874c
- (oneway void)appAudioCaptureStartWithDidStartHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100028748
- (void)captureDidFailWithError:(id)arg1;	// IMP=0x00000001000286ec
- (void)didCaptureSampleWithType:(int)arg1 withSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 withTransformFlags:(unsigned long long)arg3;	// IMP=0x0000000100028508
- (void)createEncodingSessionWithWidth:(int)arg1 withHeight:(int)arg2;	// IMP=0x0000000100028058
- (void)encodeBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0000000100027eac
- (void)generateClipForSeconds:(double)arg1 outputPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100027ac0
- (void)flush;	// IMP=0x0000000100027958
- (void)invalidate;	// IMP=0x00000001000277ac
- (void)startWithMicrophoneEnabled:(_Bool)arg1;	// IMP=0x000000010002751c
- (id)initWithWindowSize:(struct CGSize)arg1;	// IMP=0x0000000100027370

@end

