//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@interface FanCC : ComponentControl <tGraphDataSource>
{
    unsigned int fanRPM;	// 128 = 0x80
    unsigned int previousFanRPM;	// 132 = 0x84
    unsigned int currentFanRPM;	// 136 = 0x88
    unsigned int minRPM;	// 140 = 0x8c
    unsigned int maxRPM;	// 144 = 0x90
    float scalingFactor;	// 148 = 0x94
    unsigned int connect;	// 152 = 0x98
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x00000001000215f0
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x0000000100021540
- (int)numberOfFields;	// IMP=0x0000000100021508
- (void)refreshTGraphTelemetry;	// IMP=0x00000001000214ec
- (int)setFanRPM:(unsigned int)arg1;	// IMP=0x00000001000213b8
- (void)defaultAction;	// IMP=0x00000001000211c0
- (id)initWithParams:(struct __CFDictionary *)arg1;	// IMP=0x0000000100020f18

@end

