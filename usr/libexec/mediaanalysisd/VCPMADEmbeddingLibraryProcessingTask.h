//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPMABaseTask.h>

@class NSArray;

@interface VCPMADEmbeddingLibraryProcessingTask : VCPMABaseTask
{
    NSArray *_photoLibraries;	// 8 = 0x8
    CDUnknownBlockType _progressHandler;	// 16 = 0x10
}

+ (_Bool)processLocalLibraries;	// IMP=0x00000001000081b4
+ (id)taskWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000080fc
- (void).cxx_destruct;	// IMP=0x00000001000084b4
- (_Bool)run:(id *)arg1;	// IMP=0x0000000100008364
- (id)initWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100007f70

@end

