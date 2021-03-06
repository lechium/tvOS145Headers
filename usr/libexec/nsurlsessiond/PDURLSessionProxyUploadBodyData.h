//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyUploadBodyData : PBCodable <NSCopying>
{
    NSData *_bodyData;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100049568
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010004949c
- (unsigned long long)hash;	// IMP=0x0000000100049440
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010004936c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000492bc
- (void)copyTo:(id)arg1;	// IMP=0x0000000100049250
- (void)writeTo:(id)arg1;	// IMP=0x00000001000491ec
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100048fd8
- (id)dictionaryRepresentation;	// IMP=0x0000000100048f20
- (id)description;	// IMP=0x0000000100048e6c
@property(readonly, nonatomic) _Bool hasBodyData;
@property(readonly, nonatomic) _Bool hasTask;

@end

