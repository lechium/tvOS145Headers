//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FormulaDrivenLowTempController.h"

@class NSDictionary;

@interface FormulaDrivenLowTempController_GPU : FormulaDrivenLowTempController
{
    NSDictionary *_TLevelToFreqMap;	// 48 = 0x30
}

- (int)getGPUFrequencyForTLevel:(int)arg1;	// IMP=0x0000000100022918
- (int)outputForBatteryTemperature:(int)arg1 stateOfCharge:(int)arg2 batteryRaValue:(int)arg3;	// IMP=0x00000001000228c8
- (id)initWithParams:(id)arg1 formulaMaps:(id)arg2;	// IMP=0x00000001000227a4

@end

