//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface TFImageUpload : PBCodable <NSSecureCoding, NSCopying>
{
    NSString *_uploadUrl;	// 8 = 0x8
    NSString *_xiCloudVersionIdHeader;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000cb8d4
- (void).cxx_destruct;	// IMP=0x00000001000652b8
@property(retain, nonatomic) NSString *xiCloudVersionIdHeader; // @synthesize xiCloudVersionIdHeader=_xiCloudVersionIdHeader;
@property(retain, nonatomic) NSString *uploadUrl; // @synthesize uploadUrl=_uploadUrl;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100065204
- (unsigned long long)hash;	// IMP=0x00000001000651a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000650d4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100065024
- (void)copyTo:(id)arg1;	// IMP=0x0000000100064fb8
- (void)writeTo:(id)arg1;	// IMP=0x0000000100064f54
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100064f4c
- (id)dictionaryRepresentation;	// IMP=0x0000000100064cf4
- (id)description;	// IMP=0x0000000100064c40
@property(readonly, nonatomic) _Bool hasXiCloudVersionIdHeader;
@property(readonly, nonatomic) _Bool hasUploadUrl;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000cb958
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000cb8dc

@end
