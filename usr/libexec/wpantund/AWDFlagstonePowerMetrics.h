//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class AWDCountersPowerS, AWDHeaderInfoS;

@interface AWDFlagstonePowerMetrics : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    AWDHeaderInfoS *_header;	// 16 = 0x10
    AWDCountersPowerS *_sCntrsPower;	// 24 = 0x18
    CDStruct_b5306035 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000a46b4
@property(retain, nonatomic) AWDCountersPowerS *sCntrsPower; // @synthesize sCntrsPower=_sCntrsPower;
@property(retain, nonatomic) AWDHeaderInfoS *header; // @synthesize header=_header;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000a4594
- (unsigned long long)hash;	// IMP=0x00000001000a44f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000a43f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000a4318
- (void)copyTo:(id)arg1;	// IMP=0x00000001000a4280
- (void)writeTo:(id)arg1;	// IMP=0x00000001000a41f4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000a41ec
- (id)dictionaryRepresentation;	// IMP=0x00000001000a3dd0
- (id)description;	// IMP=0x00000001000a3d1c
@property(readonly, nonatomic) _Bool hasSCntrsPower;
@property(readonly, nonatomic) _Bool hasHeader;
@property(nonatomic) _Bool hasTimestamp;

@end

