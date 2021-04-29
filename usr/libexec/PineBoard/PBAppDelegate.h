//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "MCProfileConnectionObserver-Protocol.h"
#import "PBLanguageChangeObserverDelegate-Protocol.h"
#import "PBMediaRemoteObserverDelegate-Protocol.h"
#import "PBPowerManagerObserver-Protocol.h"
#import "PBSBulletinServiceDelegate-Protocol.h"
#import "PBSceneManagerObserver-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "_UIApplicationInitializationContextFactory-Protocol.h"

@class NSString, PBAppInfoController, PBBulletinService, PBConstantAudioOutputController, PBLanguageChangeObserver, PBSBulletin, PBSafeAreaWindow, PBUserNotificationHandler, TVSBackgroundTask, UIWindow;

@interface PBAppDelegate : UIResponder <PBMediaRemoteObserverDelegate, PBLanguageChangeObserverDelegate, MCProfileConnectionObserver, _UIApplicationInitializationContextFactory, PBSceneManagerObserver, PBPowerManagerObserver, PBSBulletinServiceDelegate, UIApplicationDelegate>
{
    PBUserNotificationHandler *_userNotificationHandler;	// 8 = 0x8
    PBSafeAreaWindow *_safeAreaWindow;	// 16 = 0x10
    _Bool _tooHot;	// 24 = 0x18
    double _homeLongPressStartTime;	// 32 = 0x20
    _Bool _appLaunchDisabled;	// 40 = 0x28
    _Bool _awaitingSiriOptInOfferResponse;	// 41 = 0x29
    _Bool __kioskRelaunchDisabled;	// 42 = 0x2a
    TVSBackgroundTask *_programmingGuideBackgroundTask;	// 48 = 0x30
    id _buddyPrefsObservingToken;	// 56 = 0x38
    PBLanguageChangeObserver *_languageChangeObserver;	// 64 = 0x40
    PBAppInfoController *_appInfoController;	// 72 = 0x48
    PBConstantAudioOutputController *_constantAudioOutputController;	// 80 = 0x50
    PBBulletinService *_bulletinService;	// 88 = 0x58
    PBSBulletin *_powerOffBulletin;	// 96 = 0x60
    NSString *_initialLaunchApplicationBundleID;	// 104 = 0x68
}

