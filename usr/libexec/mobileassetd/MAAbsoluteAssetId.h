//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface MAAbsoluteAssetId : NSObject <NSSecureCoding>
{
    NSString *_allAttributesHash;	// 8 = 0x8
    NSString *_assetIdHash;	// 16 = 0x10
    NSString *_nonAssetIdHash;	// 24 = 0x18
    NSString *_downloadContentHash;	// 32 = 0x20
    NSString *_downloadUrlHash;	// 40 = 0x28
    NSString *_downloadPolicyHash;	// 48 = 0x30
    NSString *_pallasAssetIdHash;	// 56 = 0x38
    NSString *_assetId;	// 64 = 0x40
    NSString *_assetType;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010004cfdc
@property(retain, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(retain, nonatomic) NSString *assetId; // @synthesize assetId=_assetId;
- (id)description;	// IMP=0x000000010004d498
- (id)summary;	// IMP=0x000000010004d404
- (_Bool)hasOnlyAssetTypeAndId;	// IMP=0x000000010004d3bc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010004d2e4
- (id)diffFromAssetId:(id)arg1 assetType:(id)arg2 attributes:(id)arg3;	// IMP=0x000000010004d268
- (id)diffFromAsset:(id)arg1;	// IMP=0x000000010004d22c
- (id)diffFrom:(id)arg1;	// IMP=0x000000010004cfe4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010004cebc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010004ccf4
- (void)dealloc;	// IMP=0x000000010004cc24
- (id)initWithAssetId:(id)arg1 forAssetType:(id)arg2 attributes:(id)arg3;	// IMP=0x000000010004cb00
- (id)initWithAssetId:(id)arg1 forAssetType:(id)arg2;	// IMP=0x000000010004caf0
- (id)pallasDynamicAssetIdHash;	// IMP=0x000000010004cae8
- (id)assetIdHash;	// IMP=0x000000010004cae0
- (id)policyHash;	// IMP=0x000000010004cad8
- (id)urlHash;	// IMP=0x000000010004cad0
- (id)contentHash;	// IMP=0x000000010004cac8
- (id)nonIdHash;	// IMP=0x000000010004cac0
- (id)allAttributesHash;	// IMP=0x000000010004cab8

@end

