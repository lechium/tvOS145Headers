//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, PDURLSessionProxyError, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyTaskCompleted : PBCodable <NSCopying>
{
    PDURLSessionProxyError *_error;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
    NSData *_taskInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010005f188
@property(retain, nonatomic) NSData *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) PDURLSessionProxyError *error; // @synthesize error=_error;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010005f060
- (unsigned long long)hash;	// IMP=0x000000010005efec
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010005eeec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005ee14
- (void)copyTo:(id)arg1;	// IMP=0x000000010005ed88
- (void)writeTo:(id)arg1;	// IMP=0x000000010005ed08
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010005eaa4
- (id)dictionaryRepresentation;	// IMP=0x000000010005e9a0
- (id)description;	// IMP=0x000000010005e8ec
@property(readonly, nonatomic) _Bool hasTaskInfo;
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasTask;

@end

