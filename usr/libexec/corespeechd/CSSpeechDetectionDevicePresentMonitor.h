//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor
{
}

+ (id)sharedInstance;	// IMP=0x000000010005322c
- (void)_startObservingSystemControllerLifecycle;	// IMP=0x00000001000536c4
- (void)_systemControllerDied:(id)arg1;	// IMP=0x00000001000535c0
- (void)_startObservingSpeechDetectionVADPresence;	// IMP=0x00000001000534d8
- (_Bool)isPresent;	// IMP=0x0000000100053450
- (void)handleSpeechDetectionVADPresentChange:(id)arg1;	// IMP=0x0000000100053350
- (void)_stopMonitoring;	// IMP=0x0000000100053300
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00000001000532cc
- (id)init;	// IMP=0x0000000100053298

@end

