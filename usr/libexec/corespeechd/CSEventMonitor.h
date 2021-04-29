//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface CSEventMonitor : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000a26bc
- (void)_stopMonitoring;	// IMP=0x00000001000a2694
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00000001000a2664
- (void)notifyObserver:(id)arg1;	// IMP=0x00000001000a260c
- (void)enumerateObservers:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a24dc
- (void)enumerateObserversInQueue:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a2444
- (void)removeObserver:(id)arg1;	// IMP=0x00000001000a235c
- (void)addObserver:(id)arg1;	// IMP=0x00000001000a226c
- (unsigned long long)type;	// IMP=0x00000001000a2264
- (void)dealloc;	// IMP=0x00000001000a2218
- (id)init;	// IMP=0x00000001000a2184

@end

