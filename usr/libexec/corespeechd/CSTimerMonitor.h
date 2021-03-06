//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

@class MTTimerManager, NSObject;
@protocol OS_dispatch_queue;

@interface CSTimerMonitor : CSEventMonitor
{
    long long _timerFiringState;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    MTTimerManager *_timerManager;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010002df24
- (void).cxx_destruct;	// IMP=0x000000010002f1a4
- (long long)timerState;	// IMP=0x000000010002f0f0
- (void)_notifyObserver:(id)arg1 timerIsFiringState:(long long)arg2;	// IMP=0x000000010002f06c
- (void)_timerStateReset:(id)arg1;	// IMP=0x000000010002ef30
- (void)_timerDismissed:(id)arg1;	// IMP=0x000000010002edf0
- (void)_timerIsFiring:(id)arg1;	// IMP=0x000000010002ec98
- (_Bool)_isSleepTimer:(id)arg1;	// IMP=0x000000010002ea58
- (void)_stopMonitoring;	// IMP=0x000000010002e87c
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x000000010002e3ec
- (void)initializeTimerState;	// IMP=0x000000010002e00c
- (id)init;	// IMP=0x000000010002df90

@end

