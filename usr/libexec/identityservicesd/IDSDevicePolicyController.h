//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSDevicePolicyController : NSObject
{
    NSMutableDictionary *_devices;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001005dc3d0
- (void).cxx_destruct;	// IMP=0x00000001005dd3dc
- (_Bool)shouldBlackOutDeviceWithCbuuid:(id)arg1;	// IMP=0x00000001005dcbcc
- (void)endFairplayAuthenticationForDeviceWithCbuuid:(id)arg1;	// IMP=0x00000001005dcac4
- (void)startFairplayAuthenticationForDeviceWithCbuuid:(id)arg1;	// IMP=0x00000001005dc638
- (id)init;	// IMP=0x00000001005dc564

@end

