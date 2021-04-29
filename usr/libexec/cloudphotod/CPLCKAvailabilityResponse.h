//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface CPLCKAvailabilityResponse : PBCodable <NSCopying>
{
    int _feature;	// 8 = 0x8
    _Bool _allowed;	// 12 = 0xc
    struct {
        unsigned int feature:1;
        unsigned int allowed:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool allowed; // @synthesize allowed=_allowed;
@property(nonatomic) int feature; // @synthesize feature=_feature;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000e2778
- (unsigned long long)hash;	// IMP=0x00000001000e2724
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000e2648
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000e25b8
- (void)copyTo:(id)arg1;	// IMP=0x00000001000e2544
- (void)writeTo:(id)arg1;	// IMP=0x00000001000e24c8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000e24c0
- (id)dictionaryRepresentation;	// IMP=0x00000001000e20e8
- (id)description;	// IMP=0x00000001000e2034
@property(nonatomic) _Bool hasAllowed;
- (int)StringAsFeature:(id)arg1;	// IMP=0x00000001000e1fcc
- (id)featureAsString:(int)arg1;	// IMP=0x00000001000e1fc4
@property(nonatomic) _Bool hasFeature;

@end
