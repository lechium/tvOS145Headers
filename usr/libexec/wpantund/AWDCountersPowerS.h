//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface AWDCountersPowerS : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _hostWakeupsCountHistograms;	// 8 = 0x8
    unsigned int _hostWakeupsCount;	// 32 = 0x20
    struct {
        unsigned int hostWakeupsCount:1;
    } _has;	// 36 = 0x24
}

@property(nonatomic) unsigned int hostWakeupsCount; // @synthesize hostWakeupsCount=_hostWakeupsCount;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000b4694
- (unsigned long long)hash;	// IMP=0x00000001000b4638
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000b4580
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000b44f8
- (void)copyTo:(id)arg1;	// IMP=0x00000001000b4414
- (void)writeTo:(id)arg1;	// IMP=0x00000001000b437c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000b4374
- (id)dictionaryRepresentation;	// IMP=0x00000001000b3ecc
- (id)description;	// IMP=0x00000001000b3e18
- (void)setHostWakeupsCountHistograms:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000001000b3e00
- (unsigned int)hostWakeupsCountHistogramAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000b3d28
- (void)addHostWakeupsCountHistogram:(unsigned int)arg1;	// IMP=0x00000001000b3d14
- (void)clearHostWakeupsCountHistograms;	// IMP=0x00000001000b3d04
@property(readonly, nonatomic) unsigned int *hostWakeupsCountHistograms;
@property(readonly, nonatomic) unsigned long long hostWakeupsCountHistogramsCount;
@property(nonatomic) _Bool hasHostWakeupsCount;
- (void)dealloc;	// IMP=0x00000001000b3c3c

@end
