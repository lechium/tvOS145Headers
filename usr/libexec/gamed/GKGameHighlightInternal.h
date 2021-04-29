//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class ASCArtwork, NSNumber, NSString;

@interface GKGameHighlightInternal : GKInternalRepresentation
{
    NSNumber *_adamID;	// 8 = 0x8
    ASCArtwork *_artwork;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_subtitle;	// 32 = 0x20
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00000001001644f4
- (void).cxx_destruct;	// IMP=0x00000001001646b4
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) ASCArtwork *artwork; // @synthesize artwork=_artwork;
@property(nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;

@end

