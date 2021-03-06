//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString, SECC2MPGenericEventMetricValue;

__attribute__((visibility("hidden")))
@interface SECC2MPGenericEventMetric : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
    SECC2MPGenericEventMetricValue *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000781e8
@property(retain, nonatomic) SECC2MPGenericEventMetricValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010007811c
- (unsigned long long)hash;	// IMP=0x00000001000780c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100077fec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100077f3c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100077ed0
- (void)writeTo:(id)arg1;	// IMP=0x0000000100077e6c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100077e64
- (id)dictionaryRepresentation;	// IMP=0x0000000100077dac
- (id)description;	// IMP=0x0000000100077cf8
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;

@end

