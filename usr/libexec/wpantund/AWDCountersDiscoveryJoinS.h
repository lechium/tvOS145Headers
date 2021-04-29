//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class AWDCountersJoinerS;

@interface AWDCountersDiscoveryJoinS : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _accessoryNodesCountHistograms;	// 8 = 0x8
    AWDCountersJoinerS *_sCntrsJoiner;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000e08b8
@property(retain, nonatomic) AWDCountersJoinerS *sCntrsJoiner; // @synthesize sCntrsJoiner=_sCntrsJoiner;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000e07cc
- (unsigned long long)hash;	// IMP=0x00000001000e0780
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000e06cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000e063c
- (void)copyTo:(id)arg1;	// IMP=0x00000001000e0564
- (void)writeTo:(id)arg1;	// IMP=0x00000001000e04d8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000e04d0
- (id)dictionaryRepresentation;	// IMP=0x00000001000e0090
- (id)description;	// IMP=0x00000001000dffdc
@property(readonly, nonatomic) _Bool hasSCntrsJoiner;
- (void)setAccessoryNodesCountHistograms:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000001000dffac
- (unsigned int)accessoryNodesCountHistogramAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000dfed4
- (void)addAccessoryNodesCountHistogram:(unsigned int)arg1;	// IMP=0x00000001000dfec0
- (void)clearAccessoryNodesCountHistograms;	// IMP=0x00000001000dfeb0
@property(readonly, nonatomic) unsigned int *accessoryNodesCountHistograms;
@property(readonly, nonatomic) unsigned long long accessoryNodesCountHistogramsCount;
- (void)dealloc;	// IMP=0x00000001000dfe3c

@end
