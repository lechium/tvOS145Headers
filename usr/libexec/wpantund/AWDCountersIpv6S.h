//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface AWDCountersIpv6S : PBCodable <NSCopying>
{
    unsigned int _rxFailure;	// 8 = 0x8
    unsigned int _rxSuccess;	// 12 = 0xc
    unsigned int _txAppPktSucess;	// 16 = 0x10
    unsigned int _txDelayavg;	// 20 = 0x14
    unsigned int _txDelaymax;	// 24 = 0x18
    unsigned int _txDelaymin;	// 28 = 0x1c
    unsigned int _txFailure;	// 32 = 0x20
    unsigned int _txSuccess;	// 36 = 0x24
    struct {
        unsigned int rxFailure:1;
        unsigned int rxSuccess:1;
        unsigned int txAppPktSucess:1;
        unsigned int txDelayavg:1;
        unsigned int txDelaymax:1;
        unsigned int txDelaymin:1;
        unsigned int txFailure:1;
        unsigned int txSuccess:1;
    } _has;	// 40 = 0x28
}

@property(nonatomic) unsigned int txDelayavg; // @synthesize txDelayavg=_txDelayavg;
@property(nonatomic) unsigned int txDelaymax; // @synthesize txDelaymax=_txDelaymax;
@property(nonatomic) unsigned int txDelaymin; // @synthesize txDelaymin=_txDelaymin;
@property(nonatomic) unsigned int txAppPktSucess; // @synthesize txAppPktSucess=_txAppPktSucess;
@property(nonatomic) unsigned int rxFailure; // @synthesize rxFailure=_rxFailure;
@property(nonatomic) unsigned int rxSuccess; // @synthesize rxSuccess=_rxSuccess;
@property(nonatomic) unsigned int txFailure; // @synthesize txFailure=_txFailure;
@property(nonatomic) unsigned int txSuccess; // @synthesize txSuccess=_txSuccess;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100079354
- (unsigned long long)hash;	// IMP=0x0000000100079240
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010007907c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100078ef4
- (void)copyTo:(id)arg1;	// IMP=0x0000000100078d88
- (void)writeTo:(id)arg1;	// IMP=0x0000000100078c2c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100078c24
- (id)dictionaryRepresentation;	// IMP=0x0000000100078238
- (id)description;	// IMP=0x0000000100078184
@property(nonatomic) _Bool hasTxDelayavg;
@property(nonatomic) _Bool hasTxDelaymax;
@property(nonatomic) _Bool hasTxDelaymin;
@property(nonatomic) _Bool hasTxAppPktSucess;
@property(nonatomic) _Bool hasRxFailure;
@property(nonatomic) _Bool hasRxSuccess;
@property(nonatomic) _Bool hasTxFailure;
@property(nonatomic) _Bool hasTxSuccess;

@end

