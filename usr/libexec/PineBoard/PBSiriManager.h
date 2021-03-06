//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"
#import "PBOpenAppTransitionerObserver-Protocol.h"
#import "PBPowerManagerObserver-Protocol.h"
#import "PBScreenSaverManagerObserver-Protocol.h"
#import "PBSiriScreenActionManagerDelegate-Protocol.h"
#import "PBSystemOverlayControllerDelegate-Protocol.h"
#import "PBSystemOverlayUIProvider-Protocol.h"
#import "PBSystemUIManaging-Protocol.h"
#import "SiriPresentationPineBoardMainScreenViewControllerDelegate-Protocol.h"

@class NSHashTable, NSString, PBSceneDeferralTargetAssertion, PBSiriContentPresentingViewController, PBSiriScreenActionContextProvider, PBSystemOverlayController, SiriBluetoothKeyboardActivationSource, SiriPresentationPineBoardMainScreenViewController, SiriTVActivationSource, SiriTestingSource, UIApplicationSceneDeactivationAssertion;
@protocol SiriAssertion;

@interface PBSiriManager : NSObject <PBOpenAppTransitionerObserver, PBPowerManagerObserver, PBSiriScreenActionManagerDelegate, PBScreenSaverManagerObserver, PBSystemOverlayControllerDelegate, PBSystemOverlayUIProvider, SiriPresentationPineBoardMainScreenViewControllerDelegate, PBInstanceDependable, PBSystemUIManaging>
{
    _Bool _presenting;	// 8 = 0x8
    _Bool _siriEnabled;	// 9 = 0x9
    _Bool _shouldPreferDictation;	// 10 = 0xa
    long long _visibleState;	// 16 = 0x10
    SiriPresentationPineBoardMainScreenViewController *_mainScreenSiriPresentation;	// 24 = 0x18
    PBSiriScreenActionContextProvider *_onScreenActionContextProvider;	// 32 = 0x20
    PBSystemOverlayController *_overlayController;	// 40 = 0x28
    PBSiriContentPresentingViewController *_siriContainerViewController;	// 48 = 0x30
    NSString *_unhideBundleIdentifier;	// 56 = 0x38
    UIApplicationSceneDeactivationAssertion *_fullscreenSiriSceneDeactivationAssertion;	// 64 = 0x40
    SiriTVActivationSource *_siriActivationSource;	// 72 = 0x48
    SiriBluetoothKeyboardActivationSource *_keyboardActivationSource;	// 80 = 0x50
    id <SiriAssertion> _siriPreheatAssertion;	// 88 = 0x58
    id <SiriAssertion> _siriButtonDownAssertion;	// 96 = 0x60
    id <SiriAssertion> _siriActivationAssertion;	// 104 = 0x68
    SiriTestingSource *_testingSource;	// 112 = 0x70
    PBSceneDeferralTargetAssertion *_deferralTargetAssertion;	// 120 = 0x78
    NSHashTable *_observers;	// 128 = 0x80
}

