//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

#import "CSTrialAssetDownloadMonitorDelegate-Protocol.h"

@class CSTrialAssetDownloadMonitor, NSString;

@interface CSAdBlockerAssetDownloadMonitor : CSEventMonitor <CSTrialAssetDownloadMonitorDelegate>
{
    int _notifyToken;	// 8 = 0x8
    unsigned long long _lastUpdatedAssetType;	// 16 = 0x10
    CSTrialAssetDownloadMonitor *_monitor;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000001000a7c8c
- (void).cxx_destruct;	// IMP=0x00000001000a81f8
@property(retain, nonatomic) CSTrialAssetDownloadMonitor *monitor; // @synthesize monitor=_monitor;
- (void)trialAssetDownloadMonitorDelegate:(id)arg1 didInstallNewAsset:(_Bool)arg2 assetType:(unsigned long long)arg3;	// IMP=0x00000001000a8138
- (void)_notifyObserver:(id)arg1;	// IMP=0x00000001000a80c8
- (void)_didInstalledNewAdBlockerAsset;	// IMP=0x00000001000a7fc8
- (void)_stopMonitoring;	// IMP=0x00000001000a7f00
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00000001000a7db0
- (const char *)_notificationKey;	// IMP=0x00000001000a7da4
- (id)init;	// IMP=0x00000001000a7cf8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

