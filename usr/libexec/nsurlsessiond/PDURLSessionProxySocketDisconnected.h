//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxySocketDisconnected : PBCodable <NSCopying>
{
    NSString *_socketUUID;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000349a8
@property(retain, nonatomic) NSString *socketUUID; // @synthesize socketUUID=_socketUUID;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000348dc
- (unsigned long long)hash;	// IMP=0x0000000100034880
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000347ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000346fc
- (void)copyTo:(id)arg1;	// IMP=0x0000000100034690
- (void)writeTo:(id)arg1;	// IMP=0x000000010003462c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100034418
- (id)dictionaryRepresentation;	// IMP=0x0000000100034360
- (id)description;	// IMP=0x00000001000342ac
@property(readonly, nonatomic) _Bool hasSocketUUID;
@property(readonly, nonatomic) _Bool hasTask;

@end
