//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface _ADPBDeviceStartRemoteResponse : PBCodable <NSCopying>
{
    _Bool _success;	// 8 = 0x8
    struct {
        unsigned int success:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000979bc
- (unsigned long long)hash;	// IMP=0x0000000100097988
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000978d4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100097868
- (void)copyTo:(id)arg1;	// IMP=0x0000000100097838
- (void)writeTo:(id)arg1;	// IMP=0x000000010009780c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100097804
- (id)dictionaryRepresentation;	// IMP=0x0000000100097534
- (id)description;	// IMP=0x0000000100097480
@property(nonatomic) _Bool hasSuccess;

@end

