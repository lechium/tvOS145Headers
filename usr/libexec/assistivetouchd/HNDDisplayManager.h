//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HNDRockerProtocol-Protocol.h"
#import "HNDViewDelegateControl-Protocol.h"
#import "HNDWindowDelegateProtocol-Protocol.h"

@class AXDispatchTimer, AXUIClient, HNDRocker, HNDView, HNDWindow, NSDictionary, NSMutableSet, NSString, UIAccessibilityHUDView, UIView;

@interface HNDDisplayManager : NSObject <HNDViewDelegateControl, HNDWindowDelegateProtocol, HNDRockerProtocol>
{
    AXDispatchTimer *_idleTimer;	// 8 = 0x8
    AXDispatchTimer *_longIdleTimer;	// 16 = 0x10
    HNDWindow *_window;	// 24 = 0x18
    HNDWindow *_ignoredWindow;	// 32 = 0x20
    HNDRocker *_rocker;	// 40 = 0x28
    HNDView *_fingerContentView;	// 48 = 0x30
    UIView *_contentView;	// 56 = 0x38
    UIView *_scannerContentView;	// 64 = 0x40
    UIView *_scannerBackCursorView;	// 72 = 0x48
    UIView *_scannerFrontCursorView;	// 80 = 0x50
    HNDView *_rockerDismiss;	// 88 = 0x58
    HNDView *_multiTouchBackgound;	// 96 = 0x60
    struct CGPoint _currentPoint;	// 104 = 0x68
    double _menuOpenTime;	// 120 = 0x78
    _Bool _menuDownWillFireAutomaticUp;	// 128 = 0x80
    struct CGRect _screenBounds;	// 136 = 0x88
    int _orientation;	// 168 = 0xa8
    _Bool _showingHoverOverMenu;	// 172 = 0xac
    _Bool _isPressedDown;	// 173 = 0xad
    _Bool _openedMenuOnDown;	// 174 = 0xae
    double _nubbitTouchToUpTimeLatency;	// 176 = 0xb0
    double _nubbitTouchDownTime;	// 184 = 0xb8
    struct SCRCMathAverageValue _nubbitDistanceTracking;	// 192 = 0xc0
    struct SCRCMathAverageValue _nubbitAngleTracking;	// 632 = 0x278
    double _nubbitVelocity;	// 1072 = 0x430
    _Bool _nubbitMoving;	// 1080 = 0x438
    struct CGPoint _downPoint;	// 1088 = 0x440
    struct CGPoint _movePoint;	// 1104 = 0x450
    struct CGPoint _nubbitStartDownPoint;	// 1120 = 0x460
    HNDView *_downView;	// 1136 = 0x470
    unsigned int _lastHandType;	// 1144 = 0x478
    double _maxOrbDuringTouch;	// 1152 = 0x480
    double _nubbitPositionPercentage;	// 1160 = 0x488
    int _nubbitPositionEdge;	// 1168 = 0x490
    struct CGPoint _preKeyboardMovePosition;	// 1176 = 0x498
    _Bool _visualsHidden;	// 1192 = 0x4a8
    AXDispatchTimer *_positionSetTimer;	// 1200 = 0x4b0
    _Bool _keyboardVisible;	// 1208 = 0x4b8
    struct CGRect _keyboardFrame;	// 1216 = 0x4c0
    _Bool _orbActionExists;	// 1248 = 0x4e0
    _Bool _playedHapticForCurrentEvent;	// 1249 = 0x4e1
    NSDictionary *_lastReachabilityPayload;	// 1256 = 0x4e8
    _Bool _longPressActionActivated;	// 1264 = 0x4f0
    AXDispatchTimer *_longPressTimer;	// 1272 = 0x4f8
    AXDispatchTimer *_doubleTapTimer;	// 1280 = 0x500
    NSString *_pendingForegroundImageAction;	// 1288 = 0x508
    _Bool _shouldDelayBeforePresentingHUDView;	// 1296 = 0x510
    AXUIClient *_userInterfaceClient;	// 1304 = 0x518
    double _lastMenuInteractionTime;	// 1312 = 0x520
    UIView *_fingerContainerView;	// 1320 = 0x528
    AXDispatchTimer *_presentHUDViewTimer;	// 1328 = 0x530
    UIAccessibilityHUDView *_hudView;	// 1336 = 0x538
    NSString *_reachabilityHandlerIdentifier;	// 1344 = 0x540
    double _reachabilityOffset;	// 1352 = 0x548
    NSMutableSet *_userInterfaceClientEnablers;	// 1360 = 0x550
}

