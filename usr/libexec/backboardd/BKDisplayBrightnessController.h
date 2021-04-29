//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKHIDEventClientDelegate-Protocol.h"

@class BSCompoundAssertion, BSMutableIntegerMap, BrightnessSystem, NSDictionary, NSString;

@interface BKDisplayBrightnessController : NSObject <BKHIDEventClientDelegate>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    float _brightnessLevel;	// 12 = 0xc
    int _brightnessLevelCurve;	// 16 = 0x10
    float _previousDarwinNotificationBrightnessLevel;	// 20 = 0x14
    unsigned long long _previousBrightnessLevelOptions;	// 24 = 0x18
    NSString *_previousBrightnessLevelKey;	// 32 = 0x20
    NSDictionary *_previousBrightnessLevelValue;	// 40 = 0x28
    int _notificationToken;	// 48 = 0x30
    BSMutableIntegerMap *_backlightClientPerPID;	// 56 = 0x38
    BrightnessSystem *_brightnessSystem;	// 64 = 0x40
    BSCompoundAssertion *_suppressClientNotificationsAssertion;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x00000001000526b4
- (void).cxx_destruct;	// IMP=0x0000000100051d64
- (void)clientDied:(id)arg1;	// IMP=0x0000000100051cd4
- (void)setBacklightFeatures:(id)arg1 forPID:(int)arg2;	// IMP=0x0000000100051ba4
- (void)setBacklightLocked:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x00000001000519cc
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100051954
- (id)propertyForKey:(id)arg1;	// IMP=0x00000001000518e4
@property(nonatomic) int displayBrightnessCurve;
- (void)setAutoBrightnessEnabled:(_Bool)arg1;	// IMP=0x00000001000517f4
@property(readonly, nonatomic) _Bool isALSSupported;
- (void)setBrightnessLevel:(float)arg1 reason:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00000001000513e8
@property(readonly, nonatomic) float brightnessLevel;
- (void)setMinimumBrightnessLevel:(float)arg1 fadeDuration:(float)arg2;	// IMP=0x00000001000511fc
- (unsigned char)backlightArchitectureVersion;	// IMP=0x0000000100051174
- (id)suppressBrightnessNotificationsForReason:(id)arg1;	// IMP=0x00000001000510fc
- (void)dealloc;	// IMP=0x000000010005109c
- (id)_initWithBrightnessSystem:(id)arg1;	// IMP=0x0000000100050ee4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

