//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxySuspendTask : PBCodable <NSCopying>
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010003db00
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010003da78
- (unsigned long long)hash;	// IMP=0x000000010003da60
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003d9c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003d944
- (void)copyTo:(id)arg1;	// IMP=0x000000010003d91c
- (void)writeTo:(id)arg1;	// IMP=0x000000010003d8fc
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010003d714
- (id)dictionaryRepresentation;	// IMP=0x000000010003d688
- (id)description;	// IMP=0x000000010003d5d4
@property(readonly, nonatomic) _Bool hasTask;

@end

