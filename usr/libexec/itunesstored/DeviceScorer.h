//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DeviceScorerContext;

@interface DeviceScorer : NSObject
{
    DeviceScorerContext *_context;	// 8 = 0x8
}

+ (void)_setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100035908
+ (id)_valueForKey:(id)arg1;	// IMP=0x00000001000358b4
+ (_Bool)_shouldSampleWithPercentage:(double)arg1 sessionDuration:(double)arg2 identifier:(id)arg3;	// IMP=0x0000000100035674
+ (_Bool)_resultForSamplingSession:(id)arg1 isActive:(_Bool *)arg2;	// IMP=0x00000001000354f4
+ (double)_randomDouble;	// IMP=0x00000001000354a4
+ (_Bool)_shouldEnableDeviceScoringV2;	// IMP=0x00000001000350b8
+ (_Bool)_shouldEnableDeviceScoring;	// IMP=0x000000010003502c
+ (id)_loadURLBag;	// IMP=0x0000000100034b30
+ (id)_hexEncodingForData:(id)arg1;	// IMP=0x0000000100034a44
+ (_Bool)deviceScoringSupportedV2;	// IMP=0x00000001000348a8
+ (_Bool)deviceScoringSupported;	// IMP=0x00000001000348a0
- (void).cxx_destruct;	// IMP=0x000000010003594c
@property(readonly) DeviceScorerContext *context; // @synthesize context=_context;
- (id)_serverEndpointIdentifierForServerEndpoint:(long long)arg1;	// IMP=0x0000000100034fe0
- (void)_initDeviceScorerWithContext:(id)arg1;	// IMP=0x0000000100034b2c
- (void)deviceScoreWithNonce:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000348b0
- (id)initWithServerEndpoint:(long long)arg1;	// IMP=0x00000001000347f4

@end
