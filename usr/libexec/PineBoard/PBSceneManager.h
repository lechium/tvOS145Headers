//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBProcessManagerObserver-Protocol.h"
#import "FBSceneDelegate-Protocol.h"
#import "FBSceneManagerDelegate_Private-Protocol.h"
#import "FBWorkspaceDelegate-Protocol.h"
#import "PBInstanceDependable-Protocol.h"
#import "PBSDisplayStateObserver-Protocol.h"
#import "PBSceneLayoutViewControllerDisplaySceneHandleDelegate-Protocol.h"
#import "UIScenePresentationBinderDelegate-Protocol.h"

@class BKSMutableHIDEventDeferringTarget, FBSSceneIdentity, FBSceneManager, NSHashTable, NSMutableArray, NSMutableSet, NSString, PBAuxiliarySceneManager, PBChannelGuideUserActivityDispatcher, PBSceneDeactivationManager, PBSceneHandle, PBScenePresenter, TVSConcurrentTransactionManager, UIRootWindowScenePresentationBinder;
@protocol BSInvalidatable;

@interface PBSceneManager : NSObject <FBProcessManagerObserver, FBSceneManagerDelegate_Private, FBSceneDelegate, FBWorkspaceDelegate, UIScenePresentationBinderDelegate, PBSDisplayStateObserver, PBSceneLayoutViewControllerDisplaySceneHandleDelegate, PBInstanceDependable>
{
    PBSceneHandle *_focusedSceneHandle;	// 8 = 0x8
    PBScenePresenter *_scenePresenter;	// 16 = 0x10
    PBSceneDeactivationManager *_sceneDeactivationManager;	// 24 = 0x18
    PBAuxiliarySceneManager *_auxiliarySceneManager;	// 32 = 0x20
    PBChannelGuideUserActivityDispatcher *_channelGuideActivityDispatcher;	// 40 = 0x28
    FBSceneManager *_fbSceneManager;	// 48 = 0x30
    NSHashTable *_observers;	// 56 = 0x38
    NSMutableSet *_pendingSnapshots;	// 64 = 0x40
    UIRootWindowScenePresentationBinder *_rootWindowScenePresentationBinder;	// 72 = 0x48
    TVSConcurrentTransactionManager *_updateSceneTransactionManager;	// 80 = 0x50
    NSMutableArray *_deferralTargetAssertions;	// 88 = 0x58
    BKSMutableHIDEventDeferringTarget *_lastDeferringTarget;	// 96 = 0x60
    id <BSInvalidatable> _focusDeferral;	// 104 = 0x68
}

+ (id)defaultSceneIdentityForApplicationWithBundleID:(id)arg1;	// IMP=0x000000010022fd44
+ (id)sharedInstance;	// IMP=0x000000010022f6a4
+ (id)dependencyDescription;	// IMP=0x000000010022f4e4
- (void).cxx_destruct;	// IMP=0x000000010023689c
@property(readonly, nonatomic) id <BSInvalidatable> focusDeferral; // @synthesize focusDeferral=_focusDeferral;
@property(readonly, nonatomic) BKSMutableHIDEventDeferringTarget *lastDeferringTarget; // @synthesize lastDeferringTarget=_lastDeferringTarget;
@property(readonly, nonatomic) NSMutableArray *deferralTargetAssertions; // @synthesize deferralTargetAssertions=_deferralTargetAssertions;
@property(readonly, nonatomic) TVSConcurrentTransactionManager *updateSceneTransactionManager; // @synthesize updateSceneTransactionManager=_updateSceneTransactionManager;
@property(readonly, nonatomic) UIRootWindowScenePresentationBinder *rootWindowScenePresentationBinder; // @synthesize rootWindowScenePresentationBinder=_rootWindowScenePresentationBinder;
@property(readonly, nonatomic) NSMutableSet *pendingSnapshots; // @synthesize pendingSnapshots=_pendingSnapshots;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) FBSceneManager *fbSceneManager; // @synthesize fbSceneManager=_fbSceneManager;
@property(readonly, nonatomic) PBChannelGuideUserActivityDispatcher *channelGuideActivityDispatcher; // @synthesize channelGuideActivityDispatcher=_channelGuideActivityDispatcher;
@property(readonly, nonatomic) PBAuxiliarySceneManager *auxiliarySceneManager; // @synthesize auxiliarySceneManager=_auxiliarySceneManager;
@property(readonly, nonatomic) PBSceneDeactivationManager *sceneDeactivationManager; // @synthesize sceneDeactivationManager=_sceneDeactivationManager;
@property(readonly, nonatomic) PBScenePresenter *scenePresenter; // @synthesize scenePresenter=_scenePresenter;
@property(readonly, nonatomic) PBSceneHandle *focusedSceneHandle; // @synthesize focusedSceneHandle=_focusedSceneHandle;
- (void)sceneLayoutViewController:(id)arg1 didChangeOldFocusedSceneHandle:(id)arg2 toSceneHandle:(id)arg3;	// IMP=0x000000010023654c
- (_Bool)scenePresentationBinderShouldPresentSceneOnlyWhenLayersExist:(id)arg1;	// IMP=0x00000001002364f8
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x0000000100235784
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;	// IMP=0x00000001002356d8
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;	// IMP=0x0000000100234764
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;	// IMP=0x0000000100233894
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;	// IMP=0x00000001002336f8
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;	// IMP=0x0000000100233558
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;	// IMP=0x000000010023337c
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;	// IMP=0x0000000100233274
- (void)sceneManager:(id)arg1 interceptUpdateForScene:(id)arg2 withNewSettings:(id)arg3;	// IMP=0x0000000100233130
- (void)workspace:(id)arg1 didReceiveSceneRequestWithOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001002322bc
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;	// IMP=0x0000000100232214
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;	// IMP=0x000000010023216c
- (void)displayState:(id)arg1 didChangeWithConnection:(long long)arg2;	// IMP=0x0000000100232104
- (void)_notifyObserversDidUpdateFocusedFrame:(struct CGRect)arg1 forFocusedScene:(id)arg2;	// IMP=0x0000000100231f48
- (void)_notifyObserversDidUpdateOverlayInsets:(struct UIEdgeInsets)arg1 forFocusedScene:(id)arg2;	// IMP=0x0000000100231d8c
- (void)_notifyObserversDefaultKioskScene:(id)arg1 didUpdateAppGridHidden:(_Bool)arg2;	// IMP=0x0000000100231bd8
- (_Bool)_eventsCanBeDeferredToSceneHandle:(id)arg1;	// IMP=0x0000000100231408
- (void)_updateFocusDeferralsIfNeeded;	// IMP=0x0000000100230208
- (_Bool)_shouldAutoHostScene:(id)arg1;	// IMP=0x000000010023013c
- (void)removeSceneDeferralTargetAssertion:(id)arg1;	// IMP=0x00000001002300cc
- (void)addSceneDeferralTargetAssertion:(id)arg1;	// IMP=0x000000010023005c
- (void)removeObserver:(id)arg1;	// IMP=0x000000010022fffc
- (void)addObserver:(id)arg1;	// IMP=0x000000010022ff9c
- (void)foregroundSceneWithIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010022fec0
@property(readonly, nonatomic) FBSSceneIdentity *defaultKioskSceneIdentity;
@property(readonly, nonatomic) PBSceneHandle *currentApplicationSceneHandle;
- (void)dealloc;	// IMP=0x000000010022fbac
- (id)init;	// IMP=0x000000010022f76c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

