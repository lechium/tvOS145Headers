//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ADQueueMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    long long _numberOfTransactions;	// 16 = 0x10
    NSMutableDictionary *_observersByIdentifier;	// 24 = 0x18
}

+ (id)sharedMonitor;	// IMP=0x000000010026fc54
- (void).cxx_destruct;	// IMP=0x0000000100270538
- (void)_endMonitoring;	// IMP=0x00000001002703cc
- (void)_beginMonitoring;	// IMP=0x0000000100270260
- (void)_removeQueue:(id)arg1;	// IMP=0x000000010027019c
- (void)_addQueue:(id)arg1 heartBeatInterval:(double)arg2 timeoutInterval:(double)arg3 timeoutHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100270024
- (void)endMonitoring;	// IMP=0x000000010026ff8c
- (void)beginMonitoring;	// IMP=0x000000010026fef4
- (void)removeQueue:(id)arg1;	// IMP=0x000000010026fe5c
- (void)addQueue:(id)arg1 heartBeatInterval:(double)arg2 timeoutInterval:(double)arg3 timeoutHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010026fd70
- (id)init;	// IMP=0x000000010026fcc0

@end

