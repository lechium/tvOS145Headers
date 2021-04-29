//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface BKSystemAppHeartbeat : NSObject
{
    NSTimer *_timer;	// 8 = 0x8
    unsigned long long _firedCount;	// 16 = 0x10
    unsigned long long _numberOfTimesToFire;	// 24 = 0x18
    double _interval;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100010e30
- (void)start;	// IMP=0x0000000100010dac
- (void)_handleTimer:(id)arg1;	// IMP=0x0000000100010d38
- (void)dealloc;	// IMP=0x0000000100010ce8
- (id)initWithFireCount:(unsigned long long)arg1 interval:(double)arg2;	// IMP=0x0000000100010c90
- (id)init;	// IMP=0x0000000100010c7c

@end

