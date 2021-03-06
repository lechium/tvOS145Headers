//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BackLightCC.h"

#import "tGraphDataSource-Protocol.h"

@interface BackLightCCSiriPlusButtonLED : BackLightCC <tGraphDataSource>
{
    unsigned int gPowerServiceBL[2];	// 304 = 0x130
    unsigned char displayCount;	// 312 = 0x138
    int _brightnessMilliNitsCurrent[2];	// 316 = 0x13c
    int _brightnessMilliNitsMaximum[2];	// 324 = 0x144
    int currentBackLightLoadingIndex[2];	// 332 = 0x14c
    _Bool _solarBehaviorSuppressed;	// 340 = 0x154
    _Bool _solarDetectorPresent;	// 341 = 0x155
}

- (void)setSolarDetectorPresent:(_Bool)arg1;	// IMP=0x0000000100008794
- (_Bool)solarDetectorPresent;	// IMP=0x0000000100008784
- (void)setSolarBehaviorSuppressed:(_Bool)arg1;	// IMP=0x0000000100008774
- (_Bool)solarBehaviorSuppressed;	// IMP=0x0000000100008764
- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x00000001000085d8
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x00000001000084e0
- (int)numberOfFields;	// IMP=0x00000001000084a8
- (void)setBrightnessKey:(id)arg1 value:(int)arg2;	// IMP=0x0000000100008290
- (void)refreshFunctionalTelemetry;	// IMP=0x0000000100007f40
- (_Bool)findBacklightServices;	// IMP=0x0000000100007d3c
- (id)initWithParams:(struct __CFDictionary *)arg1;	// IMP=0x0000000100007c9c

@end

