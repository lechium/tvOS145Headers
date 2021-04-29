//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PHPhotoLibrary;
@protocol OS_dispatch_queue;

@interface VCPSceneProcessingChangeBatch : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSMutableArray *_pendingChanges;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_publishQueue;	// 24 = 0x18
}

+ (id)batchForPhotoLibrary:(id)arg1;	// IMP=0x000000010006d394
- (void).cxx_destruct;	// IMP=0x000000010006ddbc
- (void)publishWithCompletionHandler:(CDUnknownBlockType)arg1 andCancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010006d6f4
- (int)updateAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x000000010006d40c
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x000000010006d2a8

@end

