//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class TASKRequest;

@interface TASKControlRequest : PBRequest <NSCopying>
{
    TASKRequest *_create;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010003ef50
@property(retain, nonatomic) TASKRequest *create; // @synthesize create=_create;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010003eec8
- (unsigned long long)hash;	// IMP=0x000000010003eeb0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003ee10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003ed94
- (void)copyTo:(id)arg1;	// IMP=0x000000010003ed6c
- (void)writeTo:(id)arg1;	// IMP=0x000000010003ed4c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010003ed44
- (id)dictionaryRepresentation;	// IMP=0x000000010003ead0
- (id)description;	// IMP=0x000000010003ea1c
@property(readonly, nonatomic) _Bool hasCreate;

@end

