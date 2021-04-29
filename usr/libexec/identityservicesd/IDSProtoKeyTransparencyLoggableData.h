//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface IDSProtoKeyTransparencyLoggableData : PBCodable <NSCopying>
{
    unsigned int _ktVersion;	// 8 = 0x8
    NSData *_ngmPublicIdentity;	// 16 = 0x10
    unsigned int _ngmVersion;	// 24 = 0x18
    struct {
        unsigned int ktVersion:1;
        unsigned int ngmVersion:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000001000a451c
@property(nonatomic) unsigned int ktVersion; // @synthesize ktVersion=_ktVersion;
@property(nonatomic) unsigned int ngmVersion; // @synthesize ngmVersion=_ngmVersion;
@property(retain, nonatomic) NSData *ngmPublicIdentity; // @synthesize ngmPublicIdentity=_ngmPublicIdentity;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000a4330
- (unsigned long long)hash;	// IMP=0x00000001000a41ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000a3eb4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000a3d1c
- (void)copyTo:(id)arg1;	// IMP=0x00000001000a3bd8
- (void)writeTo:(id)arg1;	// IMP=0x00000001000a3ad8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000a3a70
- (id)dictionaryRepresentation;	// IMP=0x00000001000a3060
- (id)description;	// IMP=0x00000001000a2f8c
@property(nonatomic) _Bool hasKtVersion;
@property(nonatomic) _Bool hasNgmVersion;
@property(readonly, nonatomic) _Bool hasNgmPublicIdentity;

@end