+ (double)fadeDuration;	// IMP=0x00000001000110d8
+ (id)sharedManager;	// IMP=0x00000001000110cc
+ (void)initialize;	// IMP=0x0000000100011094
- (void).cxx_destruct;	// IMP=0x0000000100019b40
@property(retain, nonatomic) NSMutableSet *userInterfaceClientEnablers; // @synthesize userInterfaceClientEnablers=_userInterfaceClientEnablers;
@property(nonatomic) double reachabilityOffset; // @synthesize reachabilityOffset=_reachabilityOffset;
@property(copy, nonatomic) NSString *reachabilityHandlerIdentifier; // @synthesize reachabilityHandlerIdentifier=_reachabilityHandlerIdentifier;
@property(nonatomic) _Bool shouldDelayBeforePresentingHUDView; // @synthesize shouldDelayBeforePresentingHUDView=_shouldDelayBeforePresentingHUDView;
@property(retain, nonatomic) UIAccessibilityHUDView *hudView; // @synthesize hudView=_hudView;
@property(retain, nonatomic) AXDispatchTimer *presentHUDViewTimer; // @synthesize presentHUDViewTimer=_presentHUDViewTimer;
@property(retain, nonatomic) UIView *fingerContainerView; // @synthesize fingerContainerView=_fingerContainerView;
@property(nonatomic) double lastMenuInteractionTime; // @synthesize lastMenuInteractionTime=_lastMenuInteractionTime;
@property(retain, nonatomic) AXUIClient *userInterfaceClient; // @synthesize userInterfaceClient=_userInterfaceClient;
@property(nonatomic) _Bool playedHapticForCurrentEvent; // @synthesize playedHapticForCurrentEvent=_playedHapticForCurrentEvent;
@property(nonatomic) _Bool showingHoverOverMenu; // @synthesize showingHoverOverMenu=_showingHoverOverMenu;
- (_Bool)_nubbitIsOverFrame:(struct CGRect)arg1;	// IMP=0x0000000100019a6c
- (struct CGPoint)_testingRockerPosition;	// IMP=0x0000000100019a5c
- (void)_hideLargeContentViewerIfNeeded;	// IMP=0x000000010001993c
- (void)_presentLargeContentViewerForHUDItem:(id)arg1 inContentView:(id)arg2;	// IMP=0x00000001000197c8
- (void)_updateLargeContentViewerIfNeededForView:(id)arg1;	// IMP=0x00000001000193e8
- (_Bool)_shouldShowLargeContentViewer;	// IMP=0x00000001000193e0
- (id)_itemForButton:(id)arg1;	// IMP=0x000000010001931c
- (void)_layoutHUDView:(id)arg1 withinBounds:(struct CGRect)arg2;	// IMP=0x0000000100019190
@property(readonly, nonatomic) UIView *scannerBackCursorView;
@property(readonly, nonatomic) UIView *scannerFrontCursorView;
@property(readonly, nonatomic) UIView *scannerContentView;
- (void)showSimpleBannerWithTitle:(id)arg1 text:(id)arg2;	// IMP=0x0000000100018f88
- (void)showSimpleAlertWithText:(id)arg1;	// IMP=0x0000000100018e24
- (void)_cleanupUserInterfaceClient;	// IMP=0x0000000100018d80
- (void)_setupUserInterfaceClient;	// IMP=0x0000000100018c98
- (void)removeUserInterfaceClientEnabler:(id)arg1;	// IMP=0x0000000100018bd8
- (void)addUserInterfaceClientEnabler:(id)arg1;	// IMP=0x0000000100018b00
- (void)viewPressedUp:(id)arg1;	// IMP=0x00000001000183c8
- (void)activateAssistiveTouchAction:(id)arg1 fromButtonPress:(_Bool)arg2;	// IMP=0x0000000100018350
- (id)rocker;	// IMP=0x0000000100018348
- (void)viewOrbActionTriggered:(id)arg1;	// IMP=0x00000001000181bc
- (void)viewPressedDown:(id)arg1;	// IMP=0x00000001000180fc
- (void)didFailToFloatApp;	// IMP=0x00000001000180ec
- (void)didFailToPinApp;	// IMP=0x00000001000180dc
- (void)volumeChanged;	// IMP=0x00000001000180bc
- (_Bool)inNubbitMode;	// IMP=0x0000000100018094
- (void)updateRotationLockSwitch;	// IMP=0x0000000100018084
- (void)updateRingerSwitch;	// IMP=0x0000000100018074
- (void)deviceCountChanged:(long long)arg1;	// IMP=0x0000000100017f18
- (void)_deviceCountChanged:(id)arg1;	// IMP=0x0000000100017edc
- (void)updateMenuStyle;	// IMP=0x0000000100017dc0
- (void)restartWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100017d10
- (_Bool)isMenuVisible;	// IMP=0x0000000100017d00
- (void)showMenu:(_Bool)arg1;	// IMP=0x0000000100017730
- (void)hideVisuals:(_Bool)arg1 animate:(_Bool)arg2;	// IMP=0x00000001000175bc
- (_Bool)visualsHidden;	// IMP=0x000000010001755c
- (struct CGPoint)_layoutPointForPoint:(struct CGPoint)arg1 screenBounds:(struct CGRect)arg2;	// IMP=0x0000000100017444
- (struct CGPoint)_menuPointForFingerLayout;	// IMP=0x0000000100017344
- (struct CGRect)rotatedScreenBounds;	// IMP=0x0000000100017324
- (void)performPress:(int)arg1 type:(int)arg2;	// IMP=0x0000000100017238
- (void)showCircleMenu:(_Bool)arg1;	// IMP=0x0000000100017228
- (void)updateWithPrimaryFingerPoint:(struct CGPoint)arg1;	// IMP=0x0000000100017190
- (struct CGRect)rockerFrame;	// IMP=0x0000000100017180
- (struct CGRect)screenBounds;	// IMP=0x0000000100017174
- (struct CGPoint)point;	// IMP=0x000000010001716c
- (struct CGPoint)screenPoint;	// IMP=0x0000000100017160
- (struct CGPoint)rotatedScreenPoint;	// IMP=0x000000010001712c
- (_Bool)hoverMovedToNormalizedPoint:(struct CGPoint)arg1 shouldUpdateCurrentPoint:(_Bool)arg2;	// IMP=0x0000000100016fec
- (_Bool)initialDownMenuCanTransitionToPressDown;	// IMP=0x0000000100016f98
- (_Bool)initialMenuDownHasFinished;	// IMP=0x0000000100016f80
- (int)orientation;	// IMP=0x0000000100016f78
- (void)setOrientation:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016738
- (void)_updateViewsForOrientation;	// IMP=0x00000001000163f4
- (struct CGAffineTransform)_transformForOrientation;	// IMP=0x00000001000163b8
- (double)_rotationDegreesForOrientation:(int)arg1;	// IMP=0x0000000100016394
- (struct CGPoint)normalizedPointForDifference:(struct CGPoint)arg1;	// IMP=0x000000010001635c
- (double)_idleTime;	// IMP=0x0000000100016354
- (void)_startIdleTimer;	// IMP=0x000000010001629c
- (void)_idleTimerFired;	// IMP=0x00000001000161f0
@property(nonatomic) _Bool fingerContentViewIsActive;
- (void)activateDisplayItems;	// IMP=0x0000000100016170
- (void)updateNubbitForegroundImageForAction:(id)arg1;	// IMP=0x0000000100016110
- (void)_longIdleTimerFired;	// IMP=0x0000000100016040
- (struct CGPoint)convertPointFromOrientation:(struct CGPoint)arg1;	// IMP=0x0000000100016030
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOrientation:(int)arg2;	// IMP=0x0000000100015fec
- (struct CGPoint)convertToNormalizedOrientation:(struct CGPoint)arg1;	// IMP=0x0000000100015fb8
- (struct CGPoint)convertPointToOrientation:(struct CGPoint)arg1;	// IMP=0x0000000100015f74
- (void)updateRockersForSubstantialTransition;	// IMP=0x0000000100015f64
- (_Bool)handleRealEvent:(id)arg1;	// IMP=0x0000000100014ef4
- (void)_didHandleRealUpEvent;	// IMP=0x0000000100014ef0
- (void)resetNubbitLocation;	// IMP=0x0000000100014dec
- (id)viewAtDisplayPoint:(struct CGPoint)arg1;	// IMP=0x0000000100014dd8
- (id)ignoredWindow;	// IMP=0x0000000100014dd0
- (id)window;	// IMP=0x0000000100014dc8
- (id)viewAtDisplayPoint:(struct CGPoint)arg1 downPoint:(struct CGPoint *)arg2 window:(id)arg3;	// IMP=0x00000001000149b0
- (double)_iconScaleForForce:(double)arg1;	// IMP=0x0000000100014978
- (void)_handleNubbitMove:(struct CGPoint)arg1 event:(id)arg2;	// IMP=0x000000010001440c
- (void)setNubbitMoving:(_Bool)arg1;	// IMP=0x0000000100014348
- (void)moveNubbitToPoint:(struct CGPoint)arg1;	// IMP=0x00000001000142d0
- (void)keyboardVisible:(_Bool)arg1 withFrame:(struct CGRect)arg2;	// IMP=0x0000000100013f08
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsets;
- (void)_moveNubbitForKeyboard:(struct CGRect)arg1;	// IMP=0x0000000100013e4c
- (struct CGPoint)_nubbitPositionForKeyboardFrame:(struct CGRect)arg1;	// IMP=0x0000000100013cec
- (_Bool)_nubbitIsOverKeyboard:(struct CGRect)arg1;	// IMP=0x0000000100013c68
- (_Bool)_position:(struct CGPoint)arg1 isOverKeyboard:(struct CGRect)arg2;	// IMP=0x0000000100013c08
- (void)_repositionNubbitAfterLift:(struct CGPoint)arg1;	// IMP=0x0000000100013b3c
- (void)_moveNubbitToPosition:(struct CGPoint)arg1 forKeyboard:(_Bool)arg2;	// IMP=0x00000001000139bc
- (void)_updateNubbitEdgePosition:(struct CGPoint)arg1;	// IMP=0x0000000100013734
- (void)_updateNubbitPosition;	// IMP=0x00000001000136fc
- (struct CGPoint)_nubbitPointForEdgePosition;	// IMP=0x0000000100013644
- (void)_moveNubbitToPosition:(struct CGPoint)arg1;	// IMP=0x0000000100013634
- (struct CGPoint)_validateNubbitPosition:(struct CGPoint)arg1 forKeyboard:(_Bool)arg2;	// IMP=0x000000010001352c
- (double)_xNubbitPadding:(double)arg1 x:(double)arg2;	// IMP=0x0000000100013294
- (double)_yNubbitPadding:(double)arg1 y:(double)arg2;	// IMP=0x0000000100013088
- (struct CGPoint)nubbitPositionForFlick:(struct CGPoint)arg1;	// IMP=0x0000000100012ed8
- (int)_angleForDegrees:(double)arg1;	// IMP=0x0000000100012d78
- (struct CGPoint)closestNubbitPositionForPoint:(struct CGPoint)arg1 offsetByMidpoint:(_Bool)arg2;	// IMP=0x0000000100012b88
- (void)setMultiTouchToolBackgroundEnabled:(_Bool)arg1;	// IMP=0x0000000100012924
- (_Bool)multiTouchToolBackgroundEnabled;	// IMP=0x0000000100012914
- (void)_endHandlingReachabilityIfNeeded;	// IMP=0x0000000100012910
- (void)_startHandlingReachabilityIfNeeded;	// IMP=0x000000010001290c
- (void)_handleReachability:(id)arg1;	// IMP=0x0000000100012908
- (void)_resetReachabilityOffset;	// IMP=0x000000010001289c
- (void)_resetCurrentPointToInitialPoint;	// IMP=0x0000000100012858
- (struct CGPoint)_rotatedNormalizedInitialPoint;	// IMP=0x000000010001280c
- (double)_currentRockerTranslateY;	// IMP=0x0000000100012774
- (void)_updateRockerReachability;	// IMP=0x00000001000126f8
- (void)dealloc;	// IMP=0x00000001000126ac
- (void)cleanup;	// IMP=0x00000001000124fc
- (void)placeNubbitAtBottomCenter;	// IMP=0x000000010001246c
- (void)initializeDisplayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100011a44
- (void)_updateSpeakScreenStatus;	// IMP=0x000000010001178c
- (id)init;	// IMP=0x00000001000110e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

