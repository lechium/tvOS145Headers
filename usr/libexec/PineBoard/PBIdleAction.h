//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSInvalidatable-Protocol.h"

@class AWAttentionAwarenessClient, NSString;
@protocol OS_dispatch_queue;

@interface PBIdleAction : NSObject <BSInvalidatable>
{
    _Atomic char _state;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
    double _ti;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CDUnknownBlockType _action;	// 40 = 0x28
    CDUnknownBlockType _invalidate;	// 48 = 0x30
    AWAttentionAwarenessClient *_attentor;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010001b938
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x000000010001b660
- (void)fire;	// IMP=0x000000010001b5b4
- (void)_run;	// IMP=0x000000010001b23c
- (double)idleInterval;	// IMP=0x000000010001b1f0
- (void)resetForAwake;	// IMP=0x000000010001b018
- (void)resetForSleep;	// IMP=0x000000010001ae40
- (id)initWithInterval:(double)arg1 reason:(id)arg2 queue:(id)arg3 perform:(CDUnknownBlockType)arg4 invalidationHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010001a6b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
