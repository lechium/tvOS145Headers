//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class AWDCountersMacRxS, AWDCountersMacTxS, AWDHeaderInfoS;

@interface AWDFlagstoneMACMetrics : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    AWDHeaderInfoS *_header;	// 16 = 0x10
    AWDCountersMacRxS *_sCntrsMacRx;	// 24 = 0x18
    AWDCountersMacTxS *_sCntrsMacTx;	// 32 = 0x20
    CDStruct_b5306035 _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010010015c
@property(retain, nonatomic) AWDCountersMacRxS *sCntrsMacRx; // @synthesize sCntrsMacRx=_sCntrsMacRx;
@property(retain, nonatomic) AWDCountersMacTxS *sCntrsMacTx; // @synthesize sCntrsMacTx=_sCntrsMacTx;
@property(retain, nonatomic) AWDHeaderInfoS *header; // @synthesize header=_header;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000fffe0
- (unsigned long long)hash;	// IMP=0x00000001000fff28
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000ffdfc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000ffcf8
- (void)copyTo:(id)arg1;	// IMP=0x00000001000ffc40
- (void)writeTo:(id)arg1;	// IMP=0x00000001000ffb98
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000ffb90
- (id)dictionaryRepresentation;	// IMP=0x00000001000ff6dc
- (id)description;	// IMP=0x00000001000ff628
@property(readonly, nonatomic) _Bool hasSCntrsMacRx;
@property(readonly, nonatomic) _Bool hasSCntrsMacTx;
@property(readonly, nonatomic) _Bool hasHeader;
@property(nonatomic) _Bool hasTimestamp;

@end
