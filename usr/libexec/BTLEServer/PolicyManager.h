//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PolicyManager : NSObject
{
    int _defaultMainThreadSchedPolicy;	// 8 = 0x8
    struct sched_param _defaultMainThreadSchedParam;	// 12 = 0xc
    unsigned long long _activeHIDDeviceCount;	// 24 = 0x18
}

+ (id)instance;	// IMP=0x00000001000097c0
@property(nonatomic) unsigned long long activeHIDDeviceCount; // @synthesize activeHIDDeviceCount=_activeHIDDeviceCount;
- (void)deactivateHIDPolicy;	// IMP=0x0000000100009a74
- (void)activateHIDPolicy;	// IMP=0x0000000100009a30
- (void)activeHIDDeviceCountDidChange:(id)arg1;	// IMP=0x0000000100009914
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000098ac
- (id)init;	// IMP=0x000000010000982c

@end
