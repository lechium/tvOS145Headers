//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SensorDispatcherHelper : NSObject
{
    unsigned int connect;	// 8 = 0x8
    unsigned long long sensorCount;	// 16 = 0x10
    struct __CFDictionary *_smcSensorDict;	// 24 = 0x18
    struct sensorTemperatureData _sensorData;	// 32 = 0x20
    struct sensorTemperature4CC _sensor4CC;	// 92 = 0x5c
}

+ (id)sharedInstance;	// IMP=0x000000010003babc
- (int)getTemperatureFromSMCForKey:(struct __CFString *)arg1;	// IMP=0x000000010003befc
- (float)getFloatValueFromSMCForKey:(struct __CFString *)arg1;	// IMP=0x000000010003be8c
- (int)getValueFromSMCForKey:(struct __CFString *)arg1;	// IMP=0x000000010003be1c
- (int)writeKeysToSensorDispatcher:(struct smcKeyWrites)arg1;	// IMP=0x000000010003bda8
- (void)readKeysFromSensorDispatcher;	// IMP=0x000000010003bd30
- (id)init;	// IMP=0x000000010003bb20

@end

