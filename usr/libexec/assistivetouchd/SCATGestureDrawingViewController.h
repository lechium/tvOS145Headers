//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATElementManagerViewController.h"

#import "SCATMenuObserver-Protocol.h"
#import "SCATModernMenuGestureFreehandSheetDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, SCATGestureDrawingElementManager, SCATGestureDrawingView, SCATMenu;
@protocol SCATGestureDrawingViewDelegate;

@interface SCATGestureDrawingViewController : SCATElementManagerViewController <SCATMenuObserver, SCATModernMenuGestureFreehandSheetDelegate>
{
    SCATMenu *_menu;	// 8 = 0x8
    _Bool _pressesOnMoveStart;	// 16 = 0x10
    _Bool _liftsOnMoveEnd;	// 17 = 0x11
    _Bool _areFingersPressed;	// 18 = 0x12
    _Bool _isRotating;	// 19 = 0x13
    _Bool _isCurving;	// 20 = 0x14
    id <SCATGestureDrawingViewDelegate> _delegate;	// 24 = 0x18
    double _angle;	// 32 = 0x20
    double _velocity;	// 40 = 0x28
    double _curvature;	// 48 = 0x30
    NSArray *_fingerPositions;	// 56 = 0x38
    NSTimer *_moveTimer;	// 64 = 0x40
    NSTimer *_generalTimer;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000937f0
@property(nonatomic) _Bool isCurving; // @synthesize isCurving=_isCurving;
@property(nonatomic) _Bool isRotating; // @synthesize isRotating=_isRotating;
@property(retain, nonatomic) NSTimer *generalTimer; // @synthesize generalTimer=_generalTimer;
@property(retain, nonatomic) NSTimer *moveTimer; // @synthesize moveTimer=_moveTimer;
@property(retain, nonatomic) NSArray *fingerPositions; // @synthesize fingerPositions=_fingerPositions;
@property(nonatomic) double curvature; // @synthesize curvature=_curvature;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) _Bool areFingersPressed; // @synthesize areFingersPressed=_areFingersPressed;
@property(nonatomic) _Bool liftsOnMoveEnd; // @synthesize liftsOnMoveEnd=_liftsOnMoveEnd;
@property(nonatomic) _Bool pressesOnMoveStart; // @synthesize pressesOnMoveStart=_pressesOnMoveStart;
@property(nonatomic) __weak id <SCATGestureDrawingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x00000001000936bc
- (_Bool)allowsDwellSelection;	// IMP=0x000000010009363c
- (void)scannerWillMakeManagerInactive:(id)arg1;	// IMP=0x00000001000935e8
- (void)scannerWillMakeManagerActive:(id)arg1;	// IMP=0x00000001000934dc
- (id)elementBefore:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x0000000100093444
- (id)elementAfter:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00000001000933ac
- (id)lastElementWithOptions:(int *)arg1;	// IMP=0x0000000100093350
- (id)firstElementWithOptions:(int *)arg1;	// IMP=0x00000001000932f4
- (id)_currentElementProvider;	// IMP=0x000000010009326c
- (void)menuDidFinishTransition:(id)arg1;	// IMP=0x0000000100093260
- (void)menuWillDisappear:(id)arg1;	// IMP=0x0000000100093218
- (void)toggleTouchForFreehandSheet:(id)arg1;	// IMP=0x00000001000931e0
- (void)decreaseVelocityForFreehandSheet:(id)arg1;	// IMP=0x0000000100093194
- (void)increaseVelocityForFreehandSheet:(id)arg1;	// IMP=0x000000010009314c
- (void)bendLeftForFreehandSheet:(id)arg1;	// IMP=0x00000001000930ec
- (void)bendRightForFreehandSheet:(id)arg1;	// IMP=0x000000010009308c
- (void)straightenForFreehandSheet:(id)arg1;	// IMP=0x000000010009307c
- (void)rotate90ClockwiseForFreehandSheet:(id)arg1;	// IMP=0x000000010009303c
- (void)rotate90CounterclockwiseForFreehandSheet:(id)arg1;	// IMP=0x0000000100092ffc
- (void)rotateClockwiseForFreehandSheet:(id)arg1;	// IMP=0x0000000100092f9c
- (void)rotateCounterclockwiseForFreehandSheet:(id)arg1;	// IMP=0x0000000100092f3c
- (void)bendForFreehandSheet:(id)arg1;	// IMP=0x0000000100092ec0
- (void)rotateForFreehandSheet:(id)arg1;	// IMP=0x0000000100092e08
- (void)stopForFreehandSheet:(id)arg1;	// IMP=0x0000000100092d7c
- (void)autoLiftToggledForFreehandSheet:(id)arg1;	// IMP=0x0000000100092d44
- (void)autoPressToggledForFreehandSheet:(id)arg1;	// IMP=0x0000000100092d0c
- (void)moveForFreehandSheet:(id)arg1;	// IMP=0x0000000100092bb0
- (void)moveToolbarForFreehandSheet:(id)arg1;	// IMP=0x0000000100092b58
- (void)freehandSheet:(id)arg1 didHighlightStraighten:(_Bool)arg2;	// IMP=0x0000000100092ae8
- (void)freehandSheet:(id)arg1 didHighlightBendLeft:(_Bool)arg2;	// IMP=0x0000000100092a78
- (void)freehandSheet:(id)arg1 didHighlightBendRight:(_Bool)arg2;	// IMP=0x0000000100092a08
- (void)freehandSheet:(id)arg1 didHighlightRotateCW90:(_Bool)arg2;	// IMP=0x0000000100092938
- (void)freehandSheet:(id)arg1 didHighlightRotateCCW90:(_Bool)arg2;	// IMP=0x0000000100092868
- (void)freehandSheet:(id)arg1 didHighlightRotateCW:(_Bool)arg2;	// IMP=0x00000001000927f8
- (void)freehandSheet:(id)arg1 didHighlightRotateCCW:(_Bool)arg2;	// IMP=0x0000000100092788
- (void)freehandSheet:(id)arg1 didHighlightBend:(_Bool)arg2;	// IMP=0x0000000100092618
- (void)freehandSheet:(id)arg1 didHighlightRotate:(_Bool)arg2;	// IMP=0x00000001000924f4
- (void)freehandSheet:(id)arg1 didHighlightMove:(_Bool)arg2;	// IMP=0x0000000100092488
- (void)didPopFreehandSheet:(id)arg1;	// IMP=0x000000010009238c
- (double)curvatureForFreehandSheet:(id)arg1;	// IMP=0x0000000100092380
- (double)angleForFreehandSheet:(id)arg1;	// IMP=0x0000000100092374
- (_Bool)isAutoLiftOnForFreehandSheet:(id)arg1;	// IMP=0x0000000100092368
- (_Bool)isAutoPressOnForFreehandSheet:(id)arg1;	// IMP=0x000000010009235c
- (_Bool)isTouchOnForFreehandSheet:(id)arg1;	// IMP=0x0000000100092350
- (void)_cleanUp;	// IMP=0x00000001000922d0
- (void)_move;	// IMP=0x000000010009223c
- (void)_curveOnLeft:(_Bool)arg1 withCurveRadius:(double)arg2;	// IMP=0x0000000100091f58
- (void)_moveStraight;	// IMP=0x0000000100091cd0
- (struct CGPoint)_fingerCenter;	// IMP=0x0000000100091b4c
- (void)_endMovementAndForceLift:(_Bool)arg1;	// IMP=0x0000000100091ad0
- (void)_cancelMoveTimerAndEndMove:(_Bool)arg1;	// IMP=0x0000000100091a24
- (_Bool)_isPerformingMove;	// IMP=0x00000001000919e8
- (void)_decreaseCurvature;	// IMP=0x00000001000919d8
- (void)_increaseCurvature;	// IMP=0x00000001000919c8
- (void)_adjustCurvatureWithDirection:(double)arg1;	// IMP=0x00000001000918e8
- (void)_rotateCounterclockwise;	// IMP=0x00000001000918a8
- (void)_rotateClockwise;	// IMP=0x0000000100091868
- (void)_endGeneralTimer;	// IMP=0x0000000100091744
- (void)_startGeneralTimerWithSelector:(SEL)arg1 actionName:(id)arg2;	// IMP=0x0000000100091648
- (void)_uninstallStopButton;	// IMP=0x0000000100091550
- (void)_installStopButtonForActionName:(id)arg1;	// IMP=0x00000001000913f4
- (double)_previewDistance;	// IMP=0x0000000100090e10
@property(readonly, nonatomic) SCATGestureDrawingElementManager *drawingElementManager;
- (void)_pushFreehandSheetOfClass:(Class)arg1;	// IMP=0x0000000100090d70
@property(readonly, nonatomic) SCATGestureDrawingView *mainView;
- (void)viewDidLoad;	// IMP=0x0000000100090c60
- (void)loadView;	// IMP=0x0000000100090c1c
- (void)orientationDidChange:(id)arg1;	// IMP=0x0000000100090c10
- (void)_updateMainViewToolbarFrame;	// IMP=0x0000000100090b38
- (void)dealloc;	// IMP=0x0000000100090adc
- (id)initWithElementManager:(id)arg1 startingFingerPositions:(id)arg2 menu:(id)arg3;	// IMP=0x0000000100090824
- (id)init;	// IMP=0x00000001000907d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
