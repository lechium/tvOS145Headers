//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface AWDSharingCMS2ServerTaskResponse : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _errorCode;	// 16 = 0x10
    unsigned int _httpStatusCode;	// 20 = 0x14
    unsigned int _idmsEnv;	// 24 = 0x18
    unsigned int _type;	// 28 = 0x1c
    struct {
        unsigned int timestamp:1;
        unsigned int errorCode:1;
        unsigned int httpStatusCode:1;
        unsigned int idmsEnv:1;
        unsigned int type:1;
    } _has;	// 32 = 0x20
}

@property(nonatomic) unsigned int idmsEnv; // @synthesize idmsEnv=_idmsEnv;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int httpStatusCode; // @synthesize httpStatusCode=_httpStatusCode;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100179240
- (unsigned long long)hash;	// IMP=0x000000010017918c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100179040
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100178f30
- (void)copyTo:(id)arg1;	// IMP=0x0000000100178e3c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100178d4c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100178d44
- (id)dictionaryRepresentation;	// IMP=0x0000000100178660
- (id)description;	// IMP=0x00000001001785ac
@property(nonatomic) _Bool hasIdmsEnv;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasHttpStatusCode;
@property(nonatomic) _Bool hasTimestamp;

@end

