//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface SDUnlockStartLTKTransfer : PBCodable <NSCopying>
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000ebc70
- (unsigned long long)hash;	// IMP=0x00000001000ebc3c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000ebb90
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000ebb24
- (void)copyTo:(id)arg1;	// IMP=0x00000001000ebaf4
- (void)writeTo:(id)arg1;	// IMP=0x00000001000ebac8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000ebac0
- (id)dictionaryRepresentation;	// IMP=0x00000001000eb7f8
- (id)description;	// IMP=0x00000001000eb744
@property(nonatomic) _Bool hasVersion;

@end

