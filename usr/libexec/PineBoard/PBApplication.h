//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISystemShellApplication.h>

#import "PBAppInfoControllerDelegate-Protocol.h"
#import "PBPowerManagerObserver-Protocol.h"
#import "PBSBulletinServiceDelegate-Protocol.h"
#import "PBSceneManagerObserver-Protocol.h"

@class NSMutableArray, NSString, NSTimer, PBAppInfoController, PBBulletinService, PBDialogHiddenAssertion, PBProfileServiceDelegate, PBSBulletin;

@interface PBApplication : UISystemShellApplication <PBAppInfoControllerDelegate, PBSBulletinServiceDelegate, PBSceneManagerObserver, PBPowerManagerObserver>
{
    PBBulletinService *_bulletinService;	// 8 = 0x8
    PBSBulletin *_networkBulletin;	// 16 = 0x10
    PBSBulletin *_sysdiagnoseBulletin;	// 24 = 0x18
    PBSBulletin *_screenshotCapturedBulletin;	// 32 = 0x20
    _Bool _needsAdjustToDisplayChange;	// 40 = 0x28
    _Bool _inhibitForThermal;	// 41 = 0x29
    _Bool _inhibitForOSUpdate;	// 42 = 0x2a
    _Bool _processingSysdiagnoseViaChord;	// 43 = 0x2b
    NSMutableArray *_enqueuedEvents;	// 48 = 0x30
    _Bool _userInterfaceLayoutDirectionIsValid;	// 56 = 0x38
    long long _userInterfaceLayoutDirection;	// 64 = 0x40
    _Bool _airPlayActive;	// 72 = 0x48
    NSTimer *_suppressWakeForHIDEventsTimer;	// 80 = 0x50
    PBAppInfoController *_appInfoController;	// 88 = 0x58
    PBProfileServiceDelegate *_profileServiceDelegate;	// 96 = 0x60
    PBDialogHiddenAssertion *_singleAppModeDialogAssertion;	// 104 = 0x68
}

