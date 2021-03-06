//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@interface IDSUserProperties : NSObject <NSSecureCoding>
{
    _Bool _disableRegistration;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000fe6c
@property(readonly, nonatomic) _Bool disableRegistration; // @synthesize disableRegistration=_disableRegistration;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000fef8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000fe88
- (id)description;	// IMP=0x000000010000fdcc
- (unsigned long long)hash;	// IMP=0x000000010000fd70
- (_Bool)isEqualToUserProperties:(id)arg1;	// IMP=0x000000010000fca8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000fbf8
- (id)propsByupdatingDisableRegistration:(_Bool)arg1;	// IMP=0x000000010000fb70
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000faf0

@end

