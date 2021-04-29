//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@interface PBSystemOverlayContext : NSObject <NSCopying, NSMutableCopying>
{
    long long _layoutLevel;	// 8 = 0x8
    unsigned long long _sceneDeactivationReasons;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned long long sceneDeactivationReasons;
@property(readonly, nonatomic) long long layoutLevel;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100196eb4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100196e88
- (id)initWithContext:(id)arg1;	// IMP=0x0000000100196d94

@end

