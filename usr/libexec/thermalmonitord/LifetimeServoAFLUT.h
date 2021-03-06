//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LifetimeServoAFLUTColumn;

@interface LifetimeServoAFLUT : NSObject
{
    int _columnCount;	// 8 = 0x8
    int _minVoltage;	// 12 = 0xc
    int _maxVoltage;	// 16 = 0x10
    LifetimeServoAFLUTColumn *_afLUTColumns[26];	// 24 = 0x18
}

- (float)accelerationFactor:(int)arg1 voltage:(int)arg2;	// IMP=0x0000000100013d38
- (id)initWithAFTableColumns:(id)arg1;	// IMP=0x0000000100013b04

@end

