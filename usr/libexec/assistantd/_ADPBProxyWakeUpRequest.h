//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface _ADPBProxyWakeUpRequest : PBRequest <NSCopying>
{
    NSString *_streamId;	// 8 = 0x8
}

+ (unsigned short)_ADPBProxyRequestType;	// IMP=0x0000000100113edc
- (void).cxx_destruct;	// IMP=0x00000001000908c8
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100090884
- (unsigned long long)hash;	// IMP=0x000000010009086c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000907cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100090750
- (void)copyTo:(id)arg1;	// IMP=0x0000000100090728
- (void)writeTo:(id)arg1;	// IMP=0x0000000100090708
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100090700
- (id)dictionaryRepresentation;	// IMP=0x0000000100090504
- (id)description;	// IMP=0x0000000100090450
@property(readonly, nonatomic) _Bool hasStreamId;
- (void)_ad_performWithPeerStreamConnection:(id)arg1 context:(id)arg2;	// IMP=0x0000000100058e88

@end

