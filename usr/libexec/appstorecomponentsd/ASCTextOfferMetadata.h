//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ASCOfferMetadata.h"

@class NSString;

@interface ASCTextOfferMetadata : ASCOfferMetadata
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000c004
- (void).cxx_destruct;	// IMP=0x000000010000c5a4
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isText;	// IMP=0x000000010000c57c
- (id)description;	// IMP=0x000000010000c490
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000c300
- (unsigned long long)hash;	// IMP=0x000000010000c23c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000c158
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000c00c
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x000000010000bf34

@end

