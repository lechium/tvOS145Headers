//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"
#import "PBSystemOverlayControllerDelegate-Protocol.h"
#import "PBSystemUIManaging-Protocol.h"

@class NSHashTable, NSMutableDictionary, NSString, PBSystemOverlayController, UIApplicationSceneDeactivationAssertion;
@protocol BSInvalidatable, OS_dispatch_source;

@interface PBBulletinManager : NSObject <PBSystemOverlayControllerDelegate, PBSystemUIManaging, PBInstanceDependable>
{
    _Bool _currentBulletinActive;	// 8 = 0x8
    NSMutableDictionary *_identifiersToBulletinInfos;	// 16 = 0x10
    PBSystemOverlayController *_overlayController;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_bulletinDismissalTimer;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
    UIApplicationSceneDeactivationAssertion *_interactiveBulletinSceneDeactivationAssertion;	// 48 = 0x30
    id <BSInvalidatable> _idleTimerAssertion;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x000000010007cca8
+ (id)dependencyDescription;	// IMP=0x000000010007cb1c
- (void).cxx_destruct;	// IMP=0x000000010007fcc4
@property(retain, nonatomic) id <BSInvalidatable> idleTimerAssertion; // @synthesize idleTimerAssertion=_idleTimerAssertion;
@property(retain, nonatomic) UIApplicationSceneDeactivationAssertion *interactiveBulletinSceneDeactivationAssertion; // @synthesize interactiveBulletinSceneDeactivationAssertion=_interactiveBulletinSceneDeactivationAssertion;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *bulletinDismissalTimer; // @synthesize bulletinDismissalTimer=_bulletinDismissalTimer;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(readonly, nonatomic) NSMutableDictionary *identifiersToBulletinInfos; // @synthesize identifiersToBulletinInfos=_identifiersToBulletinInfos;
@property(nonatomic, getter=isCurrentBulletinActive) _Bool currentBulletinActive; // @synthesize currentBulletinActive=_currentBulletinActive;
- (void)_notifyObserversDidEndFocusOnBulletinViewController:(id)arg1;	// IMP=0x000000010007fa04
- (void)_notifyObserversDidBeginFocusOnBulletinViewController:(id)arg1;	// IMP=0x000000010007f868
- (void)_notifyObserversDidDismissBulletinViewController:(id)arg1;	// IMP=0x000000010007f6cc
- (void)_notifyObserversWillPresentBulletinViewController:(id)arg1;	// IMP=0x000000010007f510
- (void)_invalidateIdleTimerAssertion;	// IMP=0x000000010007f4bc
- (void)_createIdleTimerAssertion;	// IMP=0x000000010007f284
- (void)_setAcceptsEventFocus:(_Bool)arg1 forViewController:(id)arg2;	// IMP=0x000000010007ef50
- (void)_cancelTimer;	// IMP=0x000000010007ef04
- (void)_startTimerForViewController:(id)arg1 withTimeout:(double)arg2;	// IMP=0x000000010007ecdc
- (void)dismissBulletinViewController:(id)arg1;	// IMP=0x000000010007e890
- (void)updateBulletinViewControllerTimeout:(id)arg1 timeoutInSeconds:(double)arg2;	// IMP=0x000000010007e4d8
- (void)presentBulletinViewController:(id)arg1 withTimeoutInSeconds:(double)arg2;	// IMP=0x000000010007dfb0
- (void)overlayController:(id)arg1 didCancelSession:(id)arg2 withContext:(id)arg3;	// IMP=0x000000010007dde0
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x000000010007db78
- (void)overlayController:(id)arg1 didPresentSession:(id)arg2;	// IMP=0x000000010007d904
- (void)removeObserver:(id)arg1;	// IMP=0x000000010007d8a0
- (void)addObserver:(id)arg1;	// IMP=0x000000010007d83c
- (_Bool)dismissOrShrinkCurrentBulletin;	// IMP=0x000000010007d500
- (void)activateCurrentBulletin;	// IMP=0x000000010007d370
- (_Bool)shouldActivateCurrentBulletinForAction:(unsigned long long)arg1;	// IMP=0x000000010007d248
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (id)init;	// IMP=0x000000010007cda4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
