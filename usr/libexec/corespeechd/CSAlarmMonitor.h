//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

@class MTAlarmManager, NSObject;
@protocol OS_dispatch_queue;

@interface CSAlarmMonitor : CSEventMonitor
{
    long long _alarmFiringState;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    MTAlarmManager *_alarmManager;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010007d6cc
- (void).cxx_destruct;	// IMP=0x000000010007e784
- (long long)alarmState;	// IMP=0x000000010007e6d0
- (void)_notifyObserver:(id)arg1 alarmIsFiringState:(long long)arg2;	// IMP=0x000000010007e64c
- (void)_alarmStateReset:(id)arg1;	// IMP=0x000000010007e510
- (void)_alarmDismissed:(id)arg1;	// IMP=0x000000010007e3d0
- (void)_alarmIsFiring:(id)arg1;	// IMP=0x000000010007e290
- (void)_stopMonitoring;	// IMP=0x000000010007e0b4
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x000000010007dc24
- (void)initializeAlarmState;	// IMP=0x000000010007d7b4
- (id)init;	// IMP=0x000000010007d738

@end
