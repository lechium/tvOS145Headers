//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFHeartBeat;
@protocol OS_dispatch_queue;

@interface _ADQueueObserver : NSObject
{
    unsigned long long _numberOfOccurrences;	// 8 = 0x8
    AFHeartBeat *_heartBeat;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    double _heartBeatInterval;	// 32 = 0x20
    double _timeoutInterval;	// 40 = 0x28
    CDUnknownBlockType _timeoutHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100270c38
- (void)timeoutDetected;	// IMP=0x0000000100270bc4
- (void)heartBeatFiredWithQueue:(id)arg1;	// IMP=0x0000000100270884
- (void)stop;	// IMP=0x0000000100270818
- (void)startWithQueue:(id)arg1;	// IMP=0x0000000100270630
- (id)initWithQueue:(id)arg1 heartBeatInterval:(double)arg2 timeoutInterval:(double)arg3 timeoutHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100270568

@end

