//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface AWDCountersNetworkS : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _channelSelectionsHistograms;	// 8 = 0x8
    CDStruct_9f2792e4 _packetLqiHistograms;	// 32 = 0x20
    CDStruct_9f2792e4 _packetRssiNbrAccessoryHistograms;	// 56 = 0x38
    CDStruct_9f2792e4 _packetRssiNbrRouterHistograms;	// 80 = 0x50
}

- (void)mergeFrom:(id)arg1;	// IMP=0x000000010011c728
- (unsigned long long)hash;	// IMP=0x000000010011c6bc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010011c5f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010011c55c
- (void)copyTo:(id)arg1;	// IMP=0x000000010011c330
- (void)writeTo:(id)arg1;	// IMP=0x000000010011c20c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010011c204
- (id)dictionaryRepresentation;	// IMP=0x000000010011b990
- (id)description;	// IMP=0x000000010011b8dc
- (void)setPacketLqiHistograms:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010011b8c4
- (unsigned int)packetLqiHistogramAtIndex:(unsigned long long)arg1;	// IMP=0x000000010011b7ec
- (void)addPacketLqiHistogram:(unsigned int)arg1;	// IMP=0x000000010011b7d8
- (void)clearPacketLqiHistograms;	// IMP=0x000000010011b7c8
@property(readonly, nonatomic) unsigned int *packetLqiHistograms;
@property(readonly, nonatomic) unsigned long long packetLqiHistogramsCount;
- (void)setChannelSelectionsHistograms:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010011b78c
- (unsigned int)channelSelectionsHistogramAtIndex:(unsigned long long)arg1;	// IMP=0x000000010011b6b4
- (void)addChannelSelectionsHistogram:(unsigned int)arg1;	// IMP=0x000000010011b6a0
- (void)clearChannelSelectionsHistograms;	// IMP=0x000000010011b690
@property(readonly, nonatomic) unsigned int *channelSelectionsHistograms;
@property(readonly, nonatomic) unsigned long long channelSelectionsHistogramsCount;
- (void)setPacketRssiNbrAccessoryHistograms:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010011b654
- (unsigned int)packetRssiNbrAccessoryHistogramAtIndex:(unsigned long long)arg1;	// IMP=0x000000010011b57c
- (void)addPacketRssiNbrAccessoryHistogram:(unsigned int)arg1;	// IMP=0x000000010011b568
- (void)clearPacketRssiNbrAccessoryHistograms;	// IMP=0x000000010011b558
@property(readonly, nonatomic) unsigned int *packetRssiNbrAccessoryHistograms;
@property(readonly, nonatomic) unsigned long long packetRssiNbrAccessoryHistogramsCount;
- (void)setPacketRssiNbrRouterHistograms:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010011b51c
- (unsigned int)packetRssiNbrRouterHistogramAtIndex:(unsigned long long)arg1;	// IMP=0x000000010011b444
- (void)addPacketRssiNbrRouterHistogram:(unsigned int)arg1;	// IMP=0x000000010011b430
- (void)clearPacketRssiNbrRouterHistograms;	// IMP=0x000000010011b420
@property(readonly, nonatomic) unsigned int *packetRssiNbrRouterHistograms;
@property(readonly, nonatomic) unsigned long long packetRssiNbrRouterHistogramsCount;
- (void)dealloc;	// IMP=0x000000010011b37c

@end

