//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class TASKEdgeDnsOutput;

@interface TASKOutput : PBCodable <NSCopying>
{
    TASKEdgeDnsOutput *_edgeDNS;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010006b7e0
@property(retain, nonatomic) TASKEdgeDnsOutput *edgeDNS; // @synthesize edgeDNS=_edgeDNS;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010006b758
- (unsigned long long)hash;	// IMP=0x000000010006b740
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010006b6a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010006b624
- (void)copyTo:(id)arg1;	// IMP=0x000000010006b5fc
- (void)writeTo:(id)arg1;	// IMP=0x000000010006b5dc
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010006b5d4
- (id)dictionaryRepresentation;	// IMP=0x000000010006b360
- (id)description;	// IMP=0x000000010006b2ac
@property(readonly, nonatomic) _Bool hasEdgeDNS;

@end

