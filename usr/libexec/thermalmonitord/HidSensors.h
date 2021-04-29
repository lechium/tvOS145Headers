//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface HidSensors : NSObject
{
    struct __IOHIDEventSystemClient *_hidEventSystem;	// 8 = 0x8
    struct __CFDictionary *_infoOnlyHIDSensors;	// 16 = 0x10
    struct __CFDictionary *_callbackSensorIntervals;	// 24 = 0x18
    struct __CFDictionary *_readFailuresExpected;	// 32 = 0x20
    struct __CFDictionary *_powerSensors;	// 40 = 0x28
    struct __CFDictionary *_tempOffsetDict;	// 48 = 0x30
    struct __CFArray *hidSensorKeys;	// 56 = 0x38
    struct __CFArray *sensorFourCharCode;	// 64 = 0x40
    struct __CFArray *synthSensorKeys;	// 72 = 0x48
    struct __CFDictionary *_callbackTemperatures;	// 80 = 0x50
    struct __CFDictionary *_potentiallyStaleSensorTimestamps;	// 88 = 0x58
    struct __CFDictionary *_potentiallyStaleSensorDefaults;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_callbackTemperaturesQueue;	// 104 = 0x68
    struct iir_filter_t filterParams[64];	// 112 = 0x70
    unsigned long long sensorWatchdogMask;	// 624 = 0x270
    _Bool _isSensorDataValid;	// 632 = 0x278
    _Bool _infoOnlySensorsActive;	// 633 = 0x279
    _Bool _dispatchVirtualTemp;	// 634 = 0x27a
    _Bool _send2DTempGrid;	// 635 = 0x27b
    struct __CFArray *_tempSensors;	// 640 = 0x280
    long long _count;	// 648 = 0x288
    int _shadowSensorCount;	// 656 = 0x290
    struct __CFDictionary *_sensorDict;	// 664 = 0x298
    struct __CFDictionary *_serviceToName;	// 672 = 0x2a0
}

+ (id)sharedInstance;	// IMP=0x0000000100003fb4
@property(readonly, nonatomic) struct __CFArray *synthSensorKeys; // @synthesize synthSensorKeys;
@property(readonly, nonatomic) struct __CFArray *sensorFourCharCode; // @synthesize sensorFourCharCode;
@property(readonly, nonatomic) struct __CFArray *hidSensorKeys; // @synthesize hidSensorKeys;
- (_Bool)isSensorDataValid;	// IMP=0x0000000100006c08
- (char *)readHIDDebugDictionaryAndReturnErrorCode;	// IMP=0x00000001000068cc
- (void)handleTemperatureEvent:(int)arg1 service:(struct __IOHIDServiceClient *)arg2;	// IMP=0x0000000100006818
- (struct __CFArray *)copySensorArray;	// IMP=0x0000000100006650
- (void)createHIDEventSystemObject;	// IMP=0x00000001000064d4
- (struct __CFDictionary *)getHIDSensorDict;	// IMP=0x00000001000055e8
- (_Bool)isTempSensorDataValid:(struct __CFString *)arg1 value:(int)arg2;	// IMP=0x0000000100005578
- (int)getFilterTimeConstantForSensor:(long long)arg1;	// IMP=0x0000000100005518
- (int)temperatureForKey:(struct __CFString *)arg1;	// IMP=0x0000000100005414
- (int)indexForTempSensorKey:(struct __CFString *)arg1;	// IMP=0x000000010000529c
- (int)callbackSensorInterval:(struct __CFString *)arg1;	// IMP=0x0000000100005258
- (void)setInfoOnlySensorsActive:(_Bool)arg1;	// IMP=0x0000000100005250
- (int)getPowerSensorIndex:(struct __CFString *)arg1;	// IMP=0x000000010000515c
- (_Bool)isBatterySensor:(struct __CFString *)arg1;	// IMP=0x00000001000050ec
- (_Bool)isPowerSensor:(struct __CFString *)arg1;	// IMP=0x00000001000050bc
- (_Bool)staleValueExpected:(struct __CFString *)arg1;	// IMP=0x0000000100005074
- (_Bool)readFailuresExpected:(struct __CFString *)arg1;	// IMP=0x000000010000502c
- (_Bool)shouldRetrieveSensor:(struct __CFString *)arg1;	// IMP=0x0000000100004fe8
- (void)initLocationStrings;	// IMP=0x0000000100004ed8
- (void)sendVirtualTemp:(int)arg1 temperature:(int)arg2;	// IMP=0x0000000100004d98
- (int)sendToService:(struct __CFString *)arg1 value:(void *)arg2;	// IMP=0x0000000100004cc8
- (void)resetHIDSensorDictionary;	// IMP=0x0000000100004c20
- (_Bool)isSending2DTempGridToDisplayDriverEnabled;	// IMP=0x0000000100004c18
- (void)enableSending2DTempGridToDisplayDriver;	// IMP=0x0000000100004c0c
- (_Bool)isVirtualTempDispatchEnabled;	// IMP=0x0000000100004c04
- (void)enableDispatchVirtualTemp;	// IMP=0x0000000100004bf8
- (void)loadProductPowerParameters:(struct __CFArray *)arg1;	// IMP=0x00000001000049cc
- (void)loadProductTemperatureParameters:(struct __CFArray *)arg1;	// IMP=0x00000001000042c0
- (unsigned long long)getWatchDogMask;	// IMP=0x00000001000042b8
- (struct __CFString *)getSensor4CCFromIndex:(long long)arg1;	// IMP=0x000000010000429c
- (unsigned int)getSensorIndexFrom4CC:(struct __CFString *)arg1;	// IMP=0x0000000100004190
- (struct iir_filter_t *)getFilterTable;	// IMP=0x0000000100004188
- (void)dealloc;	// IMP=0x00000001000040f4
- (id)init;	// IMP=0x0000000100004018

@end

