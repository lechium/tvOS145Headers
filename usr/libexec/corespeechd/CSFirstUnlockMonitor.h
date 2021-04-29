//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

@interface CSFirstUnlockMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _firstUnlocked;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x000000010007ecf8
- (_Bool)_checkFirstUnlocked;	// IMP=0x000000010007f1d0
- (_Bool)isFirstUnlocked;	// IMP=0x000000010007f1c0
- (void)_notifyObserver:(id)arg1 withUnlocked:(_Bool)arg2;	// IMP=0x000000010007f148
- (void)_didReceiveFirstUnlock:(_Bool)arg1;	// IMP=0x000000010007f0d0
- (void)_didReceiveFirstUnlockInQueue:(_Bool)arg1;	// IMP=0x000000010007f058
- (void)_stopMonitoring;	// IMP=0x000000010007ef90
- (void)_firstUnlockNotified;	// IMP=0x000000010007ef4c
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x000000010007edb8
- (id)init;	// IMP=0x000000010007ed64

@end