+ (_Bool)_isSiriEnabled;	// IMP=0x0000000100227b74
+ (id)sharedInstance;	// IMP=0x00000001002225fc
+ (id)dependencyDescription;	// IMP=0x00000001002223e4
- (void).cxx_destruct;	// IMP=0x000000010022961c
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) PBSceneDeferralTargetAssertion *deferralTargetAssertion; // @synthesize deferralTargetAssertion=_deferralTargetAssertion;
@property(retain, nonatomic) SiriTestingSource *testingSource; // @synthesize testingSource=_testingSource;
@property(retain, nonatomic) id <SiriAssertion> siriActivationAssertion; // @synthesize siriActivationAssertion=_siriActivationAssertion;
@property(retain, nonatomic) id <SiriAssertion> siriButtonDownAssertion; // @synthesize siriButtonDownAssertion=_siriButtonDownAssertion;
@property(retain, nonatomic) id <SiriAssertion> siriPreheatAssertion; // @synthesize siriPreheatAssertion=_siriPreheatAssertion;
@property(retain, nonatomic) SiriBluetoothKeyboardActivationSource *keyboardActivationSource; // @synthesize keyboardActivationSource=_keyboardActivationSource;
@property(retain, nonatomic) SiriTVActivationSource *siriActivationSource; // @synthesize siriActivationSource=_siriActivationSource;
@property(retain, nonatomic) UIApplicationSceneDeactivationAssertion *fullscreenSiriSceneDeactivationAssertion; // @synthesize fullscreenSiriSceneDeactivationAssertion=_fullscreenSiriSceneDeactivationAssertion;
@property(retain, nonatomic) NSString *unhideBundleIdentifier; // @synthesize unhideBundleIdentifier=_unhideBundleIdentifier;
@property(readonly, nonatomic) PBSiriContentPresentingViewController *siriContainerViewController; // @synthesize siriContainerViewController=_siriContainerViewController;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(nonatomic) _Bool shouldPreferDictation; // @synthesize shouldPreferDictation=_shouldPreferDictation;
@property(retain, nonatomic) PBSiriScreenActionContextProvider *onScreenActionContextProvider; // @synthesize onScreenActionContextProvider=_onScreenActionContextProvider;
@property(retain, nonatomic) SiriPresentationPineBoardMainScreenViewController *mainScreenSiriPresentation; // @synthesize mainScreenSiriPresentation=_mainScreenSiriPresentation;
@property(nonatomic, getter=isSiriEnabled) _Bool siriEnabled; // @synthesize siriEnabled=_siriEnabled;
@property(nonatomic) long long visibleState; // @synthesize visibleState=_visibleState;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)_notifyObserversSiriWindowDidUnhide;	// IMP=0x0000000100229084
- (void)_notifyObserversSiriWindowDidHide;	// IMP=0x0000000100228f0c
- (void)_notifyObserversVisibleStateDidChange:(long long)arg1;	// IMP=0x0000000100228d8c
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100228d28
- (void)addObserver:(id)arg1;	// IMP=0x0000000100228cc4
- (void)_launchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 launchOverSiri:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010022835c
- (void)_stopProvidingScreenActionContext;	// IMP=0x00000001002282a4
- (void)_startProvidingScreenActionContext;	// IMP=0x0000000100228050
- (void)_updateShouldPreferDictation;	// IMP=0x0000000100227d94
- (void)appTransitioner:(id)arg1 willStartAnimationForAppTransition:(id)arg2;	// IMP=0x00000001002279f0
- (_Bool)siriScreenActionManagerIsSiriContentBeingDisplayed:(id)arg1;	// IMP=0x0000000100227984
- (void)powerManagerDidWakeSystem:(id)arg1;	// IMP=0x0000000100227924
- (void)screenSaverManagerWillDismissScreenSaver:(id)arg1;	// IMP=0x00000001002278c8
- (void)screenSaverManagerDidPresentScreenSaver:(id)arg1;	// IMP=0x000000010022786c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010022763c
- (void)_handleAssistantPreferencesDidChangeNotification:(id)arg1;	// IMP=0x00000001002275b0
- (void)siriPresentationDidDeactivateScene:(id)arg1;	// IMP=0x000000010022741c
- (void)siriPresentation:(id)arg1 sceneDidActivateWithIdentifier:(id)arg2;	// IMP=0x00000001002271e4
- (void)siriPresentation:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;	// IMP=0x0000000100227038
- (void)siriPresentation:(id)arg1 requestsPunchout:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100226a5c
- (void)siriPresentation:(id)arg1 isEnabledDidChange:(_Bool)arg2;	// IMP=0x000000010022694c
- (void)siriPresentation:(id)arg1 requestsDismissalWithOptions:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100226364
- (void)siriPresentation:(id)arg1 requestsPresentationWithOptions:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100225fe4
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100225f48
- (unsigned long long)_remoteTypeFromContext:(id)arg1;	// IMP=0x0000000100225df4
- (_Bool)showAssistantIfNecessaryAfterApplication:(id)arg1;	// IMP=0x0000000100225d3c
- (void)hideAssistantViewForApplication:(id)arg1;	// IMP=0x0000000100225cd0
- (_Bool)_dismissAssistantViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100225858
- (_Bool)dismissAssistant;	// IMP=0x0000000100225788
- (void)_unhideSiriWindow;	// IMP=0x000000010022566c
- (void)_hideSiriWindow;	// IMP=0x000000010022542c
- (void)_presentAssistantViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010022522c
- (void)setNextAssistantRecognitionStrings:(id)arg1;	// IMP=0x00000001002251c8
- (void)setNextVoiceRecognitionAudioInputPaths:(id)arg1;	// IMP=0x0000000100225164
@property(readonly, nonatomic, getter=isListening) _Bool listening;
- (_Bool)stopSiriWithContext:(id)arg1;	// IMP=0x0000000100224854
- (_Bool)startSiriWithContext:(id)arg1;	// IMP=0x0000000100223fb4
- (void)_cancelSiriActivation;	// IMP=0x0000000100223ee0
- (void)_stopSiriActivation;	// IMP=0x0000000100223dfc
- (void)_cancelPreheating;	// IMP=0x0000000100223d28
- (void)cancelActivation;	// IMP=0x0000000100223cf8
- (_Bool)presentSiriAccessibilityUI;	// IMP=0x0000000100223b80
- (_Bool)prepareSiriWithContext:(id)arg1;	// IMP=0x0000000100223814
- (_Bool)activateSiriWithContext:(id)arg1;	// IMP=0x00000001002232d0
- (void)preheatIfNecessary;	// IMP=0x0000000100223030
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
- (void)setup;	// IMP=0x0000000100222c78
- (void)dealloc;	// IMP=0x0000000100222b90
- (id)_init;	// IMP=0x0000000100222754
- (id)init;	// IMP=0x0000000100222704

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

