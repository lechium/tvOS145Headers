//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyCancelTask : PBCodable <NSCopying>
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100042110
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100042088
- (unsigned long long)hash;	// IMP=0x0000000100042070
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100041fd0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100041f54
- (void)copyTo:(id)arg1;	// IMP=0x0000000100041f2c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100041f0c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100041d24
- (id)dictionaryRepresentation;	// IMP=0x0000000100041c98
- (id)description;	// IMP=0x0000000100041be4
@property(readonly, nonatomic) _Bool hasTask;

@end
