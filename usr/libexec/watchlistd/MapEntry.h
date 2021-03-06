//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MapEntry : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000a33c
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000a288
- (unsigned long long)hash;	// IMP=0x000000010000a22c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000a158
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000a0a8
- (void)copyTo:(id)arg1;	// IMP=0x000000010000a03c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100009fd8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100009fd0
- (id)dictionaryRepresentation;	// IMP=0x0000000100009d78
- (id)description;	// IMP=0x0000000100009cc4
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;

@end

