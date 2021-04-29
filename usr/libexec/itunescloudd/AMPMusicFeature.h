//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface AMPMusicFeature : PBCodable <NSCopying>
{
    struct {
        float *list;
        unsigned long long count;
        unsigned long long size;
    } _values;	// 8 = 0x8
    NSString *_key;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100052c7c
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100052ba8
- (unsigned long long)hash;	// IMP=0x0000000100052b5c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100052aac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100052a1c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100052948
- (void)writeTo:(id)arg1;	// IMP=0x00000001000528bc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000528b4
- (id)dictionaryRepresentation;	// IMP=0x00000001000527f8
- (id)description;	// IMP=0x0000000100052744
- (void)setValues:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010005272c
- (float)valueAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100052654
- (void)addValue:(float)arg1;	// IMP=0x0000000100052644
- (void)clearValues;	// IMP=0x0000000100052634
@property(readonly, nonatomic) float *values;
@property(readonly, nonatomic) unsigned long long valuesCount;
@property(readonly, nonatomic) _Bool hasKey;
- (void)dealloc;	// IMP=0x00000001000525a8

@end

