//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UninstallObserverProtocol-Protocol.h"

@class BKSApplicationStateMonitor, NSMutableArray, NSMutableDictionary, NSString, UninstallObserver, UserNotification;

@interface BTAppInteraction : NSObject <UninstallObserverProtocol>
{
    struct AppFrameworkListener *_listener;	// 8 = 0x8
    struct dispatch_queue_s *_queue;	// 16 = 0x10
    struct dispatch_queue_s *_loggingQueue;	// 24 = 0x18
    NSMutableDictionary *_applicationMap;	// 32 = 0x20
    BKSApplicationStateMonitor *_monitor;	// 40 = 0x28
    UninstallObserver *_uninstallObserver;	// 48 = 0x30
    UserNotification *_powerNotification;	// 56 = 0x38
    NSMutableArray *_launchNotifications;	// 64 = 0x40
    NSMutableArray *_pairingNotifications;	// 72 = 0x48
    NSMutableDictionary *_processAssertions;	// 80 = 0x50
    NSMutableDictionary *_urgentAssertions;	// 88 = 0x58
    struct dispatch_source_s *_assertionTimer;	// 96 = 0x60
    NSMutableDictionary *_pendingResurrection;	// 104 = 0x68
}

+ (id)getComponentNameFromProductID:(unsigned long long)arg1;	// IMP=0x00000001004022a8
+ (unsigned long long)getComponentIDFromProductID:(unsigned long long)arg1;	// IMP=0x0000000100402218
+ (id)getProductNameFromProductID:(unsigned long long)arg1;	// IMP=0x00000001004020e4
+ (id)instance;	// IMP=0x00000001003fa4b0
- (void).cxx_destruct;	// IMP=0x0000000100403d64
- (void)btControllerTapToRadar:(int)arg1 reason:(id)arg2 cid:(id)arg3 cname:(id)arg4 cvers:(id)arg5;	// IMP=0x000000010040378c
- (_Bool)uploadBinaryFilesToCrashReporterServer:(id)arg1 fileLocationURL:(id)arg2;	// IMP=0x00000001004036e8
- (void)openTapToRadarWithAccessoryLogs:(id)arg1 isCrash:(_Bool)arg2 pid:(unsigned long long)arg3;	// IMP=0x0000000100402f8c
- (void)showFoundAccessoryLogAlert:(id)arg1 isCrash:(_Bool)arg2 pid:(unsigned long long)arg3 accessoryName:(id)arg4;	// IMP=0x0000000100402a54
- (void)showFoundAccessoryCrashAlert:(CDStruct_5cfa2073 *)arg1 productID:(unsigned long long)arg2 accessoryName:(id)arg3 firmwareVersion:(id)arg4;	// IMP=0x0000000100402338
- (void)printDebug;	// IMP=0x0000000100401dc0
- (void)pairingAlertCallback:(struct __CFUserNotification *)arg1 flags:(unsigned long long)arg2;	// IMP=0x00000001004017b8
- (void)cancelPairingAlert:(id)arg1;	// IMP=0x00000001004014c0
- (void)showPairingAlert:(id)arg1 type:(int)arg2 passkey:(unsigned long long)arg3;	// IMP=0x0000000100400524
- (void)appLaunchCallback:(struct __CFUserNotification *)arg1 flags:(unsigned long long)arg2;	// IMP=0x00000001003ffe38
- (void)cancelAppLaunchAlert:(id)arg1;	// IMP=0x00000001003ffc80
- (void)showAppLaunchAlert:(id)arg1 device:(id)arg2 type:(int)arg3;	// IMP=0x00000001003ff34c
- (void)powerAlertCallback:(struct __CFUserNotification *)arg1 flags:(unsigned long long)arg2;	// IMP=0x00000001003ff11c
- (void)showPowerAlert:(id)arg1 forBlacklistMode:(_Bool)arg2 validateBundle:(_Bool)arg3;	// IMP=0x00000001003fea78
- (void)disableHIP;	// IMP=0x00000001003fe9b0
- (_Bool)isPrivilegedBundleID:(id)arg1;	// IMP=0x00000001003fe92c
- (void)assertionTimerFired;	// IMP=0x00000001003fe4dc
- (void)invalidateAssertionTimer;	// IMP=0x00000001003fe45c
- (void)startAssertionTimer;	// IMP=0x00000001003fe354
- (void)assertionInvalidationCallback:(id)arg1;	// IMP=0x00000001003fe12c
- (void)urgentAssertionInvalidationCallback:(id)arg1;	// IMP=0x00000001003fdfbc
- (void)createAssertionForBundleID:(id)arg1 duration:(unsigned long long)arg2 isUrgent:(_Bool)arg3 withPid:(int)arg4;	// IMP=0x00000001003fdac8
- (void)takeAssertionForProcess:(id)arg1 duration:(unsigned long long)arg2 isUrgent:(_Bool)arg3;	// IMP=0x00000001003fd63c
- (_Bool)isBackgroundingSupported:(id)arg1 central:(_Bool)arg2;	// IMP=0x00000001003fd4d4
- (void)applicationStateChanged:(id)arg1;	// IMP=0x00000001003fc75c
- (unsigned char)applicationStateForProcess:(id)arg1;	// IMP=0x00000001003fc56c
- (void)setPeripheralBackgroundingSupported:(id)arg1;	// IMP=0x00000001003fc3dc
- (void)setCentralBackgroundingSupported:(id)arg1;	// IMP=0x00000001003fc24c
- (void)updateApplicationState:(int)arg1;	// IMP=0x00000001003fc13c
- (unsigned char)translateApplicationState:(unsigned int)arg1;	// IMP=0x00000001003fc104
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x00000001003fbcdc
- (void)openBundle:(id)arg1 options:(id)arg2 attempt:(int)arg3;	// IMP=0x00000001003fb6c8
- (void)openBundle:(id)arg1 options:(id)arg2;	// IMP=0x00000001003fb6a8
- (void)launchApplication:(id)arg1 restoringCentrals:(id)arg2 peripherals:(id)arg3;	// IMP=0x00000001003fb25c
- (int)pidForIdentifier:(id)arg1;	// IMP=0x00000001003fb0c4
- (void)unregisterApplication:(id)arg1;	// IMP=0x00000001003fac3c
- (void)registerApplication:(id)arg1 pid:(int)arg2;	// IMP=0x00000001003fa7b0
- (void)setListener:(struct AppFrameworkListener *)arg1;	// IMP=0x00000001003fa7a8
- (id)init;	// IMP=0x00000001003fa530

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

