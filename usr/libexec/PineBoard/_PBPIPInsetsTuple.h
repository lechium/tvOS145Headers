//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSAnimationFenceHandle, BSAnimationSettings, NSValue;

@interface _PBPIPInsetsTuple : NSObject
{
    NSValue *_value;	// 8 = 0x8
    BSAnimationSettings *_animationSettings;	// 16 = 0x10
    BKSAnimationFenceHandle *_animationFence;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100066dc0
@property(readonly, nonatomic) BKSAnimationFenceHandle *animationFence; // @synthesize animationFence=_animationFence;
@property(readonly, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property(readonly, nonatomic) NSValue *value; // @synthesize value=_value;
- (void)dropFence;	// IMP=0x0000000100066d24
- (id)initWithValue:(id)arg1 animationSettings:(id)arg2 animationFence:(id)arg3;	// IMP=0x0000000100066bdc
- (id)init;	// IMP=0x0000000100066aec

@end

