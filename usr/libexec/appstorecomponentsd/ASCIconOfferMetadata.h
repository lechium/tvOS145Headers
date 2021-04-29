//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ASCOfferMetadata.h"

@class NSString;

@interface ASCIconOfferMetadata : ASCOfferMetadata
{
    NSString *_imageName;	// 8 = 0x8
    NSString *_animationName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000c6b4
- (void).cxx_destruct;	// IMP=0x000000010000cc88
@property(readonly, copy, nonatomic) NSString *animationName; // @synthesize animationName=_animationName;
@property(readonly, copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (_Bool)isIcon;	// IMP=0x000000010000cc60
- (id)description;	// IMP=0x000000010000cb74
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000c9e4
- (unsigned long long)hash;	// IMP=0x000000010000c920
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000c83c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000c6bc
- (id)initWithImageName:(id)arg1 animationName:(id)arg2;	// IMP=0x000000010000c5e4

@end

