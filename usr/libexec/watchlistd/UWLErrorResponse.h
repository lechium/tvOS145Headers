//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

__attribute__((visibility("hidden")))
@interface UWLErrorResponse : PBCodable <NSCopying>
{
    int _retryPeriodInSeconds;	// 8 = 0x8
}

@property(nonatomic) int retryPeriodInSeconds; // @synthesize retryPeriodInSeconds=_retryPeriodInSeconds;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000c3c0
- (unsigned long long)hash;	// IMP=0x000000010000c3a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000c330
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000c2e0
- (void)copyTo:(id)arg1;	// IMP=0x000000010000c2cc
- (void)writeTo:(id)arg1;	// IMP=0x000000010000c2b4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000c2ac
- (id)dictionaryRepresentation;	// IMP=0x000000010000c014
- (id)description;	// IMP=0x000000010000bf60

@end

