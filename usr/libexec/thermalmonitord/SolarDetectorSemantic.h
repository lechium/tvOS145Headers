//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ContextAwareObject.h"

#import "tGraphDataSource-Protocol.h"

@class BrightnessSystemClient, NSObject;
@protocol OS_dispatch_queue;

@interface SolarDetectorSemantic : ContextAwareObject <tGraphDataSource>
{
    BrightnessSystemClient *_brightnessSystemClient;	// 16 = 0x10
    int _thermalSunlightStateToken;	// 24 = 0x18
    int _currentSemanticAmbientLightLevel;	// 28 = 0x1c
    NSObject<OS_dispatch_queue> *_update_queue;	// 32 = 0x20
    int _currentSemanticLux;	// 40 = 0x28
    int _sunlightState;	// 44 = 0x2c
    int _sunlightStatePrevious;	// 48 = 0x30
    int _sunlightOverrideState;	// 52 = 0x34
    int _sunlightOverrideStatePrevious;	// 56 = 0x38
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x0000000100015d30
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x0000000100015cfc
- (int)numberOfFields;	// IMP=0x0000000100015cf4
- (void)setInfoOnlySensorsActive:(_Bool)arg1;	// IMP=0x0000000100015ce0
- (void)processPotentialSolarStateChange:(_Bool)arg1;	// IMP=0x0000000100015be4
- (void)updateCurrentSemanticAmbientLightLevel:(int)arg1;	// IMP=0x0000000100015a84
- (_Bool)synchContext;	// IMP=0x0000000100015964
- (_Bool)isContextTriggered;	// IMP=0x0000000100015940
- (int)getContextState;	// IMP=0x000000010001590c
- (void)handleBrightnessClientNotification:(id)arg1 value:(id)arg2;	// IMP=0x00000001000157ac
- (void)initializeSemanticBrightnessHandling;	// IMP=0x0000000100015688
- (id)init;	// IMP=0x000000010001541c

@end
