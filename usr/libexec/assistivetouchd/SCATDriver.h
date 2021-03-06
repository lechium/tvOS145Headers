//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, SCATElementManager, SCATFocusContext;
@protocol SCATDriverDelegate;

@interface SCATDriver : NSObject
{
    SCATFocusContext *_focusContext;	// 8 = 0x8
    _Bool _hasIdleTimeExpired;	// 16 = 0x10
    int _phase;	// 20 = 0x14
    id <SCATDriverDelegate> _delegate;	// 24 = 0x18
    AXDispatchTimer *_idleTimer;	// 32 = 0x20
    long long _lastWrapDirection;	// 40 = 0x28
    SCATFocusContext *_currentSpeechFocusContext;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010001d108
@property(nonatomic) SCATFocusContext *currentSpeechFocusContext; // @synthesize currentSpeechFocusContext=_currentSpeechFocusContext;
@property(nonatomic) long long lastWrapDirection; // @synthesize lastWrapDirection=_lastWrapDirection;
@property(nonatomic) _Bool hasIdleTimeExpired; // @synthesize hasIdleTimeExpired=_hasIdleTimeExpired;
@property(retain, nonatomic) AXDispatchTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(nonatomic) int phase; // @synthesize phase=_phase;
@property(nonatomic) __weak id <SCATDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tickleIdleTimer;	// IMP=0x000000010001d084
- (void)actionHandlerDidCancelPendingAction:(id)arg1;	// IMP=0x000000010001d080
- (id)focusContextForActionHandler:(id)arg1;	// IMP=0x000000010001d074
- (void)actionHandlerDidFireAction:(id)arg1;	// IMP=0x000000010001cfc4
- (_Bool)actionHandler:(id)arg1 shouldActImmediatelyOnActionCount:(unsigned long long)arg2;	// IMP=0x000000010001ce70
- (void)_didTransitionToPhase:(int)arg1;	// IMP=0x000000010001cca0
- (void)_willTransitionToPhase:(int)arg1;	// IMP=0x000000010001cc9c
- (_Bool)_canTransitionToPhase:(int)arg1;	// IMP=0x000000010001cc7c
- (_Bool)_shouldFocusToEscapeParentGroup:(id)arg1 elementManager:(id)arg2;	// IMP=0x000000010001cbf4
- (_Bool)_canAutomaticallyPauseScanner;	// IMP=0x000000010001cba8
- (void)_willStepToNextFocusContext:(id)arg1 inDirection:(long long)arg2;	// IMP=0x000000010001cba4
- (void)_didWrapInDirection:(long long)arg1;	// IMP=0x000000010001cb98
- (void)_idleTimerDidFire;	// IMP=0x000000010001cb94
- (void)_resetIdleTimer;	// IMP=0x000000010001c9fc
- (void)_cancelIdleTimer;	// IMP=0x000000010001c9bc
- (void)outputManager:(id)arg1 didSpeakFocusContext:(id)arg2;	// IMP=0x000000010001c924
- (void)outputManager:(id)arg1 willSpeakFocusContext:(id)arg2;	// IMP=0x000000010001c8ec
@property(readonly, nonatomic) _Bool isSpeakingFocusContext;
- (void)willDrillOutOfGroup;	// IMP=0x000000010001c8ac
- (void)willDrillIntoGroup;	// IMP=0x000000010001c8a8
- (void)didFinishAsScannerDriver;	// IMP=0x000000010001c89c
- (void)willFinishAsScannerDriver;	// IMP=0x000000010001c898
- (void)didBecomeScannerDriver;	// IMP=0x000000010001c894
- (void)willBecomeScannerDriver;	// IMP=0x000000010001c890
- (_Bool)_handleStepPreviousAction;	// IMP=0x000000010001c888
- (_Bool)_handleStepNextAction;	// IMP=0x000000010001c880
- (_Bool)_handleStopAction;	// IMP=0x000000010001c878
- (_Bool)_handleRunAction;	// IMP=0x000000010001c870
- (_Bool)_handleSelectAction;	// IMP=0x000000010001c820
- (_Bool)_fireSelectActionWithCount:(unsigned long long)arg1 preferrsMenuOnFirstPress:(_Bool)arg2;	// IMP=0x000000010001c160
- (_Bool)_handleActivateAction;	// IMP=0x000000010001bfc0
- (_Bool)handleInputAction:(long long)arg1;	// IMP=0x000000010001be40
- (void)handleDrillOutOnGroup:(id)arg1 elementManager:(id)arg2;	// IMP=0x000000010001bd44
- (void)handleDrillInOnGroup:(id)arg1 elementManager:(id)arg2;	// IMP=0x000000010001bc14
- (void)_stepToNextFocusContextInDirection:(long long)arg1;	// IMP=0x000000010001b990
- (id)firstFocusContext;	// IMP=0x000000010001b8e0
- (id)nextFocusContextFromContext:(id)arg1 inDirection:(long long)arg2 didWrap:(_Bool *)arg3;	// IMP=0x000000010001af80
- (id)_focusContextFromPrimaryContext:(id)arg1 inDirection:(long long)arg2 didWrap:(_Bool *)arg3;	// IMP=0x000000010001ada4
- (id)_focusedElementManagerForContext:(id)arg1;	// IMP=0x000000010001ad98
- (id)_drillOutFocusContextForParentGroupOfFocusContext:(id)arg1;	// IMP=0x000000010001ab6c
- (id)_focusContextAdjacentToSource:(int)arg1 direction:(long long)arg2 fromContext:(id)arg3 checkedSources:(unsigned long long)arg4;	// IMP=0x000000010001aa94
- (id)_focusContextForSource:(int)arg1 inDirection:(long long)arg2 currentContext:(id)arg3;	// IMP=0x000000010001a904
- (int)_nextFocusSourceFromSource:(int)arg1 inDirection:(long long)arg2;	// IMP=0x000000010001a8f8
- (int)_sourceForFocusContext:(id)arg1;	// IMP=0x000000010001a8d0
- (int)_preferredBehaviorForSelectCount:(unsigned long long)arg1 focusContext:(id)arg2;	// IMP=0x000000010001a7d8
- (_Bool)pauseScanningForPointPickerNumberOfCycles:(unsigned long long)arg1;	// IMP=0x000000010001a730
- (void)freezeScanning;	// IMP=0x000000010001a72c
- (void)resumeScanning;	// IMP=0x000000010001a6cc
- (void)pauseScanning;	// IMP=0x000000010001a66c
- (void)endScanning;	// IMP=0x000000010001a5f8
- (void)continueScanningWithFocusContext:(id)arg1;	// IMP=0x000000010001a530
- (void)beginScanningWithFocusContext:(id)arg1;	// IMP=0x000000010001a468
- (_Bool)isActiveScannerDriver;	// IMP=0x000000010001a3e8
@property(readonly, nonatomic) _Bool isPaused;
@property(readonly, nonatomic) _Bool isInactive;
@property(readonly, nonatomic) _Bool isActive;
- (id)selectActionHandler;	// IMP=0x000000010001a35c
@property(readonly, nonatomic) _Bool isGroupingEnabled;
@property(readonly, nonatomic) SCATElementManager *activeElementManager;
- (id)scannerManager;	// IMP=0x000000010001a298
@property(retain, nonatomic) SCATFocusContext *focusContext;
- (id)description;	// IMP=0x0000000100019d9c
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100019cd0
- (id)init;	// IMP=0x00000001000c01f0

// Remaining properties
@property(readonly, nonatomic) int driverType; // @dynamic driverType;

@end

