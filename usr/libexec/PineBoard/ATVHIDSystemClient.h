//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSAssertion, NSArray, PBHIDServiceBrowser, SSIndicatorLight;

@interface ATVHIDSystemClient : NSObject
{
    struct __IOHIDEventSystemClient *_hidSystemClient;	// 8 = 0x8
    struct __IOHIDEventSystemClient *_btKeyboardHIDSystemClient;	// 16 = 0x10
    NSArray *_normalEventRouters;	// 24 = 0x18
    BKSAssertion *_dispatchingRulesAssertion;	// 32 = 0x20
    PBHIDServiceBrowser *_MFIGamePadBrowser;	// 40 = 0x28
    SSIndicatorLight *_sil;	// 48 = 0x30
}

+ (_Bool)_buttonEvent:(struct __IOHIDEvent *)arg1 containsUsage:(long long)arg2;	// IMP=0x00000001000f2d64
+ (_Bool)isRemoteAppEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000f2d24
+ (_Bool)isCECButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000f2ce4
+ (_Bool)isIRRemoteButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000f2ca4
+ (_Bool)isBluetoothKeyboardButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000f2c34
+ (id)sharedInstance;	// IMP=0x00000001000f25c0
- (void).cxx_destruct;	// IMP=0x00000001000f58d0
- (void)enableNormalEventRouting;	// IMP=0x00000001000f578c
- (void)enableSleepEventRouting;	// IMP=0x00000001000f560c
- (void)disableAllEventRouting;	// IMP=0x00000001000f548c
- (id)_routingRulesThatIgnoreEvents;	// IMP=0x00000001000f52ec
- (void)_setSILForButtonDown:(_Bool)arg1;	// IMP=0x00000001000f522c
- (void)flashSILMorseCode:(id)arg1;	// IMP=0x00000001000f51a8
- (void)setSILStateForHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000f4efc
- (void)setSILState_Off;	// IMP=0x00000001000f4ec4
- (void)setSILState_On;	// IMP=0x00000001000f4e8c
- (void)_setSILState_On:(id)arg1;	// IMP=0x00000001000f4c1c
- (void)_setSILState_Off:(id)arg1;	// IMP=0x00000001000f49ac
- (void)_processGenericDesktopEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000f44d4
- (void)_processConsumerEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000f442c
- (void)_processBatterySystemEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000f43d8
- (void)_processAppleVendorDebugEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000f4154
- (void)_processAppleVendorIRRemoteEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000f40b8
- (void)_processHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000f3c48
- (void)setupHIDEventRouters;	// IMP=0x00000001000f2e7c
- (_Bool)isMultiButtonMFIGamePadEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000f2e3c
- (void)dealloc;	// IMP=0x00000001000f2b84
- (void)_startKeyboardHIDClient;	// IMP=0x00000001000f29d0
- (int)_init;	// IMP=0x00000001000f27b4
- (id)init;	// IMP=0x00000001000f2688

@end
