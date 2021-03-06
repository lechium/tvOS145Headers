//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CommonProduct;

@interface ThermalManager : NSObject
{
    struct __CFRunLoop *localMainRunloop;	// 8 = 0x8
    int productName;	// 16 = 0x10
    CommonProduct *product;	// 24 = 0x18
    struct __CFDictionary *_plistConfig;	// 32 = 0x20
}

@property(readonly) struct __CFRunLoop *localMainRunloop; // @synthesize localMainRunloop;
- (_Bool)getPotentialForcedThermalPressureLevel;	// IMP=0x000000010000a1c0
- (void)canaryModeExitEarly:(int)arg1;	// IMP=0x000000010000a1b0
- (int)canaryTempThreshold;	// IMP=0x000000010000a1a0
- (int)canaryTempSensorIndex;	// IMP=0x000000010000a190
- (int)desiredLoopInterval;	// IMP=0x000000010000a180
- (_Bool)useTcalAdjust:(unsigned int)arg1;	// IMP=0x000000010000a170
- (struct __CFString *)getTGraphData:(int)arg1;	// IMP=0x000000010000a134
- (void)initDataCollection;	// IMP=0x000000010000a0a0
- (int)canSystemSleep;	// IMP=0x000000010000a080
- (void)updateSystemPowerState:(_Bool)arg1;	// IMP=0x000000010000a070
- (void)updateSystemLoad:(_Bool)arg1;	// IMP=0x0000000100009ea4
- (void)checkForArcOverride:(struct __SCPreferences *)arg1 key:(struct __CFString *)arg2;	// IMP=0x0000000100009e20
- (void)checkForLifetimeServoOverride:(struct __SCPreferences *)arg1 key:(struct __CFString *)arg2;	// IMP=0x0000000100009d84
- (void)updatePrefs:(struct __SCPreferences *)arg1:(_Bool)arg2;	// IMP=0x0000000100008a90
- (int)getModeratePressureVersion;	// IMP=0x0000000100008a80
- (_Bool)isDeviceApplicable;	// IMP=0x0000000100008a28
- (void)SaveProductString:(int)arg1;	// IMP=0x0000000100008a20
- (void)probeAllSupervisorControlLoadingIndex;	// IMP=0x0000000100008a10
- (void)initializeReadPrefs:(struct __SCPreferences *)arg1;	// IMP=0x0000000100008a00
- (void)hintComponentControlTakeAction;	// IMP=0x00000001000089f0
- (int)getProductTotalPowerSensors;	// IMP=0x00000001000089e0
- (int)getProductTotalSensors;	// IMP=0x00000001000089d0
- (struct iir_filter_t *)getProductFilterValues;	// IMP=0x00000001000089c0
- (unsigned long long)getMaxSensorValue;	// IMP=0x00000001000089b0
- (unsigned int)getRequiredCalibrationResistorSamples;	// IMP=0x00000001000089a0
- (int)getProductCalibrationSensorID;	// IMP=0x0000000100008990
- (int)getProductCalibrationDefault;	// IMP=0x0000000100008980
- (void *)getConfigurationFor:(struct __CFString *)arg1;	// IMP=0x0000000100008974
- (void)createNewProduct:(struct __CFRunLoop *)arg1;	// IMP=0x000000010000888c
- (void)createConnectionToCT;	// IMP=0x000000010000887c
- (void)dealloc;	// IMP=0x0000000100008834
- (id)initWithConfig:(struct __CFDictionary *)arg1;	// IMP=0x00000001000087ec

@end

