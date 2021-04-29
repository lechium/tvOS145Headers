//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface XDCProgressMessage : PBCodable <NSCopying>
{
    NSMutableArray *_progress;	// 8 = 0x8
}

+ (Class)progressType;	// IMP=0x00000001001a2fbc
- (void).cxx_destruct;	// IMP=0x00000001001a38fc
@property(retain, nonatomic) NSMutableArray *progress; // @synthesize progress=_progress;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001001a37b0
- (unsigned long long)hash;	// IMP=0x00000001001a3798
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001a36f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001a3580
- (void)writeTo:(id)arg1;	// IMP=0x00000001001a3454
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001001a3268
- (id)dictionaryRepresentation;	// IMP=0x00000001001a307c
- (id)description;	// IMP=0x00000001001a2fc8
- (id)progressAtIndex:(unsigned long long)arg1;	// IMP=0x00000001001a2fa4
- (unsigned long long)progressCount;	// IMP=0x00000001001a2f8c
- (void)addProgress:(id)arg1;	// IMP=0x00000001001a2f18
- (void)clearProgress;	// IMP=0x00000001001a2f00

@end
