//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface PDURLSessionProxyStartedUp : PBCodable <NSCopying>
{
    NSString *_launchUUID;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    CDStruct_f20694ce _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000010002ff5c
@property(retain, nonatomic) NSString *launchUUID; // @synthesize launchUUID=_launchUUID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010002feb0
- (unsigned long long)hash;	// IMP=0x000000010002fe4c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010002fd74
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002fccc
- (void)copyTo:(id)arg1;	// IMP=0x000000010002fc54
- (void)writeTo:(id)arg1;	// IMP=0x000000010002fbe4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010002f98c
- (id)dictionaryRepresentation;	// IMP=0x000000010002f8c0
- (id)description;	// IMP=0x000000010002f80c
@property(readonly, nonatomic) _Bool hasLaunchUUID;
@property(nonatomic) _Bool hasVersion;

@end

