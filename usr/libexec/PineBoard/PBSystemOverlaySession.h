//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSystemOverlayContentDelegate-Protocol.h"

@class NSMutableArray, NSString, PBSystemOverlayDismissalTransaction, PBSystemOverlayPreparationTransaction, PBSystemOverlayPresentationTransaction, TVSStateMachine, UIViewController;
@protocol PBSystemOverlayContentPresenting, PBSystemOverlaySessionDelegate, PBSystemUIPresenting;

@interface PBSystemOverlaySession : NSObject <PBSystemOverlayContentDelegate>
{
    TVSStateMachine *_stateMachine;	// 8 = 0x8
    PBSystemOverlayPreparationTransaction *_preparationTransaction;	// 16 = 0x10
    PBSystemOverlayPresentationTransaction *_presentationTransaction;	// 24 = 0x18
    PBSystemOverlayDismissalTransaction *_dismissalTransaction;	// 32 = 0x20
    NSMutableArray *_pendingPresentationRequests;	// 40 = 0x28
    NSMutableArray *_pendingDismissalRequests;	// 48 = 0x30
    UIViewController<PBSystemOverlayContentPresenting> *_viewController;	// 56 = 0x38
    _Bool _active;	// 64 = 0x40
    NSString *_identifier;	// 72 = 0x48
    long long _state;	// 80 = 0x50
    id <PBSystemUIPresenting> _presentationHandler;	// 88 = 0x58
    long long _layoutLevel;	// 96 = 0x60
    id <PBSystemOverlaySessionDelegate> _delegate;	// 104 = 0x68
    unsigned long long _sceneDeactivationReasons;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000001000240b0
@property(readonly, nonatomic) unsigned long long sceneDeactivationReasons; // @synthesize sceneDeactivationReasons=_sceneDeactivationReasons;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) __weak id <PBSystemOverlaySessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long layoutLevel; // @synthesize layoutLevel=_layoutLevel;
@property(readonly, nonatomic) id <PBSystemUIPresenting> presentationHandler; // @synthesize presentationHandler=_presentationHandler;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_machineNotifyDidInvalidate;	// IMP=0x0000000100023f64
- (void)_machineNotifyDidCancelWithContext:(id)arg1;	// IMP=0x0000000100023ee0
- (void)_machineNotifyDidDismiss;	// IMP=0x0000000100023e8c
- (void)_machineNotifyWillDismissWithContext:(id)arg1;	// IMP=0x0000000100023e08
- (void)_machineNotifyDidPresent;	// IMP=0x0000000100023db4
- (void)_machineNotifyWillPresent;	// IMP=0x0000000100023d60
- (void)_machineCleanup;	// IMP=0x0000000100023cc8
- (void)_machineAddPendingPresentationRequest:(id)arg1;	// IMP=0x0000000100023c64
- (void)_machineDismissUIWithRequest:(id)arg1;	// IMP=0x000000010002364c
- (void)_machinePresentUIWithRequest:(id)arg1;	// IMP=0x000000010002304c
- (void)_machinePrepareUIWithProvider:(id)arg1;	// IMP=0x0000000100022a88
- (void)_initializeStateMachine;	// IMP=0x000000010001d61c
- (void)contentPresentingDidDismissContent:(id)arg1;	// IMP=0x000000010001d538
- (void)contentPresenting:(id)arg1 willDismissContentWithResult:(id)arg2 error:(id)arg3;	// IMP=0x000000010001d2ac
- (void)makeActive;	// IMP=0x000000010001d258
- (void)dismissWithRequest:(id)arg1;	// IMP=0x000000010001d0e4
- (void)presentWithRequest:(id)arg1;	// IMP=0x000000010001cfcc
- (id)initWithIdentifier:(id)arg1 layoutLevel:(long long)arg2 sceneDeactivationReasons:(unsigned long long)arg3 presentationHandler:(id)arg4 delegate:(id)arg5;	// IMP=0x000000010001cdfc
- (id)init;	// IMP=0x000000010001cdc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

