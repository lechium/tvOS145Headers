//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface XDCLaunchAppRequest : PBRequest <NSCopying>
{
    NSString *_bundleID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000fe534
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000fe4f0
- (unsigned long long)hash;	// IMP=0x00000001000fe4d8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000fe438
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000fe3bc
- (void)writeTo:(id)arg1;	// IMP=0x00000001000fe3a4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000fe210
- (id)dictionaryRepresentation;	// IMP=0x00000001000fe1a8
- (id)description;	// IMP=0x00000001000fe0f4

@end

