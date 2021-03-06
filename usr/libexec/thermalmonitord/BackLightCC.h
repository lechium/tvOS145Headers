//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@class BrightnessSystemClient;

@interface BackLightCC : ComponentControl <tGraphDataSource>
{
    _Bool isSunlightMode;	// 128 = 0x80
    unsigned char brightnessLevelElem;	// 129 = 0x81
    unsigned char brightnessLevelPointer;	// 130 = 0x82
    unsigned char brightnessLevelUp[9];	// 131 = 0x83
    unsigned char brightnessLevels[9];	// 140 = 0x8c
    unsigned char brightnessLevelDown[9];	// 149 = 0x95
    unsigned char currentBrightnessLevel;	// 158 = 0x9e
    unsigned char previousBrightnessLevel;	// 159 = 0x9f
    int _maxLICeiling;	// 160 = 0xa0
    int _maxLICeilingSoft;	// 164 = 0xa4
    int _maxLICeilingSoftPrevious;	// 168 = 0xa8
    unsigned char powerLevelElem;	// 172 = 0xac
    unsigned int powerLevelPointer;	// 176 = 0xb0
    unsigned int powerLevelUp[9];	// 180 = 0xb4
    unsigned int powerLevels[9];	// 216 = 0xd8
    unsigned int powerLevelDown[9];	// 252 = 0xfc
    _Bool powerLevelTableDefined;	// 288 = 0x120
    unsigned int currentPowerLevel;	// 292 = 0x124
    BrightnessSystemClient *_brightnessSystemClient;	// 296 = 0x128
    _Bool _solarBehaviorSuppressed;	// 304 = 0x130
    _Bool _solarDetectorPresent;	// 305 = 0x131
}

@property(nonatomic) _Bool solarDetectorPresent; // @synthesize solarDetectorPresent=_solarDetectorPresent;
@property(nonatomic) _Bool solarBehaviorSuppressed; // @synthesize solarBehaviorSuppressed=_solarBehaviorSuppressed;
- (_Bool)findBacklightServices;	// IMP=0x00000001000311c4
- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x000000010003108c
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x0000000100030fcc
- (int)numberOfFields;	// IMP=0x0000000100030f94
- (void)setCPMSMitigationState:(_Bool)arg1;	// IMP=0x0000000100030eec
- (void)initPowerTable:(struct __CFArray *)arg1;	// IMP=0x0000000100030c6c
- (void)initBrightnessTable:(struct __CFArray *)arg1;	// IMP=0x0000000100030a28
- (void)setMaxLICeilingSoft:(int)arg1;	// IMP=0x0000000100030a18
- (void)setMaxLICeiling:(int)arg1;	// IMP=0x0000000100030a08
- (_Bool)shouldSuppressMitigations;	// IMP=0x00000001000309d0
- (void)refreshFunctionalTelemetry;	// IMP=0x0000000100030974
- (void)defaultCPMSAction;	// IMP=0x0000000100030730
- (void)defaultAction;	// IMP=0x0000000100030508
- (void)setBrightnessKey:(id)arg1 value:(int)arg2;	// IMP=0x00000001000303c0
- (id)initWithParams:(struct __CFDictionary *)arg1;	// IMP=0x0000000100030078

@end

