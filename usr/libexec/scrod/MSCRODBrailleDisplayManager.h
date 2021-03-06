//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderOutput/SCROBrailleDisplayManager.h>

#import "RadiosPreferencesDelegate-Protocol.h"

@class RadiosPreferences;

@interface MSCRODBrailleDisplayManager : SCROBrailleDisplayManager <RadiosPreferencesDelegate>
{
    struct {
        unsigned int rootPort;
        struct IONotificationPort *notifyPortRef;
        unsigned int notifierObject;
    } _sleepWake;	// 224 = 0xe0
    int _notifyLockStateToken;	// 248 = 0xf8
    unsigned long long _blankScreenToken;	// 256 = 0x100
    _Bool _isScreenBlank;	// 264 = 0x108
    _Bool _airplaneMode;	// 265 = 0x109
    _Bool _isBrailleSystemSleeping;	// 266 = 0x10a
    RadiosPreferences *_radiosPrefs;	// 272 = 0x110
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000469c
+ (void)initialize;	// IMP=0x000000010000463c
+ (id)sharedManager;	// IMP=0x0000000100004630
- (void).cxx_destruct;	// IMP=0x0000000100008768
@property(nonatomic) _Bool isBrailleSystemSleeping; // @synthesize isBrailleSystemSleeping=_isBrailleSystemSleeping;
@property(retain, nonatomic) RadiosPreferences *radiosPrefs; // @synthesize radiosPrefs=_radiosPrefs;
@property(nonatomic) _Bool airplaneMode; // @synthesize airplaneMode=_airplaneMode;
- (id)brailleInputManager;	// IMP=0x00000001000086f0
- (id)newBrailleDisplayCommandDispatcher;	// IMP=0x00000001000086cc
- (void)airplaneModeChanged;	// IMP=0x00000001000085e4
- (void)_registerHasBlankedScreenNotification;	// IMP=0x000000010000830c
- (void)_handleSystemSleep;	// IMP=0x00000001000082f0
- (void)_delayedHandleSystemSleep;	// IMP=0x0000000100007f94
- (void)_wakeFromSleep;	// IMP=0x0000000100007f78
- (void)_delayedWakeFromSleep;	// IMP=0x0000000100007f5c
- (void)_reallyDelayedWakeFromSleep;	// IMP=0x0000000100007d78
- (_Bool)_hasUserInteractedWithDeviceRecently;	// IMP=0x0000000100007ca0
- (void)setLastUserInteractionTime:(double)arg1;	// IMP=0x0000000100007b04
- (unsigned int)_rootPowerPort;	// IMP=0x0000000100007af4
- (_Bool)_registerSleepNotifications;	// IMP=0x00000001000079b0
- (_Bool)isConfigured;	// IMP=0x0000000100007880
- (void)_saveBluetoothDisplayConfiguration:(id)arg1;	// IMP=0x0000000100007810
- (id)driverConfiguration;	// IMP=0x00000001000076d8
- (void)_removeBluetoothDriverWithIOElement:(id)arg1 removeFromPreferences:(_Bool)arg2;	// IMP=0x0000000100006c68
- (void)_removeBluetoothDriverWithAddress:(id)arg1;	// IMP=0x0000000100006be4
- (void)removeBluetoothDriverWithAddress:(id)arg1;	// IMP=0x0000000100006afc
- (void)_loadBluetoothDriverFromPreferences;	// IMP=0x00000001000062d4
- (void)_loadBluetoothDriverWithAddress:(id)arg1;	// IMP=0x00000001000053ac
- (void)loadBluetoothDriverWithAddress:(id)arg1;	// IMP=0x0000000100005390
- (id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;	// IMP=0x00000001000052c8
- (void)_delayedPowerChangedNotification:(id)arg1;	// IMP=0x000000010000509c
- (void)powerChangedNotification:(id)arg1;	// IMP=0x0000000100005080
- (void)_setupBluetooth;	// IMP=0x0000000100004fa0
- (void)_eventQueue_setShowEightDotBraille:(_Bool)arg1;	// IMP=0x0000000100004f28
- (void)_eventQueue_setContractionMode:(int)arg1;	// IMP=0x0000000100004eb0
- (void)_eventQueue_setMasterStatusCellIndex:(long long)arg1;	// IMP=0x0000000100004e10
- (void)_eventQueue_setVirtualStatusAlignment:(int)arg1;	// IMP=0x0000000100004d70
- (void)invalidate;	// IMP=0x0000000100004d24
- (void)_eventQueue_begin;	// IMP=0x0000000100004c10
- (void)handleSettingsChange:(id)arg1;	// IMP=0x0000000100004b04
- (id)init;	// IMP=0x00000001000046e4

@end

