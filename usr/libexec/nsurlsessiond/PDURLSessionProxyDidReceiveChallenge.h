//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyAuthChallenge, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveChallenge : PBCodable <NSCopying>
{
    PDURLSessionProxyAuthChallenge *_challenge;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100044e00
@property(retain, nonatomic) PDURLSessionProxyAuthChallenge *challenge; // @synthesize challenge=_challenge;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100044d1c
- (unsigned long long)hash;	// IMP=0x0000000100044cc0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100044bec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100044b3c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100044ad0
- (void)writeTo:(id)arg1;	// IMP=0x0000000100044a6c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100044834
- (id)dictionaryRepresentation;	// IMP=0x0000000100044754
- (id)description;	// IMP=0x00000001000446a0
@property(readonly, nonatomic) _Bool hasChallenge;
@property(readonly, nonatomic) _Bool hasTask;

@end
