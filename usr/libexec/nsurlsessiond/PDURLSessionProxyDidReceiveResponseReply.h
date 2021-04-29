//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveResponseReply : PBCodable <NSCopying>
{
    int _disposition;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
    CDStruct_cc6d6311 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010003b074
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010003afc0
- (unsigned long long)hash;	// IMP=0x000000010003af58
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003ae7c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003add4
- (void)copyTo:(id)arg1;	// IMP=0x000000010003ad5c
- (void)writeTo:(id)arg1;	// IMP=0x000000010003acec
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010003aa4c
- (id)dictionaryRepresentation;	// IMP=0x000000010003a910
- (id)description;	// IMP=0x000000010003a85c
- (int)StringAsDisposition:(id)arg1;	// IMP=0x000000010003a7bc
- (id)dispositionAsString:(int)arg1;	// IMP=0x000000010003a744
@property(nonatomic) _Bool hasDisposition;
@property(nonatomic) int disposition; // @synthesize disposition=_disposition;
@property(readonly, nonatomic) _Bool hasTask;

@end
