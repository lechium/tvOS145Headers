//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutConstraint, PBPIPContainerViewController, PGPictureInPictureApplication, UILayoutGuide;
@protocol OS_dispatch_source;

@interface PBPIPContainerViewControllerLayout : NSObject
{
    _Bool _isKeyboardFocused;	// 8 = 0x8
    int _keyboardFocusedNotifyToken;	// 12 = 0xc
    PBPIPContainerViewController *_containerViewController;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    double _contentAspectRatio;	// 32 = 0x20
    NSArray *_constraintsFillingParentView;	// 40 = 0x28
    NSArray *_constraintsFittingParentView;	// 48 = 0x30
    NSLayoutConstraint *_heightConstraint;	// 56 = 0x38
    NSLayoutConstraint *_widthConstraint;	// 64 = 0x40
    NSLayoutConstraint *_topConstraint;	// 72 = 0x48
    NSLayoutConstraint *_bottomConstraint;	// 80 = 0x50
    NSLayoutConstraint *_leadingConstraint;	// 88 = 0x58
    NSLayoutConstraint *_trailingConstraint;	// 96 = 0x60
    UILayoutGuide *_preferredPositionLayoutGuide;	// 104 = 0x68
    NSLayoutConstraint *_preferredHeightConstraint;	// 112 = 0x70
    NSLayoutConstraint *_preferredWidthConstraint;	// 120 = 0x78
    NSLayoutConstraint *_preferredTopConstraint;	// 128 = 0x80
    NSLayoutConstraint *_preferredBottomConstraint;	// 136 = 0x88
    NSLayoutConstraint *_preferredLeadingConstraint;	// 144 = 0x90
    NSLayoutConstraint *_preferredTrailingConstraint;	// 152 = 0x98
    long long _quadrant;	// 160 = 0xa0
    NSObject<OS_dispatch_source> *_focusDodgingTimer;	// 168 = 0xa8
    struct CGRect _lastFocusedFrame;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000001002221cc
@property(readonly, nonatomic) int keyboardFocusedNotifyToken; // @synthesize keyboardFocusedNotifyToken=_keyboardFocusedNotifyToken;
@property(nonatomic) _Bool isKeyboardFocused; // @synthesize isKeyboardFocused=_isKeyboardFocused;
@property(readonly, nonatomic) struct CGRect lastFocusedFrame; // @synthesize lastFocusedFrame=_lastFocusedFrame;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *focusDodgingTimer; // @synthesize focusDodgingTimer=_focusDodgingTimer;
@property(readonly, nonatomic) long long quadrant; // @synthesize quadrant=_quadrant;
@property(readonly, nonatomic) NSLayoutConstraint *preferredTrailingConstraint; // @synthesize preferredTrailingConstraint=_preferredTrailingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *preferredLeadingConstraint; // @synthesize preferredLeadingConstraint=_preferredLeadingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *preferredBottomConstraint; // @synthesize preferredBottomConstraint=_preferredBottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *preferredTopConstraint; // @synthesize preferredTopConstraint=_preferredTopConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *preferredWidthConstraint; // @synthesize preferredWidthConstraint=_preferredWidthConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *preferredHeightConstraint; // @synthesize preferredHeightConstraint=_preferredHeightConstraint;
@property(readonly, nonatomic) UILayoutGuide *preferredPositionLayoutGuide; // @synthesize preferredPositionLayoutGuide=_preferredPositionLayoutGuide;
@property(readonly, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(readonly, nonatomic) NSArray *constraintsFittingParentView; // @synthesize constraintsFittingParentView=_constraintsFittingParentView;
@property(readonly, nonatomic) NSArray *constraintsFillingParentView; // @synthesize constraintsFillingParentView=_constraintsFillingParentView;
@property(nonatomic) double contentAspectRatio; // @synthesize contentAspectRatio=_contentAspectRatio;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) PBPIPContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
- (void)_handleKeyboardNotification;	// IMP=0x0000000100221e4c
- (void)_unregisterFromKeyboardNotifications;	// IMP=0x0000000100221dfc
- (void)_registerForKeyboardNotifications;	// IMP=0x0000000100221cb0
- (id)_allConstraints;	// IMP=0x0000000100221b04
- (id)_pipLayoutGuide;	// IMP=0x00000001002218e8
- (id)_parentView;	// IMP=0x0000000100221838
- (_Bool)_shouldDodgeFocusedFrame:(struct CGRect)arg1;	// IMP=0x00000001002215b0
- (void)_updateConstraintsForFocusedFrame:(struct CGRect)arg1 shouldDodge:(_Bool)arg2;	// IMP=0x0000000100220ebc
- (void)_cancelUpdateForDodgingFocusedFrame;	// IMP=0x0000000100220e70
- (void)_stageUpdateForDodgingFocusedFrame;	// IMP=0x0000000100220c34
- (void)updateConstraintsForFocusedFrame:(struct CGRect)arg1;	// IMP=0x0000000100220b70
- (void)updateConstraintsFittingParentView;	// IMP=0x0000000100220ad0
- (void)updateConstraintsFillingParentView;	// IMP=0x0000000100220a30
- (void)updateConstraintsForPictureInPictureQuadrant:(long long)arg1;	// IMP=0x00000001002206a0
- (struct CGRect)preferredPictureInPictureFrameForQuadrant:(long long)arg1 pipInsets:(struct UIEdgeInsets)arg2;	// IMP=0x00000001002201fc
- (struct CGRect)preferredIntrinsicFrame;	// IMP=0x0000000100220124
- (struct CGSize)preferredIntrinsicSize;	// IMP=0x00000001002200d4
- (struct CGSize)preferredFullscreenSize;	// IMP=0x0000000100220064
- (struct CGSize)preferredPictureInPictureSize;	// IMP=0x000000010021ff90
@property(readonly, nonatomic) PGPictureInPictureApplication *application;
- (void)_setUpConstraints;	// IMP=0x000000010021f3e8
- (void)dealloc;	// IMP=0x000000010021f390
- (id)initWithContainerViewController:(id)arg1;	// IMP=0x000000010021f228
- (id)pb_roundedCornerLayer;	// IMP=0x0000000100008b90
- (id)pb_hostedLayerView;	// IMP=0x00000001000089a0

@end

