//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VCPFaceProcessingTask.h"

@class NSArray;

@interface VCPFaceAssetProcessingTask : VCPFaceProcessingTask
{
    CDUnknownBlockType _progressHandler;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSArray *_assets;	// 24 = 0x18
}

+ (id)taskWithAssets:(id)arg1 andProgressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010003effc
- (void).cxx_destruct;	// IMP=0x000000010003f5f8
- (int)run;	// IMP=0x000000010003f44c
- (int)main;	// IMP=0x000000010003f0b8
- (id)initWithAssets:(id)arg1 andProgressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010003ed3c

@end
