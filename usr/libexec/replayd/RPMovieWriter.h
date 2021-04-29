//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UNUserNotificationCenterDelegate-Protocol.h"

@class AVAssetWriter, AVAssetWriterInput, NSString, NSURL, RPBroadcastConfiguration;
@protocol OS_dispatch_queue;

@interface RPMovieWriter : NSObject <UNUserNotificationCenterDelegate>
{
    _Bool _systemRecording;	// 8 = 0x8
    _Bool _enableMic;	// 9 = 0x9
    _Bool _didProcessFirstSample;	// 10 = 0xa
    _Bool _isFinishingWriting;	// 11 = 0xb
    int _assetWriterStartCount;	// 12 = 0xc
    RPBroadcastConfiguration *_broadcastConfig;	// 16 = 0x10
    const struct opaqueCMFormatDescription *_compressedSourceVideoFormatDescription;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_movieWriterQueue;	// 32 = 0x20
    AVAssetWriter *_assetWriter;	// 40 = 0x28
    AVAssetWriterInput *_videoInput;	// 48 = 0x30
    AVAssetWriterInput *_audioInput1;	// 56 = 0x38
    AVAssetWriterInput *_audioInput2;	// 64 = 0x40
    NSString *_outputPath;	// 72 = 0x48
    NSString *_originalOutputPath;	// 80 = 0x50
    struct opaqueCMBufferQueue *_audioBufferQueue1;	// 88 = 0x58
    struct opaqueCMBufferQueue *_audioBufferQueue2;	// 96 = 0x60
    struct opaqueCMBufferQueue *_videoBufferQueue;	// 104 = 0x68
    double _durationInSeconds;	// 112 = 0x70
    struct CGSize _windowSize;	// 120 = 0x78
    CDStruct_1b6d18a9 _lastVideoPresentationTime;	// 136 = 0x88
    CDStruct_1b6d18a9 _lastAudio1PresentationTime;	// 160 = 0xa0
    CDStruct_1b6d18a9 _lastAudio2PresentationTime;	// 184 = 0xb8
    CDStruct_1b6d18a9 _trimVideoPresentationTime;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x000000010000b708
@property(nonatomic) double durationInSeconds; // @synthesize durationInSeconds=_durationInSeconds;
@property(nonatomic) _Bool isFinishingWriting; // @synthesize isFinishingWriting=_isFinishingWriting;
@property(nonatomic) _Bool didProcessFirstSample; // @synthesize didProcessFirstSample=_didProcessFirstSample;
@property(nonatomic) struct opaqueCMBufferQueue *videoBufferQueue; // @synthesize videoBufferQueue=_videoBufferQueue;
@property(nonatomic) struct opaqueCMBufferQueue *audioBufferQueue2; // @synthesize audioBufferQueue2=_audioBufferQueue2;
@property(nonatomic) struct opaqueCMBufferQueue *audioBufferQueue1; // @synthesize audioBufferQueue1=_audioBufferQueue1;
@property(nonatomic) CDStruct_1b6d18a9 trimVideoPresentationTime; // @synthesize trimVideoPresentationTime=_trimVideoPresentationTime;
@property(nonatomic) CDStruct_1b6d18a9 lastAudio2PresentationTime; // @synthesize lastAudio2PresentationTime=_lastAudio2PresentationTime;
@property(nonatomic) CDStruct_1b6d18a9 lastAudio1PresentationTime; // @synthesize lastAudio1PresentationTime=_lastAudio1PresentationTime;
@property(nonatomic) CDStruct_1b6d18a9 lastVideoPresentationTime; // @synthesize lastVideoPresentationTime=_lastVideoPresentationTime;
@property(nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(nonatomic) int assetWriterStartCount; // @synthesize assetWriterStartCount=_assetWriterStartCount;
@property(retain, nonatomic) NSString *originalOutputPath; // @synthesize originalOutputPath=_originalOutputPath;
@property(retain, nonatomic) NSString *outputPath; // @synthesize outputPath=_outputPath;
@property(retain, nonatomic) AVAssetWriterInput *audioInput2; // @synthesize audioInput2=_audioInput2;
@property(retain, nonatomic) AVAssetWriterInput *audioInput1; // @synthesize audioInput1=_audioInput1;
@property(retain, nonatomic) AVAssetWriterInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *movieWriterQueue; // @synthesize movieWriterQueue=_movieWriterQueue;
@property(nonatomic) const struct opaqueCMFormatDescription *compressedSourceVideoFormatDescription; // @synthesize compressedSourceVideoFormatDescription=_compressedSourceVideoFormatDescription;
@property(nonatomic) _Bool enableMic; // @synthesize enableMic=_enableMic;
@property(nonatomic) _Bool systemRecording; // @synthesize systemRecording=_systemRecording;
@property(retain, nonatomic) RPBroadcastConfiguration *broadcastConfig; // @synthesize broadcastConfig=_broadcastConfig;
- (void)notifyRecordingResumed;	// IMP=0x000000010000b4e0
- (void)notifyRecordingMayBeStopped;	// IMP=0x000000010000b488
- (void)saveVideoToCameraRoll:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b1d0
- (void)dispatchedAppendAudio2SampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000010000acb0
- (void)dispatchedAppendAudio1SampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000010000a790
- (_Bool)appendInitialSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withTransform:(struct CGAffineTransform)arg2;	// IMP=0x000000010000a22c
- (_Bool)dispatchedAppendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withWindowTransform:(struct CGAffineTransform)arg2;	// IMP=0x0000000100009988
- (void)setUpAssetWriterWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008e1c
- (id)averageVideoBitrate;	// IMP=0x0000000100008d2c
- (void)updateOutputPath;	// IMP=0x0000000100008ac4
@property(readonly, nonatomic) NSURL *outputURL;
- (void)dealloc;	// IMP=0x000000010000894c
- (void)trimMovieWithURL:(id)arg1 startClipDuration:(double)arg2 endClipDuration:(double)arg3 outputFileURL:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100008284
- (void)finishWritingAndSaveToCameraRoll:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007e34
- (void)finishWritingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000075e0
- (void)appendAudio2SampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0000000100007544
- (void)appendAudio1SampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x00000001000074a0
- (_Bool)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withWindowTransform:(struct CGAffineTransform)arg2;	// IMP=0x00000001000072ec
- (void)startWritingHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006fec
- (id)initWithWindowSize:(struct CGSize)arg1 outputPath:(id)arg2;	// IMP=0x0000000100006d70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

