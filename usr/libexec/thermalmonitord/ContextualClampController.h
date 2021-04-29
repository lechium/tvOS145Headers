//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "tGraphDataSource-Protocol.h"

@class AgingController, BackLightCC, CommonProduct, NSDictionary, TableDrivenLowTempController, UPOStepper;
@protocol OS_dispatch_queue;

@interface ContextualClampController : NSObject <tGraphDataSource>
{
    CommonProduct *_product;	// 8 = 0x8
    BackLightCC *_backlightController;	// 16 = 0x10
    unsigned int _pmuService;	// 24 = 0x18
    unsigned int _strobeService;	// 28 = 0x1c
    unsigned int _gpuPerfService;	// 32 = 0x20
    unsigned int _chargerService;	// 36 = 0x24
    unsigned int _ppmService;	// 40 = 0x28
    int _lowTempPerfCapCPULegacy;	// 44 = 0x2c
    int _lowTempPerfCapCPU;	// 48 = 0x30
    int _lowTempPerfCapGPU;	// 52 = 0x34
    int _lowTempPerfCapBL;	// 56 = 0x38
    int _lowTempIndexPreUVLO;	// 60 = 0x3c
    int _lowTempGainSpeaker;	// 64 = 0x40
    int _lowTempMaxStrobe;	// 68 = 0x44
    int _lowTempMaxGPUPerfState;	// 72 = 0x48
    int _lowTempPPMBaseline;	// 76 = 0x4c
    _Bool _rearCameraPowered;	// 80 = 0x50
    _Bool _frontCameraPowered;	// 81 = 0x51
    int _cameraFloorCPU;	// 84 = 0x54
    int _cameraFloorGPU;	// 88 = 0x58
    int _cameraFloorPackagePower;	// 92 = 0x5c
    _Bool _odeonEnabled;	// 96 = 0x60
    int _odeonFloorCPUPower;	// 100 = 0x64
    _Bool _usesPackagePowerControl;	// 104 = 0x68
    int _mitigationControllerListID;	// 108 = 0x6c
    _Bool _hasCameraFloorDetails;	// 112 = 0x70
    unsigned long long _cameraFloorDetails;	// 120 = 0x78
    int _coldPressureNotificationToken;	// 128 = 0x80
    unsigned long long _coldPressureState;	// 136 = 0x88
    int _coldThresholdHeavy;	// 144 = 0x90
    int _coldThresholdModerate;	// 148 = 0x94
    int _coldThresholdHysteresis;	// 152 = 0x98
    id _lowTempClampCPU;	// 160 = 0xa0
    id _lowTempClampGPUPerf;	// 168 = 0xa8
    TableDrivenLowTempController *_lowTempClampGPU;	// 176 = 0xb0
    TableDrivenLowTempController *_lowTempClampBL;	// 184 = 0xb8
    TableDrivenLowTempController *_lowTempClampPreUVLO;	// 192 = 0xc0
    TableDrivenLowTempController *_lowTempClampSpeaker;	// 200 = 0xc8
    TableDrivenLowTempController *_lowTempClampStrobe;	// 208 = 0xd0
    TableDrivenLowTempController *_lowTempClampPPMBaseline;	// 216 = 0xd8
    TableDrivenLowTempController *_lowTempClampPeakPowerPressure;	// 224 = 0xe0
    id _newLowTempClampCPU;	// 232 = 0xe8
    id _newLowTempClampGPUPerf;	// 240 = 0xf0
    _Bool _isAgeAware;	// 248 = 0xf8
    _Bool _backlightCapIsSoft;	// 249 = 0xf9
    int _syntheticSOCType;	// 252 = 0xfc
    int _lowTempSyntheticSOC;	// 256 = 0x100
    int _batteryRaValueTrue;	// 260 = 0x104
    _Bool _deviceUsesWeightedRa;	// 264 = 0x108
    _Bool _needsMaxRaScaling;	// 265 = 0x109
    NSDictionary *_stepperParams;	// 272 = 0x110
    UPOStepper *_stepper;	// 280 = 0x118
    AgingController *_agingController;	// 288 = 0x120
    int _rearCameraPowerStateToken;	// 296 = 0x128
    int _rearTeleCameraPowerStateToken;	// 300 = 0x12c
    int _rearSuperWideCameraPowerStateToken;	// 304 = 0x130
    int _frontCameraPowerStateToken;	// 308 = 0x134
    int _odeonStateToken;	// 312 = 0x138
    NSObject<OS_dispatch_queue> *_clampQueue;	// 320 = 0x140
}

@property(nonatomic) NSObject<OS_dispatch_queue> *clampQueue; // @synthesize clampQueue=_clampQueue;
@property(nonatomic) int odeonStateToken; // @synthesize odeonStateToken=_odeonStateToken;
@property(nonatomic) int frontCameraPowerStateToken; // @synthesize frontCameraPowerStateToken=_frontCameraPowerStateToken;
@property(nonatomic) int rearSuperWideCameraPowerStateToken; // @synthesize rearSuperWideCameraPowerStateToken=_rearSuperWideCameraPowerStateToken;
@property(nonatomic) int rearTeleCameraPowerStateToken; // @synthesize rearTeleCameraPowerStateToken=_rearTeleCameraPowerStateToken;
@property(nonatomic) int rearCameraPowerStateToken; // @synthesize rearCameraPowerStateToken=_rearCameraPowerStateToken;
- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x000000010002f2e0
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x000000010002f21c
- (int)numberOfFields;	// IMP=0x000000010002f214
- (_Bool)isFrontCameraPowered;	// IMP=0x000000010002f20c
- (_Bool)isRearCameraPowered;	// IMP=0x000000010002f204
- (void)handleOdeonStateNotification:(unsigned long long)arg1;	// IMP=0x000000010002f120
- (void)handleFrontCameraPowerStateNotification:(unsigned long long)arg1;	// IMP=0x000000010002f03c
- (void)handleRearCameraPowerStateNotification:(unsigned long long)arg1;	// IMP=0x000000010002ef58
- (void)updatePackageFloorsAndCeilings:(_Bool)arg1;	// IMP=0x000000010002ee48
- (void)updateMaxLIFloorsAndCeilings;	// IMP=0x000000010002e970
- (void)updateInternal;	// IMP=0x000000010002dc28
- (void)update;	// IMP=0x000000010002dbb8
- (id)initWithParams:(id)arg1 backlightController:(id)arg2 product:(id)arg3;	// IMP=0x000000010002c6e0
- (id)init;	// IMP=0x000000010002c6c8

@end

