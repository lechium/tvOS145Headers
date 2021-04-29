//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface SDUnlockLongTermKeyResponse : PBCodable <NSCopying>
{
    NSData *_longTermKey;	// 8 = 0x8
    NSString *_requestID;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    _Bool _keyFailed;	// 28 = 0x1c
    struct {
        unsigned int version:1;
        unsigned int keyFailed:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100182388
@property(nonatomic) _Bool keyFailed; // @synthesize keyFailed=_keyFailed;
@property(retain, nonatomic) NSData *longTermKey; // @synthesize longTermKey=_longTermKey;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010018225c
- (unsigned long long)hash;	// IMP=0x00000001001821a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100182068
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100181f68
- (void)copyTo:(id)arg1;	// IMP=0x0000000100181ea4
- (void)writeTo:(id)arg1;	// IMP=0x0000000100181df0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100181de8
- (id)dictionaryRepresentation;	// IMP=0x000000010018195c
- (id)description;	// IMP=0x00000001001818a8
@property(nonatomic) _Bool hasKeyFailed;
@property(readonly, nonatomic) _Bool hasLongTermKey;
@property(readonly, nonatomic) _Bool hasRequestID;
@property(nonatomic) _Bool hasVersion;

@end

