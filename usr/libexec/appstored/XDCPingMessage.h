//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface XDCPingMessage : PBCodable <NSCopying>
{
    NSString *_uuid;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100100848
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100100804
- (unsigned long long)hash;	// IMP=0x00000001001007ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010010074c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001006d0
- (void)writeTo:(id)arg1;	// IMP=0x00000001001006b0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010010051c
- (id)dictionaryRepresentation;	// IMP=0x00000001001004b4
- (id)description;	// IMP=0x0000000100100400
@property(readonly, nonatomic) _Bool hasUuid;

@end
