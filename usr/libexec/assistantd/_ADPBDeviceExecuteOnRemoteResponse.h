//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface _ADPBDeviceExecuteOnRemoteResponse : PBCodable <NSCopying>
{
    NSData *_content;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000646e8
@property(retain, nonatomic) NSData *content; // @synthesize content=_content;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000646a4
- (unsigned long long)hash;	// IMP=0x000000010006468c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000645ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100064570
- (void)copyTo:(id)arg1;	// IMP=0x0000000100064548
- (void)writeTo:(id)arg1;	// IMP=0x0000000100064528
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100064520
- (id)dictionaryRepresentation;	// IMP=0x0000000100064324
- (id)description;	// IMP=0x0000000100064270
@property(readonly, nonatomic) _Bool hasContent;

@end

