//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

@interface CSVoiceTriggerEnabledMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isVoiceTriggerEnabled;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x000000010008b080
- (_Bool)_checkVoiceTriggerEnabled;	// IMP=0x000000010008b5c0
- (_Bool)isEnabled;	// IMP=0x000000010008b5b0
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x000000010008b538
- (void)_didReceiveVoiceTriggerSettingChanged:(_Bool)arg1;	// IMP=0x000000010008b4c0
- (void)_didReceiveVoiceTriggerSettingChangedInQueue:(_Bool)arg1;	// IMP=0x000000010008b448
- (void)_stopMonitoring;	// IMP=0x000000010008b374
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x000000010008b140
- (id)init;	// IMP=0x000000010008b0ec

@end

