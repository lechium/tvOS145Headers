//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LowTempControllerProtocol-Protocol.h"

@class NSDictionary;

@interface FormulaDrivenLowTempController : NSObject <LowTempControllerProtocol>
{
    NSDictionary *_TLevelToPs;	// 8 = 0x8
    NSDictionary *_TLevelToPp;	// 16 = 0x10
    NSDictionary *_TLevelToPb;	// 24 = 0x18
    NSDictionary *_coefficientMaps;	// 32 = 0x20
    int _mitigationsStartWRa;	// 40 = 0x28
    _Bool _useChemSOC;	// 44 = 0x2c
}

@property _Bool useChemSOC; // @synthesize useChemSOC=_useChemSOC;
- (int)outputForBatteryTemperature:(int)arg1 stateOfCharge:(int)arg2 batteryRaValue:(int)arg3;	// IMP=0x00000001000223d4
- (void)calculateBatteryPsAndTLevelWith:(int)arg1 chemSoc:(int)arg2 weightedRa:(int)arg3 ps:(int *)arg4 tLevel:(int *)arg5;	// IMP=0x0000000100021de4
- (int)psFormula:(float)arg1 weightedRa:(int)arg2 pp:(int)arg3 pb:(int)arg4 coeff:(float *)arg5;	// IMP=0x0000000100021c78
- (id)initWithParams:(id)arg1;	// IMP=0x000000010002193c

@end

