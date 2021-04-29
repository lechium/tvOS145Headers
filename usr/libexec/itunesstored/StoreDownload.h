//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSDownloadMetadata.h>

@class NSArray, NSData, NSNumber;

@interface StoreDownload : SSDownloadMetadata
{
    NSData *_epubRightsSinfData;	// 32 = 0x20
}

- (_Bool)_patchPackageDictionary:(id)arg1 matchesInstallApplication:(id)arg2;	// IMP=0x00000001000c3eb8
- (id)_newPrimaryAssetsWithAssetDictionary:(id)arg1 assetType:(id)arg2;	// IMP=0x00000001000c3d4c
- (id)_newDeltaPackageAssetsWithAssetDictionary:(id)arg1;	// IMP=0x00000001000c37a0
- (id)_newAssetWithURL:(id)arg1 assetType:(id)arg2;	// IMP=0x00000001000c3700
- (id)_newAssetPropertiesWithStoreDictionary:(id)arg1 assetType:(id)arg2;	// IMP=0x00000001000c2ee0
- (id)_epubRightsSinfData;	// IMP=0x00000001000c2e50
- (id)_copySinfValueFromEpubRightsDataWithField:(long long)arg1;	// IMP=0x00000001000c2d70
- (id)_copySinfValueWithField:(long long)arg1;	// IMP=0x00000001000c2cd0
- (id)_copyPinfValueWithField:(long long)arg1;	// IMP=0x00000001000c2c30
- (id)newDownloadProperties;	// IMP=0x00000001000c2b7c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000c2a9c
- (unsigned long long)hash;	// IMP=0x00000001000c2a90
- (id)description;	// IMP=0x00000001000c29f8
- (_Bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000001000c2970
@property(readonly) NSNumber *familyAccountIdentifier;
@property(readonly) NSNumber *downloaderAccountIdentifier;
@property(readonly) NSNumber *purchaserAccountIdentifier;
@property(readonly) NSNumber *redownloadedStatus;
@property(readonly) NSNumber *matchedStatus;
@property(readonly) NSArray *assets;
- (void)dealloc;	// IMP=0x00000001000c23d4
- (id)initWithDownload:(id)arg1;	// IMP=0x00000001000c16f0
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x00000001000c1678
- (id)_newDateFormatter;	// IMP=0x00000001001b8b68
- (id)_newAssetArrayWithDownloadAssets:(id)arg1;	// IMP=0x00000001001b89e8
- (id)copyJobActivity;	// IMP=0x00000001001b7dcc

@end

