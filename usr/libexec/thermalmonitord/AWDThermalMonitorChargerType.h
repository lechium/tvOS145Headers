//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface AWDThermalMonitorChargerType : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _chargerType;	// 16 = 0x10
    struct {
        unsigned int timestamp:1;
        unsigned int chargerType:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) unsigned int chargerType; // @synthesize chargerType=_chargerType;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000297c
- (unsigned long long)hash;	// IMP=0x0000000100002928
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100002880
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000027f0
- (void)copyTo:(id)arg1;	// IMP=0x0000000100002794
- (void)writeTo:(id)arg1;	// IMP=0x0000000100002718
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100002710
- (id)dictionaryRepresentation;	// IMP=0x0000000100002368
- (id)description;	// IMP=0x00000001000022e8
@property(nonatomic) _Bool hasChargerType;
@property(nonatomic) _Bool hasTimestamp;

@end

