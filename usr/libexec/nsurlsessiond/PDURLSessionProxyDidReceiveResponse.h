//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyResponse, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveResponse : PBCodable <NSCopying>
{
    PDURLSessionProxyResponse *_response;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010003187c
@property(retain, nonatomic) PDURLSessionProxyResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100031798
- (unsigned long long)hash;	// IMP=0x000000010003173c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100031668
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000315b8
- (void)copyTo:(id)arg1;	// IMP=0x000000010003154c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000314e8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000312b0
- (id)dictionaryRepresentation;	// IMP=0x00000001000311d0
- (id)description;	// IMP=0x000000010003111c
@property(readonly, nonatomic) _Bool hasResponse;
@property(readonly, nonatomic) _Bool hasTask;

@end

