//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PHPhotoLibrary;

@interface VCPPhotosAssetChangeManager : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSMutableArray *_pendingChanges;	// 16 = 0x10
    unsigned long long _pendingResourceChangeCount;	// 24 = 0x18
}

+ (id)managerForPhotoLibrary:(id)arg1;	// IMP=0x0000000100056c6c
- (void).cxx_destruct;	// IMP=0x00000001000588a4
- (int)publishPendingChanges;	// IMP=0x0000000100058540
- (int)updateAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x0000000100058348
- (int)updateLegacyAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x000000010005800c
- (int)updateMovieAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x000000010005783c
- (int)updateImageAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x0000000100056d0c
- (void)dealloc;	// IMP=0x0000000100056cc0
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x0000000100056bc4

@end
