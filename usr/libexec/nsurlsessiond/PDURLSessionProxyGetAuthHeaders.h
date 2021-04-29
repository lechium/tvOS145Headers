//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyResponse, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyGetAuthHeaders : PBCodable <NSCopying>
{
    PDURLSessionProxyResponse *_response;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000c344
@property(retain, nonatomic) PDURLSessionProxyResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000c260
- (unsigned long long)hash;	// IMP=0x000000010000c204
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000c130
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000c080
- (void)copyTo:(id)arg1;	// IMP=0x000000010000c014
- (void)writeTo:(id)arg1;	// IMP=0x000000010000bfb0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000bd78
- (id)dictionaryRepresentation;	// IMP=0x000000010000bc98
- (id)description;	// IMP=0x000000010000bbe4
@property(readonly, nonatomic) _Bool hasResponse;
@property(readonly, nonatomic) _Bool hasTask;

@end
