//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface AMPMusicCatalogContent : PBCodable <NSCopying>
{
    long long _adamId;	// 8 = 0x8
    long long _canonicalId;	// 16 = 0x10
    long long _releaseDate;	// 24 = 0x18
    NSMutableArray *_contentFeatures;	// 32 = 0x20
    int _contentType;	// 40 = 0x28
    _Bool _isExplicit;	// 44 = 0x2c
    struct {
        unsigned int adamId:1;
        unsigned int canonicalId:1;
        unsigned int releaseDate:1;
        unsigned int contentType:1;
        unsigned int isExplicit:1;
    } _has;	// 48 = 0x30
}

+ (Class)contentFeaturesType;	// IMP=0x00000001000a63d4
- (void).cxx_destruct;	// IMP=0x00000001000a5e50
@property(retain, nonatomic) NSMutableArray *contentFeatures; // @synthesize contentFeatures=_contentFeatures;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(nonatomic) long long releaseDate; // @synthesize releaseDate=_releaseDate;
@property(nonatomic) long long canonicalId; // @synthesize canonicalId=_canonicalId;
@property(nonatomic) long long adamId; // @synthesize adamId=_adamId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000a5be0
- (unsigned long long)hash;	// IMP=0x00000001000a5afc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000a597c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000a5734
- (void)copyTo:(id)arg1;	// IMP=0x00000001000a5590
- (void)writeTo:(id)arg1;	// IMP=0x00000001000a53a8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000a53a0
- (id)dictionaryRepresentation;	// IMP=0x00000001000a4fa4
- (id)description;	// IMP=0x00000001000a4ef0
- (id)contentFeaturesAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000a4ed8
- (unsigned long long)contentFeaturesCount;	// IMP=0x00000001000a4ec0
- (void)addContentFeatures:(id)arg1;	// IMP=0x00000001000a4e4c
- (void)clearContentFeatures;	// IMP=0x00000001000a4e34
@property(nonatomic) _Bool hasIsExplicit;
@property(nonatomic) _Bool hasReleaseDate;
@property(nonatomic) _Bool hasCanonicalId;
@property(nonatomic) _Bool hasAdamId;
- (int)StringAsContentType:(id)arg1;	// IMP=0x00000001000a4be0
- (id)contentTypeAsString:(int)arg1;	// IMP=0x00000001000a4b44
@property(nonatomic) _Bool hasContentType;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;

@end

