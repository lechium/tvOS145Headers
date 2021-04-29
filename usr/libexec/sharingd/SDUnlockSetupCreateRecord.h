//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface SDUnlockSetupCreateRecord : PBCodable <NSCopying>
{
    unsigned int _errorCode;	// 8 = 0x8
    NSString *_pairedDeviceID;	// 16 = 0x10
    unsigned int _sessionID;	// 24 = 0x18
    NSData *_token;	// 32 = 0x20
    unsigned int _version;	// 40 = 0x28
    CDStruct_e173124d _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000001000d2ccc
@property(retain, nonatomic) NSString *pairedDeviceID; // @synthesize pairedDeviceID=_pairedDeviceID;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000d2b68
- (unsigned long long)hash;	// IMP=0x00000001000d2a9c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000d2940
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000d2810
- (void)copyTo:(id)arg1;	// IMP=0x00000001000d2724
- (void)writeTo:(id)arg1;	// IMP=0x00000001000d2644
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000d263c
- (id)dictionaryRepresentation;	// IMP=0x00000001000d20bc
- (id)description;	// IMP=0x00000001000d2008
@property(readonly, nonatomic) _Bool hasPairedDeviceID;
@property(readonly, nonatomic) _Bool hasToken;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

