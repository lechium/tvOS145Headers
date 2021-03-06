//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

@interface CSAlwaysOnProcessorStateMonitor : CSEventMonitor
{
    _Bool _isListeningEnabled;	// 8 = 0x8
    int _notifyToken;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x000000010008b938
- (_Bool)isEnabled;	// IMP=0x000000010008bb9c
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x000000010008bb24
- (void)_didReceiveAOPListeningStateChange:(_Bool)arg1;	// IMP=0x000000010008ba00
- (void)_stopMonitoring;	// IMP=0x000000010008b9fc
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x000000010008b9f8
- (id)init;	// IMP=0x000000010008b9a4

@end

