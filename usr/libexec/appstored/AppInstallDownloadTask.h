//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class AppInstall, AppInstallDownloadResponse, AppInstallInfo, AppPackage, IXAppInstallCoordinator;

@interface AppInstallDownloadTask : Task
{
    IXAppInstallCoordinator *_coordinator;	// 8 = 0x8
    _Bool _didLoadAssetSize;	// 16 = 0x10
    long long _installID;	// 24 = 0x18
    AppInstall *_install;	// 32 = 0x20
    AppInstallInfo *_installInfo;	// 40 = 0x28
    AppPackage *_package;	// 48 = 0x30
    AppInstallDownloadResponse *_downloadResponse;	// 56 = 0x38
}

+ (id)_streamingZipOptionsWithChunkedDigest:(id)arg1 quarantineOptions:(id)arg2;	// IMP=0x0000000100114afc
+ (id)operationForInstallID:(long long)arg1 inSession:(id)arg2 withCoordinator:(id)arg3;	// IMP=0x0000000100114120
- (void).cxx_destruct;	// IMP=0x0000000100116464
@property(retain) AppInstallDownloadResponse *downloadResponse; // @synthesize downloadResponse=_downloadResponse;
- (id)_quarantineOptions;	// IMP=0x0000000100116440
- (id)_coordinatorDataConsumerWithChunkedDigest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100116004
- (id)chainFairPlayDecryptionToConsumer:(id)arg1 withDPInfo:(id)arg2 digest:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100115e80
- (id)_dataConsumerError:(id *)arg1 promiseConsumer:(id *)arg2;	// IMP=0x00000001001156dc
- (id)_buildAssetRequestWithDataConsumer:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100114fec
- (_Bool)_allowsConstrainedNetwork;	// IMP=0x0000000100114e38
- (_Bool)_allowsCellularAccess;	// IMP=0x0000000100114c84
- (void)main;	// IMP=0x0000000100114ab8
- (id)prepareForDownload;	// IMP=0x000000010011459c
- (id)_initWithInstall:(id)arg1 package:(id)arg2 coordinator:(id)arg3;	// IMP=0x0000000100114434

@end

