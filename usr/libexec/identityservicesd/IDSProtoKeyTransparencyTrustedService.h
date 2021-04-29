//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class IDSProtoKeyTransparencyLoggableData, NSMutableArray, NSString;

@interface IDSProtoKeyTransparencyTrustedService : PBCodable <NSCopying>
{
    IDSProtoKeyTransparencyLoggableData *_ktLoggableData;	// 8 = 0x8
    NSString *_serviceIdentifier;	// 16 = 0x10
    NSMutableArray *_uris;	// 24 = 0x18
}

+ (Class)urisType;	// IMP=0x000000010044b73c
- (void).cxx_destruct;	// IMP=0x000000010044cb88
@property(retain, nonatomic) IDSProtoKeyTransparencyLoggableData *ktLoggableData; // @synthesize ktLoggableData=_ktLoggableData;
@property(retain, nonatomic) NSMutableArray *uris; // @synthesize uris=_uris;
@property(retain, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010044c808
- (unsigned long long)hash;	// IMP=0x000000010044c770
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010044c598
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010044c308
- (void)copyTo:(id)arg1;	// IMP=0x000000010044c1a4
- (void)writeTo:(id)arg1;	// IMP=0x000000010044bfb8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010044bf50
- (id)dictionaryRepresentation;	// IMP=0x000000010044b86c
- (id)description;	// IMP=0x000000010044b798
@property(readonly, nonatomic) _Bool hasKtLoggableData;
- (id)urisAtIndex:(unsigned long long)arg1;	// IMP=0x000000010044b6f8
- (unsigned long long)urisCount;	// IMP=0x000000010044b6bc
- (void)addUris:(id)arg1;	// IMP=0x000000010044b614
- (void)clearUris;	// IMP=0x000000010044b5d8
@property(readonly, nonatomic) _Bool hasServiceIdentifier;

@end

