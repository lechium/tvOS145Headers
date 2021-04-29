//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLFeatureProvider-Protocol.h"

@class NSSet;

@interface signalPredictionInput : NSObject <MLFeatureProvider>
{
    double _temp;	// 8 = 0x8
    double _temp1;	// 16 = 0x10
    double _temp2;	// 24 = 0x18
    double _temp3;	// 32 = 0x20
    double _power;	// 40 = 0x28
    double _power1;	// 48 = 0x30
    double _power2;	// 56 = 0x38
    double _power3;	// 64 = 0x40
}

@property(nonatomic) double power3; // @synthesize power3=_power3;
@property(nonatomic) double power2; // @synthesize power2=_power2;
@property(nonatomic) double power1; // @synthesize power1=_power1;
@property(nonatomic) double power; // @synthesize power=_power;
@property(nonatomic) double temp3; // @synthesize temp3=_temp3;
@property(nonatomic) double temp2; // @synthesize temp2=_temp2;
@property(nonatomic) double temp1; // @synthesize temp1=_temp1;
@property(nonatomic) double temp; // @synthesize temp=_temp;
- (id)featureValueForName:(id)arg1;	// IMP=0x000000010003de4c
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithTemp:(double)arg1 temp1:(double)arg2 temp2:(double)arg3 temp3:(double)arg4 power:(double)arg5 power1:(double)arg6 power2:(double)arg7 power3:(double)arg8;	// IMP=0x000000010003dd98

@end

