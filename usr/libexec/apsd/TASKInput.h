//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class TASKEdgeDnsInput;

@interface TASKInput : PBCodable <NSCopying>
{
    TASKEdgeDnsInput *_edgeDNS;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010003f4b0
@property(retain, nonatomic) TASKEdgeDnsInput *edgeDNS; // @synthesize edgeDNS=_edgeDNS;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010003f428
- (unsigned long long)hash;	// IMP=0x000000010003f410
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003f370
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003f2f4
- (void)copyTo:(id)arg1;	// IMP=0x000000010003f2cc
- (void)writeTo:(id)arg1;	// IMP=0x000000010003f2ac
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010003f2a4
- (id)dictionaryRepresentation;	// IMP=0x000000010003f030
- (id)description;	// IMP=0x000000010003ef7c
@property(readonly, nonatomic) _Bool hasEdgeDNS;

@end

