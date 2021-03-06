//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface AWDCountersCoexS : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _coexRxGrantTimeHistograms;	// 8 = 0x8
    CDStruct_9f2792e4 _coexTxGrantTimeHistograms;	// 32 = 0x20
    unsigned int _coexRxDeniedRequests;	// 56 = 0x38
    unsigned int _coexRxGrantedRequests;	// 60 = 0x3c
    unsigned int _coexRxRequests;	// 64 = 0x40
    unsigned int _coexTxDeniedRequests;	// 68 = 0x44
    unsigned int _coexTxGrantedRequests;	// 72 = 0x48
    unsigned int _coexTxRequests;	// 76 = 0x4c
    unsigned int _coexUnsolicitedGrants;	// 80 = 0x50
    struct {
        unsigned int coexRxDeniedRequests:1;
        unsigned int coexRxGrantedRequests:1;
        unsigned int coexRxRequests:1;
        unsigned int coexTxDeniedRequests:1;
        unsigned int coexTxGrantedRequests:1;
        unsigned int coexTxRequests:1;
        unsigned int coexUnsolicitedGrants:1;
    } _has;	// 84 = 0x54
}

@property(nonatomic) unsigned int coexRxDeniedRequests; // @synthesize coexRxDeniedRequests=_coexRxDeniedRequests;
@property(nonatomic) unsigned int coexRxGrantedRequests; // @synthesize coexRxGrantedRequests=_coexRxGrantedRequests;
@property(nonatomic) unsigned int coexRxRequests; // @synthesize coexRxRequests=_coexRxRequests;
@property(nonatomic) unsigned int coexTxDeniedRequests; // @synthesize coexTxDeniedRequests=_coexTxDeniedRequests;
@property(nonatomic) unsigned int coexTxGrantedRequests; // @synthesize coexTxGrantedRequests=_coexTxGrantedRequests;
@property(nonatomic) unsigned int coexTxRequests; // @synthesize coexTxRequests=_coexTxRequests;
@property(nonatomic) unsigned int coexUnsolicitedGrants; // @synthesize coexUnsolicitedGrants=_coexUnsolicitedGrants;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000e5d84
- (unsigned long long)hash;	// IMP=0x00000001000e5c50
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000e5a90
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000e5900
- (void)copyTo:(id)arg1;	// IMP=0x00000001000e56ac
- (void)writeTo:(id)arg1;	// IMP=0x00000001000e54fc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000e54f4
- (id)dictionaryRepresentation;	// IMP=0x00000001000e48b8
- (id)description;	// IMP=0x00000001000e4804
- (void)setCoexTxGrantTimeHistograms:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000001000e47ec
- (unsigned int)coexTxGrantTimeHistogramAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000e4714
- (void)addCoexTxGrantTimeHistogram:(unsigned int)arg1;	// IMP=0x00000001000e4700
- (void)clearCoexTxGrantTimeHistograms;	// IMP=0x00000001000e46f0
@property(readonly, nonatomic) unsigned int *coexTxGrantTimeHistograms;
@property(readonly, nonatomic) unsigned long long coexTxGrantTimeHistogramsCount;
- (void)setCoexRxGrantTimeHistograms:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000001000e46b4
- (unsigned int)coexRxGrantTimeHistogramAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000e45dc
- (void)addCoexRxGrantTimeHistogram:(unsigned int)arg1;	// IMP=0x00000001000e45c8
- (void)clearCoexRxGrantTimeHistograms;	// IMP=0x00000001000e45b8
@property(readonly, nonatomic) unsigned int *coexRxGrantTimeHistograms;
@property(readonly, nonatomic) unsigned long long coexRxGrantTimeHistogramsCount;
@property(nonatomic) _Bool hasCoexRxDeniedRequests;
@property(nonatomic) _Bool hasCoexRxGrantedRequests;
@property(nonatomic) _Bool hasCoexRxRequests;
@property(nonatomic) _Bool hasCoexTxDeniedRequests;
@property(nonatomic) _Bool hasCoexTxGrantedRequests;
@property(nonatomic) _Bool hasCoexTxRequests;
@property(nonatomic) _Bool hasCoexUnsolicitedGrants;
- (void)dealloc;	// IMP=0x00000001000e42a0

@end

