//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString, NSURL, SSUpdatableAssetCacheManager;

@interface UpdateAssetsOperation : ISOperation
{
    NSURL *_bundledManifestURL;	// 96 = 0x60
    SSUpdatableAssetCacheManager *_cacheManager;	// 104 = 0x68
    CDUnknownBlockType _completion;	// 112 = 0x70
    NSURL *_manifestURL;	// 120 = 0x78
    NSString *_previousLastModified;	// 128 = 0x80
    _Bool _scheduledInBackground;	// 136 = 0x88
    NSString *_userAgent;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000100070718
- (id)_uncachedAssetsForManifest:(id)arg1;	// IMP=0x000000010007053c
- (id)_bundledManifest;	// IMP=0x000000010006fce0
- (id)_allCachedAssetFileNames;	// IMP=0x000000010006fab0
- (id)_downloadRemoteFile:(id)arg1 toLocalPath:(id)arg2 expectedMD5:(id)arg3 ifModifiedSince:(id)arg4 error:(id *)arg5;	// IMP=0x000000010006f6d0
- (void)run;	// IMP=0x000000010006d094
- (id)initWithManifestURL:(id)arg1 bundledManifestURL:(id)arg2 clientIdentifier:(id)arg3 userAgent:(id)arg4 scheduledInBackground:(_Bool)arg5 previousLastModified:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000010006ced8

@end
