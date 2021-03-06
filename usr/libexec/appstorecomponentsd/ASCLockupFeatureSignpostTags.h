//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASCLockupFeature-Protocol.h"

@class NSSet, NSString;

@interface ASCLockupFeatureSignpostTags : NSObject <ASCLockupFeature>
{
    NSSet *_signpostTags;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100003a98
- (void).cxx_destruct;	// IMP=0x0000000100003e74
@property(readonly, copy, nonatomic) NSSet *signpostTags; // @synthesize signpostTags=_signpostTags;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100003cb4
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100003c2c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100003bb4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100003aa0
- (id)initWithSignpostTags:(id)arg1;	// IMP=0x0000000100003a18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

