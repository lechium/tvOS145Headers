//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class ASCArtwork, NSString;

@interface ASCVideo : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_videoURL;	// 8 = 0x8
    ASCArtwork *_preview;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000eef8
- (void).cxx_destruct;	// IMP=0x000000010000f4b4
@property(readonly, copy, nonatomic) ASCArtwork *preview; // @synthesize preview=_preview;
@property(readonly, copy, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
- (id)description;	// IMP=0x000000010000f3b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000f210
- (unsigned long long)hash;	// IMP=0x000000010000f14c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000f148
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000f090
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000ef00
- (id)initWithVideoURL:(id)arg1 preview:(id)arg2;	// IMP=0x000000010000ee38

@end

