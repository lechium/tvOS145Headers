//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VideoConversionTask.h"

@class VideoConversionHangDetector;

__attribute__((visibility("hidden")))
@interface VideoTranscodingTask : VideoConversionTask
{
    VideoConversionHangDetector *_hangDetector;	// 136 = 0x88
}

+ (_Bool)shouldMaximizeVideoConversionPowerEfficiencyForOptions:(id)arg1 inputAssetDuration:(double)arg2 taskIdentifier:(id)arg3;	// IMP=0x0000000100017b8c
+ (id)metadataItemsByApplyingSignatureMetadataFromOptions:(id)arg1 toMetadataItems:(id)arg2;	// IMP=0x0000000100017a28
+ (id)signatureOptionToTypeMapping;	// IMP=0x00000001000179e8
- (void).cxx_destruct;	// IMP=0x00000001000179c4
@property(retain) VideoConversionHangDetector *hangDetector; // @synthesize hangDetector=_hangDetector;
- (id)outputAssetInformationWithError:(id *)arg1;	// IMP=0x0000000100017330
- (void)cancelProgressUpdateTimer;	// IMP=0x0000000100017244
- (void)startProgressUpdateTimer;	// IMP=0x0000000100016f5c
- (void)callCompletionHandler;	// IMP=0x0000000100016f0c
- (_Bool)hasSlowMotionAdjustments;	// IMP=0x0000000100016e8c
- (void)transitionToRunningStateAndConditionallyRunBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100016df0
- (void)cancelTranscode;	// IMP=0x0000000100016d7c
- (double)currentFractionCompleted;	// IMP=0x0000000100016cfc
- (_Bool)hasProgress;	// IMP=0x0000000100016c80
- (void)performExport;	// IMP=0x0000000100016c0c
- (void)cancel;	// IMP=0x0000000100016a3c
- (_Bool)didDetectHang;	// IMP=0x00000001000169f0
- (void)determineAndNotifyProgress;	// IMP=0x0000000100016914
- (void)performConversion;	// IMP=0x0000000100016840

@end

