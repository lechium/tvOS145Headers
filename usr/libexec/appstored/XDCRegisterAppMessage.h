//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface XDCRegisterAppMessage : PBCodable <NSCopying>
{
    NSMutableArray *_metadatas;	// 8 = 0x8
}

+ (Class)metadataType;	// IMP=0x0000000100232e68
- (void).cxx_destruct;	// IMP=0x00000001002337a8
@property(retain, nonatomic) NSMutableArray *metadatas; // @synthesize metadatas=_metadatas;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010023365c
- (unsigned long long)hash;	// IMP=0x0000000100233644
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001002335a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010023342c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100233300
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100233114
- (id)dictionaryRepresentation;	// IMP=0x0000000100232f28
- (id)description;	// IMP=0x0000000100232e74
- (id)metadataAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100232e50
- (unsigned long long)metadatasCount;	// IMP=0x0000000100232e38
- (void)addMetadata:(id)arg1;	// IMP=0x0000000100232dc4
- (void)clearMetadatas;	// IMP=0x0000000100232dac

@end

