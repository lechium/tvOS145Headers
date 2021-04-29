//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSWorkspaceDelegate-Protocol.h"
#import "PBAuxiliaryScenePresenting-Protocol.h"
#import "PBInstanceDependable-Protocol.h"
#import "PBOpenAppTransitionerObserver-Protocol.h"
#import "PBSiriManagerObserver-Protocol.h"
#import "PBSystemOverlayControllerDelegate-Protocol.h"
#import "PBSystemOverlayUIProvider-Protocol.h"
#import "PBSystemUIManaging-Protocol.h"

@class NSHashTable, NSString, PBDialogHiddenAssertion, PBSystemOverlayController, TVSPreferences;

@interface PBScreenSaverManager : NSObject <PBOpenAppTransitionerObserver, PBSiriManagerObserver, PBSystemOverlayControllerDelegate, PBSystemOverlayUIProvider, PBAuxiliaryScenePresenting, FBSWorkspaceDelegate, PBInstanceDependable, PBSystemUIManaging>
{
    _Bool _holdOffForMusicEnabled;	// 8 = 0x8
    double _screenSaverActivationDelayInMinutes;	// 16 = 0x10
    TVSPreferences *_screenSaverPrefs;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    PBSystemOverlayController *_overlayController;	// 40 = 0x28
    PBDialogHiddenAssertion *_hideDialogAssertion;	// 48 = 0x30
    CDUnknownBlockType _pendingCompletion;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x00000001000417e4
+ (id)dependencyDescription;	// IMP=0x00000001000415cc
- (void).cxx_destruct;	// IMP=0x00000001000455bc
@property(copy, nonatomic) CDUnknownBlockType pendingCompletion; // @synthesize pendingCompletion=_pendingCompletion;
@property(readonly, nonatomic) PBDialogHiddenAssertion *hideDialogAssertion; // @synthesize hideDialogAssertion=_hideDialogAssertion;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) TVSPreferences *screenSaverPrefs; // @synthesize screenSaverPrefs=_screenSaverPrefs;
@property(nonatomic) _Bool holdOffForMusicEnabled; // @synthesize holdOffForMusicEnabled=_holdOffForMusicEnabled;
@property(nonatomic) double screenSaverActivationDelayInMinutes; // @synthesize screenSaverActivationDelayInMinutes=_screenSaverActivationDelayInMinutes;
- (void)_handleSiriDidChangeVisibleState:(long long)arg1;	// IMP=0x0000000100045284
- (void)siriManagerDidUnhideSiriWindow:(id)arg1;	// IMP=0x0000000100045200
- (void)siriManager:(id)arg1 didUpdateVisibleState:(long long)arg2;	// IMP=0x0000000100045194
- (void)_notifyPhotosSourcesDaemon;	// IMP=0x0000000100045168
- (void)_updateActivationDelay;	// IMP=0x000000010004505c
- (unsigned long long)_screenSaverViewServiceVersionForAppBundleID:(id)arg1;	// IMP=0x0000000100044e40
- (id)_screenSaverControllerClassNameForAppBundleID:(id)arg1;	// IMP=0x0000000100044c18
- (id)_screenSaverAppBundleID;	// IMP=0x0000000100044b08
- (void)_postSystemDidChangeIdleState:(_Bool)arg1;	// IMP=0x0000000100044734
- (void)_launchDemoAppIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044248
- (void)removeObserver:(id)arg1;	// IMP=0x00000001000441e4
- (void)addObserver:(id)arg1;	// IMP=0x0000000100044180
- (void)appTransitioner:(id)arg1 willBeginAppTransition:(id)arg2;	// IMP=0x0000000100044000
- (void)dismissAuxiliaryScene:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100043f74
- (void)presentUIProvider:(id)arg1 clientOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100043d34
- (void)presentAuxiliaryScene:(id)arg1;	// IMP=0x00000001000439b8
- (id)sceneIdentifierForActivity:(id)arg1 withProcess:(id)arg2;	// IMP=0x00000001000438ec
@property(readonly, nonatomic) long long presentingLayoutLevel;
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x00000001000436ac
- (void)overlayController:(id)arg1 willDismissSession:(id)arg2 withContext:(id)arg3;	// IMP=0x00000001000434c4
- (void)overlayController:(id)arg1 didPresentSession:(id)arg2;	// IMP=0x00000001000432e4
- (void)overlayController:(id)arg1 willPresentSession:(id)arg2;	// IMP=0x00000001000430e4
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100042c7c
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (_Bool)shouldDismissScreenSaverOnPlayPauseButtonPress;	// IMP=0x0000000100042a4c
- (_Bool)dismissScreenSaverWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000426dc
- (_Bool)dismissScreenSaver;	// IMP=0x00000001000426a0
- (void)activateScreenSaverFromUserAction:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004213c
- (void)fetchInitialPhotoAssets;	// IMP=0x000000010004210c
- (void)dealloc;	// IMP=0x000000010004204c
- (id)init;	// IMP=0x00000001000418ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
