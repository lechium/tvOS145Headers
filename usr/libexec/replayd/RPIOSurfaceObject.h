//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@interface RPIOSurfaceObject : NSObject <NSSecureCoding>
{
    struct __IOSurface *_ioSurface;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100028824
- (void)dealloc;	// IMP=0x00000001000289f4
- (struct __IOSurface *)ioSurface;	// IMP=0x00000001000289ec
- (void)setIOSurface:(struct __IOSurface *)arg1;	// IMP=0x00000001000289a0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000288a8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010002882c

@end