+ (id)_newApplicationInitializationContext;	// IMP=0x00000001001e6bf4
+ (id)_defaultSceneIdentity;	// IMP=0x00000001001e6b4c
+ (id)sharedApplicationDelegate;	// IMP=0x00000001001e6ae0
- (void).cxx_destruct;	// IMP=0x00000001001fb858
@property(readonly, nonatomic) NSString *initialLaunchApplicationBundleID; // @synthesize initialLaunchApplicationBundleID=_initialLaunchApplicationBundleID;
@property(retain, nonatomic) PBSBulletin *powerOffBulletin; // @synthesize powerOffBulletin=_powerOffBulletin;
@property(retain, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
@property(retain, nonatomic) PBConstantAudioOutputController *constantAudioOutputController; // @synthesize constantAudioOutputController=_constantAudioOutputController;
@property(readonly, nonatomic) PBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(nonatomic) _Bool _kioskRelaunchDisabled; // @synthesize _kioskRelaunchDisabled=__kioskRelaunchDisabled;
@property(nonatomic) _Bool awaitingSiriOptInOfferResponse; // @synthesize awaitingSiriOptInOfferResponse=_awaitingSiriOptInOfferResponse;
@property(retain, nonatomic) PBLanguageChangeObserver *languageChangeObserver; // @synthesize languageChangeObserver=_languageChangeObserver;
@property(retain, nonatomic) id buddyPrefsObservingToken; // @synthesize buddyPrefsObservingToken=_buddyPrefsObservingToken;
@property(retain, nonatomic) TVSBackgroundTask *programmingGuideBackgroundTask; // @synthesize programmingGuideBackgroundTask=_programmingGuideBackgroundTask;
@property(nonatomic) _Bool appLaunchDisabled; // @synthesize appLaunchDisabled=_appLaunchDisabled;
- (_Bool)_applicationForPIDIsPlaying:(int)arg1;	// IMP=0x00000001001fb3cc
- (_Bool)_requestSleepForReason:(id)arg1;	// IMP=0x00000001001fb1e4
- (_Bool)_requestWakeForReason:(id)arg1;	// IMP=0x00000001001fafd4
- (void)stopSiriWithContext:(id)arg1;	// IMP=0x00000001001fad5c
- (void)startSiriWithContext:(id)arg1;	// IMP=0x00000001001fa8e0
- (void)activateSiriWithContext:(id)arg1;	// IMP=0x00000001001fa4ac
- (void)_setLateNightModeEnabled:(_Bool)arg1;	// IMP=0x00000001001fa3b0
- (void)_handleDisableLateNightModeNotification:(id)arg1;	// IMP=0x00000001001fa34c
- (void)_handleEnableLateNightModeNotification:(id)arg1;	// IMP=0x00000001001fa2e8
- (void)_performObliterationIfNeeded;	// IMP=0x00000001001f9ab0
- (_Bool)_wakeDeviceForSiriInteractionWithContext:(id)arg1;	// IMP=0x00000001001f9910
- (void)powerManager:(id)arg1 willWakeSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f9880
- (void)powerManager:(id)arg1 willSleepSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f97b8
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x00000001001f9710
- (void)_showPowerOffBulletin;	// IMP=0x00000001001f953c
- (void)_updateEventMaskingWindow;	// IMP=0x00000001001f9468
- (_Bool)_keyboardFocusedInApp:(id)arg1;	// IMP=0x00000001001f92d0
- (_Bool)_shouldShowSiri;	// IMP=0x00000001001f8c68
- (void)_setupWebinspector;	// IMP=0x00000001001f8bf4
- (void)_startObservingPurpleBuddyPrefs;	// IMP=0x00000001001f8ae4
- (void)_resumeActivity;	// IMP=0x00000001001f899c
- (void)_stopAllActivity;	// IMP=0x00000001001f857c
- (void)_pausePlayback;	// IMP=0x00000001001f8548
- (void)_handleThermalNotification;	// IMP=0x00000001001f7fe4
- (void)_registerForThermalNotifications;	// IMP=0x00000001001f7e34
- (void)triggerThermalNotification;	// IMP=0x00000001001f7e04
- (void)_presentSiriOptInDialogWithViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f7b14
- (_Bool)_shouldOfferEnableDataSharing;	// IMP=0x00000001001f7a8c
- (_Bool)_suggestUserEnableDataSharing;	// IMP=0x00000001001f7608
- (_Bool)_suggestUserEnableDictation;	// IMP=0x00000001001f70e8
- (_Bool)_suggestUserEnableAssistantAndDictation;	// IMP=0x00000001001f6d38
- (void)_launchAppSwitcher;	// IMP=0x00000001001f6850
- (void)_launchTVSettingsWithOpenURL:(id)arg1;	// IMP=0x00000001001f6720
- (_Bool)_launchConferenceRoomDisplayAppWithReason:(unsigned long long)arg1;	// IMP=0x00000001001f6638
- (_Bool)_isPurpleBuddyActiveScene;	// IMP=0x00000001001f6588
- (void)_handlePurpleBuddyExit;	// IMP=0x00000001001f6454
- (void)_launchPurpleBuddyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f6090
- (void)_launchPurpleBuddy;	// IMP=0x00000001001f6058
- (_Bool)_launchTVWatchList;	// IMP=0x00000001001f5b64
- (_Bool)_launchTVSearch;	// IMP=0x00000001001f598c
- (void)_startSteadyStateServices;	// IMP=0x00000001001f5790
- (void)presentNowPlayingWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f5684
- (void)presentSystemRoutingUIWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f54f0
- (void)launchPostSetupApp;	// IMP=0x00000001001f4e84
- (void)launchPostWakeDefaultApp;	// IMP=0x00000001001f4e20
- (void)_handleKioskAppLaunchFailure;	// IMP=0x00000001001f4da8
- (void)openKioskApplicationWithReason:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f44c4
- (void)enableKioskRelaunchForPPT;	// IMP=0x00000001001f4498
- (void)disableKioskRelaunchForPPT;	// IMP=0x00000001001f446c
- (void)_sendActionOrShowUnconfiguredAlertForAction:(long long)arg1;	// IMP=0x00000001001f3e90
- (void)_createInitialAppScene;	// IMP=0x00000001001f38f8
- (void)_startBulletinBoardServer;	// IMP=0x00000001001f3880
- (void)_handleStoreAccountChangedNotification;	// IMP=0x00000001001f376c
- (void)_resetProgrammingGuideRefreshTaskWithTimeIntervalInSeconds:(double)arg1;	// IMP=0x00000001001f3608
- (void)_updateProgrammingGuide;	// IMP=0x00000001001f33f8
- (void)_updateWhatsNewCheckTimeInterval;	// IMP=0x00000001001f323c
- (void)_startStoreURLBagMonitoring;	// IMP=0x00000001001f3074
- (void)_startSoftwareUpdateService;	// IMP=0x00000001001f3020
- (void)_handleStoreURLBagDidLoadNotification;	// IMP=0x00000001001f2f20
- (void)observer:(id)arg1 didObserveLanguageChange:(_Bool)arg2 localeChange:(_Bool)arg3 source:(long long)arg4;	// IMP=0x00000001001f2724
- (void)_setupLanguageChangeObserving;	// IMP=0x00000001001f2648
- (void)mediaRemoteObserverNowPlayingInfoDidChange:(id)arg1 nowPlayingInfo:(id)arg2;	// IMP=0x00000001001f2528
- (void)mediaRemoteObserverNowPlayingAppDidChange:(id)arg1;	// IMP=0x00000001001f2364
- (void)mediaRemoteObserverIsPlayingDidChange:(id)arg1;	// IMP=0x00000001001f20b4
- (_Bool)mediaRemoteObserverShouldShowTrackChangeBulletin:(id)arg1;	// IMP=0x00000001001f1dcc
- (void)mediaRemoteObserverRemotePlaybackStateDidChange:(id)arg1;	// IMP=0x00000001001f1c98
- (_Bool)_wouldExpectPlayPauseButtonUpShouldPause;	// IMP=0x00000001001f1c28
- (_Bool)_wouldExpectPlayPauseButtonDownShouldPause;	// IMP=0x00000001001f1bc0
- (_Bool)_wouldExpectPlayPauseButtonShouldPause:(_Bool *)arg1;	// IMP=0x00000001001f18b8
- (void)handleBlackScreenRecoveryEvent:(id)arg1;	// IMP=0x00000001001f16e0
- (void)handleScreenshotEvent:(id)arg1;	// IMP=0x00000001001f153c
- (void)handleSysdiagnoseEvent:(id)arg1;	// IMP=0x00000001001f13a4
- (void)handleChannelGuideLongPressEvent:(id)arg1;	// IMP=0x00000001001f12f8
- (void)handleChannelGuideTapEvent:(id)arg1;	// IMP=0x00000001001f1258
- (void)handleExposeAllTapEvent;	// IMP=0x00000001001f1168
- (void)handleTVLongPressEvent:(id)arg1;	// IMP=0x00000001001f0ccc
- (void)handleTVTripleTapEvent;	// IMP=0x00000001001f0b2c
- (void)handleTVDoubleTapEvent;	// IMP=0x00000001001f04bc
- (void)handleTVTapEventAsThirdTapEventInAppSwitcher;	// IMP=0x00000001001f02b4
- (void)_handleTVTapEventWithHIDRef:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001001ef52c
- (void)handleTVTapEvent:(id)arg1;	// IMP=0x00000001001ef4a8
- (void)handlePowerOffTapEvent:(id)arg1;	// IMP=0x00000001001ef338
- (void)handlePowerOnTapEvent:(id)arg1;	// IMP=0x00000001001ef204
- (void)handlePowerToggleTapEvent:(id)arg1;	// IMP=0x00000001001eeffc
- (void)handlePowerOffExternalEvent;	// IMP=0x00000001001eef00
- (void)handlePowerOnExternalEvent;	// IMP=0x00000001001eee04
- (void)handlePowerToggleExternalEvent:(id)arg1;	// IMP=0x00000001001eebfc
- (void)handleMuteTapEvent;	// IMP=0x00000001001eeaf4
- (void)handleVolumeDownLongPressEvent:(id)arg1;	// IMP=0x00000001001ee614
- (void)handleVolumeUpLongPressEvent:(id)arg1;	// IMP=0x00000001001ee134
- (void)handleFastForwardLongPressEvent:(id)arg1;	// IMP=0x00000001001edfd0
- (void)handleRewindLongPressEvent:(id)arg1;	// IMP=0x00000001001ede6c
- (void)handleSkipBackwardsRepeatingPressEvent:(id)arg1;	// IMP=0x00000001001edd40
- (void)handleSkipForwardsRepeatingPressEvent:(id)arg1;	// IMP=0x00000001001edc14
- (void)_handleSkipGestureRecognizer:(id)arg1 withCommand:(unsigned int)arg2 interval:(double)arg3;	// IMP=0x00000001001edaf4
- (void)handlePreviousTrackTapEvent;	// IMP=0x00000001001eda00
- (void)handleNextTrackTapEvent;	// IMP=0x00000001001ed90c
- (void)handleFastForwardTapEvent;	// IMP=0x00000001001ed778
- (void)handleRewindTapEvent;	// IMP=0x00000001001ed5e4
- (void)_changePlaybackRateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ed3f4
- (void)handleStopTapEvent;	// IMP=0x00000001001ed300
- (void)handlePauseTapEvent;	// IMP=0x00000001001ed20c
- (void)handlePlayTapEvent;	// IMP=0x00000001001ed114
- (void)handlePlayPauseTapEvent;	// IMP=0x00000001001ecffc
- (_Bool)shouldTogglePlayPauseOnButtonUp;	// IMP=0x00000001001eced4
- (_Bool)shouldTogglePlayPauseOnButtonDown;	// IMP=0x00000001001ecdac
- (void)_sendMediaRemoteCommand:(unsigned int)arg1;	// IMP=0x00000001001ecd6c
- (void)_sendMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2;	// IMP=0x00000001001ec9d4
- (_Bool)_shouldSendMediaRemoteCommand:(unsigned int)arg1;	// IMP=0x00000001001ec4f0
- (void)handleMicrophoneButtonDownEvent:(id)arg1;	// IMP=0x00000001001ec288
- (void)handleMicrophoneLongPressEvent:(id)arg1;	// IMP=0x00000001001ebf78
- (void)handleMicrophoneTapEvent:(id)arg1;	// IMP=0x00000001001ebd38
- (_Bool)handleUnhandledMenuEvent;	// IMP=0x00000001001eb860
- (void)_updateTripleTapMenu;	// IMP=0x00000001001eb708
- (void)handleQuadrupleMenuTapEvent;	// IMP=0x00000001001eb5f4
- (void)_handleMenuOrACHomeLongPressEventWithYesForMenuNoForACHome:(_Bool)arg1 recognizer:(id)arg2;	// IMP=0x00000001001eb28c
- (_Bool)_cleanUpUIStackAndLaunchKioskAppWithReason:(id)arg1;	// IMP=0x00000001001eac6c
- (void)handleACHomeLongPressEvent:(id)arg1;	// IMP=0x00000001001eab30
- (void)handleMenuLongPressEvent:(id)arg1;	// IMP=0x00000001001ea9f4
- (void)handleACHomeSingleTapEvent:(id)arg1;	// IMP=0x00000001001ea830
- (void)handleMenuSingleTapEvent:(id)arg1;	// IMP=0x00000001001ea670
- (_Bool)_handleMenuOrACHomeSingleTapEventWithYesForMenuNoForACHome:(_Bool)arg1 recognizer:(id)arg2;	// IMP=0x00000001001e9a94
- (void)handleACHomeDoubleTapEvent:(id)arg1;	// IMP=0x00000001001e98d0
- (void)handleMenuDoubleTapEvent;	// IMP=0x00000001001e97f0
- (void)handleMenuTripleTapEvent;	// IMP=0x00000001001e9580
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000001001e94c8
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x00000001001e9210
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e8fac
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000001001e71e0
- (void)tvs_bindAccessibilityMenuOptionsBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x00000001001e706c
- (id)AccessibilityMenuOptionsBinding;	// IMP=0x00000001001e6fb8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001001e6ec8
- (void)dealloc;	// IMP=0x00000001001e6e48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
