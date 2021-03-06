//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@class CommonProduct;

@interface ArcCC : ComponentControl <tGraphDataSource>
{
    CommonProduct *_product;	// 128 = 0x80
    int _thresholdModuleTemperature;	// 136 = 0x88
    int _latestModuleTemperature;	// 140 = 0x8c
    float _targetHapticGain;	// 144 = 0x90
    float _currentHapticGain;	// 148 = 0x94
    float _previousHapticGain;	// 152 = 0x98
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x0000000100032070
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x0000000100031fc0
- (int)numberOfFields;	// IMP=0x0000000100031f88
- (void)refreshTGraphTelemetry;	// IMP=0x0000000100031f38
- (void)defaultAction;	// IMP=0x0000000100031db0
- (id)initWithParams:(struct __CFDictionary *)arg1 product:(id)arg2;	// IMP=0x0000000100031c14

@end

