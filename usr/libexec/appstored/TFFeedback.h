//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface TFFeedback : PBCodable <NSCopying>
{
    NSString *_comment;	// 8 = 0x8
    NSString *_email;	// 16 = 0x10
    NSString *_incidentId;	// 24 = 0x18
    NSMutableArray *_screenshots;	// 32 = 0x20
}

+ (Class)screenshotsType;	// IMP=0x00000001000ca5f8
- (void).cxx_destruct;	// IMP=0x00000001000cb440
@property(retain, nonatomic) NSString *incidentId; // @synthesize incidentId=_incidentId;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSMutableArray *screenshots; // @synthesize screenshots=_screenshots;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000cb214
- (unsigned long long)hash;	// IMP=0x00000001000cb190
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000cb064
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000cae6c
- (void)copyTo:(id)arg1;	// IMP=0x00000001000cad38
- (void)writeTo:(id)arg1;	// IMP=0x00000001000cabb8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000cabb0
- (id)dictionaryRepresentation;	// IMP=0x00000001000ca6e8
- (id)description;	// IMP=0x00000001000ca634
@property(readonly, nonatomic) _Bool hasIncidentId;
@property(readonly, nonatomic) _Bool hasComment;
- (id)screenshotsAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000ca5e0
- (unsigned long long)screenshotsCount;	// IMP=0x00000001000ca5c8
- (void)addScreenshots:(id)arg1;	// IMP=0x00000001000ca554
- (void)clearScreenshots;	// IMP=0x00000001000ca53c
@property(readonly, nonatomic) _Bool hasEmail;

@end

