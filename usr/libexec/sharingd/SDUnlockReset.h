//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SDUnlockReset : PBCodable <NSCopying>
{
    NSString *_errorString;	// 8 = 0x8
    unsigned int _resetReason;	// 16 = 0x10
    unsigned int _sessionID;	// 20 = 0x14
    unsigned int _version;	// 24 = 0x18
    struct {
        unsigned int resetReason:1;
        unsigned int sessionID:1;
        unsigned int version:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000100082548
@property(retain, nonatomic) NSString *errorString; // @synthesize errorString=_errorString;
@property(nonatomic) unsigned int resetReason; // @synthesize resetReason=_resetReason;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100082428
- (unsigned long long)hash;	// IMP=0x0000000100082384
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010008225c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100082160
- (void)copyTo:(id)arg1;	// IMP=0x0000000100082094
- (void)writeTo:(id)arg1;	// IMP=0x0000000100081fd0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100081fc8
- (id)dictionaryRepresentation;	// IMP=0x0000000100081a8c
- (id)description;	// IMP=0x00000001000819d8
@property(readonly, nonatomic) _Bool hasErrorString;
@property(nonatomic) _Bool hasResetReason;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

