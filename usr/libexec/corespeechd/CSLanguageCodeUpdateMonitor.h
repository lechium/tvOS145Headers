//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

@interface CSLanguageCodeUpdateMonitor : CSEventMonitor
{
}

+ (id)sharedInstance;	// IMP=0x00000001000a0df4
- (void)notifySiriLanguageCodeChanged:(id)arg1;	// IMP=0x00000001000a0eb8
- (void)_stopMonitoring;	// IMP=0x00000001000a0e90
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00000001000a0e60

@end

