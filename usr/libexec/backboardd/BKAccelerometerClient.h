//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKGSEventClient.h"

@interface BKAccelerometerClient : BKGSEventClient
{
    float _xThreshold;	// 16 = 0x10
    float _yThreshold;	// 20 = 0x14
    float _zThreshold;	// 24 = 0x18
    _Bool _passiveOrientationEvents;	// 28 = 0x1c
    _Bool _wantsOrientationEvents;	// 29 = 0x1d
    _Bool _wantsAccelerometerEvents;	// 30 = 0x1e
    double _accelerometerUpdateInterval;	// 32 = 0x20
    double _lastAccelerometerEventTimestamp;	// 40 = 0x28
}

@property(nonatomic, getter=_lastAccelerometerEventTimestamp, setter=_setLastAccelerometerEventTimestamp:) double lastAccelerometerEventTimestamp; // @synthesize lastAccelerometerEventTimestamp=_lastAccelerometerEventTimestamp;
@property(nonatomic) double accelerometerUpdateInterval; // @synthesize accelerometerUpdateInterval=_accelerometerUpdateInterval;
@property(nonatomic) _Bool wantsAccelerometerEvents; // @synthesize wantsAccelerometerEvents=_wantsAccelerometerEvents;
@property(nonatomic) _Bool wantsOrientationEvents; // @synthesize wantsOrientationEvents=_wantsOrientationEvents;
@property(nonatomic) _Bool passiveOrientationEvents; // @synthesize passiveOrientationEvents=_passiveOrientationEvents;
@property(nonatomic) float zThreshold; // @synthesize zThreshold=_zThreshold;
@property(nonatomic) float yThreshold; // @synthesize yThreshold=_yThreshold;
@property(nonatomic) float xThreshold; // @synthesize xThreshold=_xThreshold;
- (_Bool)_shouldSendSampleEventWithTimestamp:(double)arg1 samplingInterval:(double)arg2;	// IMP=0x0000000100044328
- (_Bool)_passesThresholdForX:(float)arg1 y:(float)arg2 z:(float)arg3;	// IMP=0x000000010004429c
- (void)_queue_invalidate;	// IMP=0x0000000100044268
- (void)handleOrientationEvent:(long long)arg1 orientationLocked:(_Bool)arg2;	// IMP=0x0000000100044264
- (void)handleAccelerometerEventWithTimestamp:(double)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 samplingInterval:(double)arg5;	// IMP=0x0000000100044260
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100044164

@end

