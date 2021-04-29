//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class FinishDownloadMemoryEntity, NSString;

@interface FinishDownloadStepOperation : ISOperation
{
    FinishDownloadMemoryEntity *_download;	// 96 = 0x60
    NSString *_downloadPhase;	// 104 = 0x68
    double _progressFraction;	// 112 = 0x70
    CDUnknownBlockType _outputBlock;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000001000f4dc0
@property(readonly, nonatomic) FinishDownloadMemoryEntity *download; // @synthesize download=_download;
- (id)_newURLOperationWithAsset:(id)arg1;	// IMP=0x00000001000f4b88
- (_Bool)writeBinaryPropertyList:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000f4718
- (_Bool)unzipAsset:(id)arg1 unzippedPath:(id *)arg2 error:(id *)arg3;	// IMP=0x00000001000f4578
@property double progressFraction;
@property(copy) CDUnknownBlockType outputBlock;
@property(copy) NSString *downloadPhase;
- (_Bool)rollbackAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000f3f1c
- (_Bool)removeInstalledAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000f38f8
- (_Bool)moveFile:(id)arg1 toPath:(inout id *)arg2 installBehavior:(long long)arg3 error:(id *)arg4;	// IMP=0x00000001000f323c
- (_Bool)moveAsset:(id)arg1 toPath:(inout id *)arg2 installBehavior:(long long)arg3 error:(id *)arg4;	// IMP=0x00000001000f3140
- (_Bool)installAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000f2f8c
- (void)finishWithDownloadResponse:(id)arg1;	// IMP=0x00000001000f2e90
- (_Bool)downloadAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000f2b7c
- (_Bool)downloadAndInstallAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000f2440
- (id)documentsDirectoryPathWithClientIdentifier:(id)arg1 downloadKind:(id)arg2;	// IMP=0x00000001000f21c8
- (void)addPurchaseManifestItemWithLibraryIdentifier:(id)arg1;	// IMP=0x00000001000f1ef4
- (void)addPurchaseManifestItem;	// IMP=0x00000001000f1ee4
- (id)initWithDownload:(id)arg1;	// IMP=0x00000001000f1e64

@end

