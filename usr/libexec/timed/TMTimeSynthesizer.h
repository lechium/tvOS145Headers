//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "TMTimeProvider-Protocol.h"

@class NSString, TMTime;

@interface TMTimeSynthesizer : NSObject <NSCopying, NSSecureCoding, TMTimeProvider>
{
    double _rtc;	// 8 = 0x8
    double _utc;	// 16 = 0x10
    double _rateSf;	// 24 = 0x18
    double _smoothedSf;	// 32 = 0x20
    double _lastRtcForSmoothSf;	// 40 = 0x28
    double _utc_var;	// 48 = 0x30
    double _sf_var;	// 56 = 0x38
    double _utc_sf_cov;	// 64 = 0x40
    unsigned long long _rejects;	// 72 = 0x48
    _Bool _needTimeNow;	// 80 = 0x50
    double _clkSg;	// 88 = 0x58
    double _xoAccuracy;	// 96 = 0x60
    int _measNumber;	// 104 = 0x68
    double _lastTimeRtc;	// 112 = 0x70
    _Bool _running;	// 120 = 0x78
    NSString *_name;	// 128 = 0x80
    TMTime *_lastQualityTime;	// 136 = 0x88
}

+ (id)newSynthesizerFromDataRepresentation:(id)arg1;	// IMP=0x00000001000132f8
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100012e64
@property(copy) TMTime *lastQualityTime; // @synthesize lastQualityTime=_lastQualityTime;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
- (void)update:(id)arg1;	// IMP=0x00000001000181a0
- (void)reset;	// IMP=0x0000000100017bc8
- (double)rtcWhenBeyondUncertainty:(double)arg1;	// IMP=0x0000000100017afc
- (id)synthesizedTimeAtLastRTC;	// IMP=0x0000000100017adc
- (id)timeAtRtc:(double)arg1;	// IMP=0x00000001000177c4
- (void)displayLastQualityTime;	// IMP=0x0000000100017358
- (id)initWithClockAccuracy:(double)arg1 noiseDensity:(double)arg2 name:(id)arg3;	// IMP=0x00000001000172cc
- (void)dealloc;	// IMP=0x0000000100017268
- (void)inflateHistoricalDataBy:(double)arg1;	// IMP=0x0000000100017124
- (id)dataRepresentation;	// IMP=0x0000000100013488
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100013084
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100012e6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100012cf8
- (_Bool)intersects:(id)arg1;	// IMP=0x0000000100016150

@end