+ (id)sharedAppInfoStore;	// IMP=0x00000001000368e8
+ (id)sharedApplicationLibrary;	// IMP=0x0000000100036768
+ (id)sharedApplication;	// IMP=0x0000000100034824
- (void).cxx_destruct;	// IMP=0x00000001000406c4
@property(readonly, nonatomic) PBDialogHiddenAssertion *singleAppModeDialogAssertion; // @synthesize singleAppModeDialogAssertion=_singleAppModeDialogAssertion;
@property(retain, nonatomic) PBProfileServiceDelegate *profileServiceDelegate; // @synthesize profileServiceDelegate=_profileServiceDelegate;
@property(readonly, nonatomic) PBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(retain, nonatomic) NSTimer *suppressWakeForHIDEventsTimer; // @synthesize suppressWakeForHIDEventsTimer=_suppressWakeForHIDEventsTimer;
@property(nonatomic) _Bool airPlayActive; // @synthesize airPlayActive=_airPlayActive;
- (void)activateAppSwitcher;	// IMP=0x00000001000404f4
- (id)appSwitcherWindow;	// IMP=0x00000001000403dc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100040170
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x0000000100040034
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x000000010003f358
- (void)sceneManager:(id)arg1 didChangeCurrentApplicationFromSceneHandle:(id)arg2 toSceneHandle:(id)arg3;	// IMP=0x000000010003f2a8
- (void)_enhanceLogging:(unsigned int)arg1;	// IMP=0x000000010003e9d0
- (void)_checkForQuestionableBootArgs;	// IMP=0x000000010003e7d0
- (void)_startUpAndRunningTimer;	// IMP=0x000000010003e728
- (id)_sanitizeAppIdentifierHistory:(id)arg1;	// IMP=0x000000010003e4d8
- (void)_activateScreenSaverFromUserAction:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003e3f8
- (void)_saveRecentApplicationBundleIdentifiers;	// IMP=0x000000010003e34c
- (void)_startExternalControlManagement;	// IMP=0x000000010003e0dc
- (void)userActivityTriggeredForReason:(id)arg1;	// IMP=0x000000010003e030
- (void)sendEventData:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010003de4c
- (void)sendMenuButtonEventRequestedByClient:(id)arg1;	// IMP=0x000000010003dd2c
- (void)deactivateScreenSaverRequestedByClient:(id)arg1;	// IMP=0x000000010003db08
- (void)activateScreenSaverRequestedByClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003d9cc
- (void)activateScreenSaverRequestedByClient:(id)arg1;	// IMP=0x000000010003d968
- (void)noteUserPresenceDetected;	// IMP=0x000000010003d764
- (void)rebootRequestedByClient:(id)arg1;	// IMP=0x000000010003d630
- (void)relaunchRequestedByClient:(id)arg1;	// IMP=0x000000010003d4fc
- (void)relaunchBackboarddRequestedByClient:(id)arg1;	// IMP=0x000000010003d3d8
- (void)wakeRequestedByClient:(id)arg1 forReason:(id)arg2;	// IMP=0x000000010003cf78
- (void)sleepRequestedByClient:(id)arg1 forReason:(id)arg2;	// IMP=0x000000010003cae8
- (void)client:(id)arg1 setSleepTimeout:(double)arg2;	// IMP=0x000000010003c9a8
- (void)powerManager:(id)arg1 willWakeSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003c808
- (void)powerManager:(id)arg1 willSleepSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003c4c8
- (void)_bluetoothRemotePowerSourceLimitedSourceNotification:(id)arg1;	// IMP=0x000000010003c3ec
- (void)sendHIDButtonEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 type:(unsigned long long)arg3 senderID:(unsigned long long)arg4 toApplication:(id)arg5;	// IMP=0x000000010003c0a8
- (void)forwardHIDButtonEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 type:(unsigned long long)arg3 senderID:(unsigned long long)arg4;	// IMP=0x000000010003bed0
- (void)_blackScreenRecoveryModeNotification:(id)arg1;	// IMP=0x000000010003b718
- (void)_internetAvailabilityDidChangeNotification;	// IMP=0x000000010003b414
- (void)_handleCurrentApplicationDidChange:(id)arg1;	// IMP=0x000000010003b270
- (void)resetIdleTimerAndUndim;	// IMP=0x000000010003b234
- (void)languageDidChange;	// IMP=0x000000010003b1c8
- (_Bool)_isSystemEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010003b114
- (_Bool)_isButtonDownEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010003b0bc
@property(readonly, copy, nonatomic) NSString *kioskAppBundleIdentifier;
- (_Bool)activityInhibited;	// IMP=0x000000010003afbc
- (void)resumeActivityAfterOSUpdate;	// IMP=0x000000010003af74
- (void)stopAllActivityForOSUpdate;	// IMP=0x000000010003af2c
- (void)resumeActivityAfterThermal;	// IMP=0x000000010003aee4
- (void)stopAllActivityForThermal;	// IMP=0x000000010003ae9c
- (void)_resumeAllActivityCommon:(const char *)arg1 flag:(_Bool *)arg2;	// IMP=0x000000010003acb0
- (void)_stopAllActivityCommon:(const char *)arg1 flag:(_Bool *)arg2;	// IMP=0x000000010003aab0
- (_Bool)_validatePresses:(id)arg1 forWindow:(id)arg2;	// IMP=0x000000010003a8a4
- (void)sendEvent:(id)arg1;	// IMP=0x000000010003a7c0
- (void)_finishButtonEvent:(id)arg1;	// IMP=0x000000010003a734
- (void)_removeEnqueuedEvent:(id)arg1;	// IMP=0x000000010003a68c
- (void)_handleKeyUIEvent:(id)arg1;	// IMP=0x000000010003a1b0
- (void)_logButtonEventTiming:(id)arg1;	// IMP=0x00000001000398e8
- (_Bool)_prepareButtonEvent:(id)arg1 withPressInfo:(id)arg2;	// IMP=0x00000001000391e8
- (_Bool)_shouldTriggerExternalControlActionForEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010003911c
- (void)_handleHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100038e20
- (_Bool)__handleHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010003868c
- (_Bool)_handlePhysicalButtonEvent:(id)arg1;	// IMP=0x00000001000381fc
- (void)_processChordsWithPressesEvent:(id)arg1;	// IMP=0x0000000100037710
- (_Bool)_handleSystemPressHidEvent:(struct __IOHIDEvent *)arg1 withType:(long long)arg2;	// IMP=0x0000000100036e10
- (id)keyCommands;	// IMP=0x0000000100036bd4
- (void)resignActive;	// IMP=0x0000000100036bc0
- (_Bool)_accessibilityIsSystemAppServer;	// IMP=0x0000000100036b88
- (long long)userInterfaceLayoutDirection;	// IMP=0x0000000100036a9c
- (id)bulletinService;	// IMP=0x00000001000366bc
- (void)dealloc;	// IMP=0x0000000100036594
- (void)_showScreenshotCapturedIndication;	// IMP=0x0000000100036084
- (void)_hideSysdiagnoseIndication;	// IMP=0x0000000100035f2c
- (void)_showSysdiagnoseIndication;	// IMP=0x0000000100035ca4
- (void)_showStackShotIndication;	// IMP=0x0000000100035b10
- (void)finishSystemAppLaunch;	// IMP=0x0000000100035100
- (_Bool)disablesFrontBoardImplicitWindowScenes;	// IMP=0x00000001000350e4
- (id)init;	// IMP=0x000000010003486c
- (void)failedTest:(id)arg1;	// IMP=0x000000010013b10c
- (void)failedTest:(id)arg1 withFailure:(id)arg2;	// IMP=0x000000010013b058
- (void)_dismissAssistant;	// IMP=0x000000010013b000
- (void)_runSiriBringUpTest:(id)arg1 testOptions:(id)arg2;	// IMP=0x000000010013ae1c
- (void)_startResumeTestNamed:(id)arg1 options:(id)arg2;	// IMP=0x000000010013ad50
- (void)_startLaunchTestNamed:(id)arg1 options:(id)arg2;	// IMP=0x000000010013a854
- (void)_retryLaunchTestWithOptions:(id)arg1;	// IMP=0x000000010013a6c4
- (void)_activateApplication:(id)arg1 suspended:(_Bool)arg2 forTest:(id)arg3;	// IMP=0x000000010013a548
- (void)_markUserLaunchInitiationTimeForTest:(id)arg1;	// IMP=0x000000010013a448
- (_Bool)_isAppExecutableRunning:(id)arg1;	// IMP=0x000000010013a390
- (_Bool)runTest:(id)arg1 options:(id)arg2;	// IMP=0x000000010013a184

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

