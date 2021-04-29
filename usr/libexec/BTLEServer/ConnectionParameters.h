//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ConnectionParameters : NSObject
{
    float _minInterval;	// 8 = 0x8
    float _preferredInterval;	// 12 = 0xc
    float _maxInterval;	// 16 = 0x10
    int _minCELength;	// 20 = 0x14
    int _maxCELength;	// 24 = 0x18
    int _preferredSlaveLatency;	// 28 = 0x1c
    int _maxSlaveLatency;	// 32 = 0x20
    int _timeout;	// 36 = 0x24
    int _maxDeferment;	// 40 = 0x28
}

@property(nonatomic) int maxDeferment; // @synthesize maxDeferment=_maxDeferment;
@property(nonatomic) int timeout; // @synthesize timeout=_timeout;
@property(nonatomic) int maxSlaveLatency; // @synthesize maxSlaveLatency=_maxSlaveLatency;
@property(nonatomic) int preferredSlaveLatency; // @synthesize preferredSlaveLatency=_preferredSlaveLatency;
@property(nonatomic) int maxCELength; // @synthesize maxCELength=_maxCELength;
@property(nonatomic) int minCELength; // @synthesize minCELength=_minCELength;
@property(nonatomic) float maxInterval; // @synthesize maxInterval=_maxInterval;
@property(nonatomic) float preferredInterval; // @synthesize preferredInterval=_preferredInterval;
@property(nonatomic) float minInterval; // @synthesize minInterval=_minInterval;
- (id)description;	// IMP=0x0000000100029668

@end

