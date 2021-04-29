/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/GKContentRefresh.h>
#import <libobjc.A.dylib/GKURLHandling.h>

@protocol UISplitViewControllerImpl;
@class NSString, UISlidingBarConfiguration, UISlidingBarState, NSArray, UISlidingBarStateRequest, UIScreenEdgePanGestureRecognizer, UIBarButtonItem;

@interface UISplitViewController : UIViewController <GKContentRefresh, GKURLHandling> {

	id<UISplitViewControllerImpl> _impl;
	BOOL __lockedForDelegateCallback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) UISlidingBarConfiguration * configuration; 
@property (nonatomic,readonly) UISlidingBarState * currentState; 
@property (nonatomic,readonly) NSArray * possibleStates; 
@property (nonatomic,copy) UISlidingBarStateRequest * stateRequest; 
@property (assign,setter=_setLockedForDelegateCallback:,getter=_isLockedForDelegateCallback,nonatomic) BOOL _lockedForDelegateCallback;                                                                                       //@synthesize _lockedForDelegateCallback=__lockedForDelegateCallback - In the implementation block
@property (nonatomic,readonly) UIScreenEdgePanGestureRecognizer * _fluidOpenSidebarPresentationGestureRecognizer; 
@property (nonatomic,readonly) long long composition; 
@property (assign,nonatomic) BOOL prefersSecondaryOnlyShortcutButtonVisible; 
@property (assign,nonatomic) BOOL showsFullScreenShortcutButtonIfApplicable; 
@property (assign,setter=_setPreferredSplitBehavior:,nonatomic) long long _preferredSplitBehavior; 
@property (nonatomic,readonly) long long _splitBehavior; 
@property (assign,nonatomic) double preferredSupplementalColumnWidthFraction; 
@property (assign,nonatomic) double minimumSupplementalColumnWidth; 
@property (assign,nonatomic) double maximumSupplementalColumnWidth; 
@property (nonatomic,readonly) double supplementalColumnWidth; 
@property (assign,nonatomic) float gutterWidth; 
@property (assign,nonatomic) BOOL hidesMasterViewInPortrait; 
@property (setter=_setDisplayModeButtonItemTitle:,nonatomic,copy) NSString * _displayModeButtonItemTitle; 
@property (assign,setter=_setPrefersOverlayInRegularWidthPhone:,getter=_prefersOverlayInRegularWidthPhone,nonatomic) BOOL prefersOverlayInRegularWidthPhone; 
@property (assign,setter=_setUsesDeviceOverlayPreferences:,getter=_usesDeviceOverlayPreferences,nonatomic) BOOL usesDeviceOverlayPreferences; 
@property (assign,setter=_setUsesExtraWidePrimaryColumn:,getter=_usesExtraWidePrimaryColumn,nonatomic) BOOL usesExtraWidePrimaryColumn; 
@property (assign,setter=_setVisibleToggleButtonRequiresPresentsWithGesture:,nonatomic) BOOL _visibleToggleButtonRequiresPresentsWithGesture; 
@property (assign,setter=_setForceDisplayModeBarButtonHidden:,nonatomic) BOOL _forceDisplayModeBarButtonHidden; 
@property (assign,setter=_setAllowsDimmedSecondaryAsDeepestUnambiguousResponder:,getter=_allowsDimmedSecondaryAsDeepestUnambiguousResponder,nonatomic) BOOL _allowsDimmedSecondaryAsDeepestUnambiguousResponder; 
@property (assign,setter=_setPreferredPrimaryColumnWidth:,getter=_preferredPrimaryColumnWidth,nonatomic) double _preferredPrimaryColumnWidth; 
@property (assign,setter=_setPreferredSupplementaryColumnWidth:,getter=_preferredSupplementaryColumnWidth,nonatomic) double _preferredSupplementaryColumnWidth; 
@property (nonatomic,readonly) long long style; 
@property (assign,nonatomic,__weak) id<UISplitViewControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL showsSecondaryOnlyButton; 
@property (assign,nonatomic) long long preferredSplitBehavior; 
@property (nonatomic,readonly) long long splitBehavior; 
@property (nonatomic,copy) NSArray * viewControllers; 
@property (assign,nonatomic) BOOL presentsWithGesture; 
@property (getter=isCollapsed,nonatomic,readonly) BOOL collapsed; 
@property (assign,nonatomic) long long preferredDisplayMode; 
@property (nonatomic,readonly) long long displayMode; 
@property (nonatomic,readonly) UIBarButtonItem * displayModeButtonItem; 
@property (assign,nonatomic) long long displayModeButtonVisibility; 
@property (assign,nonatomic) double preferredPrimaryColumnWidthFraction; 
@property (assign,nonatomic) double preferredPrimaryColumnWidth; 
@property (assign,nonatomic) double minimumPrimaryColumnWidth; 
@property (assign,nonatomic) double maximumPrimaryColumnWidth; 
@property (nonatomic,readonly) double primaryColumnWidth; 
@property (assign,nonatomic) double preferredSupplementaryColumnWidthFraction; 
@property (assign,nonatomic) double preferredSupplementaryColumnWidth; 
@property (assign,nonatomic) double minimumSupplementaryColumnWidth; 
@property (assign,nonatomic) double maximumSupplementaryColumnWidth; 
@property (nonatomic,readonly) double supplementaryColumnWidth; 
@property (assign,nonatomic) long long primaryEdge; 
@property (assign,nonatomic) long long primaryBackgroundStyle; 
+(BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+(long long)_forcedImpl;
+(BOOL)_devicePrefersOverlayInRegularWidth;
+(BOOL)_automaticDisplayModeOnPhoneUsesOverlayInLandscapeDefaultValue;
+(void)_setForcedImpl:(long long)arg1 ;
-(void)_gkSetContentsNeedUpdateWithHandler:(/*^block*/id)arg1 ;
-(void)_gkForceNextContentUpdate;
-(void)_gkResetContents;
-(void)_gkUpdateContentsWithCompletionHandlerAndError:(/*^block*/id)arg1 ;
-(void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<UISplitViewControllerDelegate>)delegate;
-(void)setDelegate:(id<UISplitViewControllerDelegate>)arg1 ;
-(UISlidingBarConfiguration *)configuration;
-(void)setConfiguration:(UISlidingBarConfiguration *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(UISlidingBarState *)currentState;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)displayMode;
-(void)_commonInit;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)composition;
-(id)initWithStyle:(long long)arg1 ;
-(void)setExtendedLayoutIncludesOpaqueBars:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(NSArray *)viewControllers;
-(BOOL)isCollapsed;
-(id)transitionCoordinator;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)showViewController:(id)arg1 sender:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)masterViewController;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)removeFromParentViewController;
-(void)addChildViewController:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)setViewControllers:(NSArray *)arg1 ;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2 ;
-(id)childViewControllerForStatusBarStyle;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)setAutomaticallyAdjustsScrollViewInsets:(BOOL)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)setModalTransitionStyle:(long long)arg1 ;
-(void)setDefinesPresentationContext:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)_isRotating;
-(BOOL)_isAnimating;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(id)preferredFocusedView;
-(void)setRestoresFocusAfterTransition:(BOOL)arg1 ;
-(void)setEdgesForExtendedLayout:(unsigned long long)arg1 ;
-(id)initWithComposition:(long long)arg1 ;
-(void)setComposition:(long long)arg1 ;
-(long long)splitBehavior;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)detailViewController;
-(void)setPreferredDisplayMode:(long long)arg1 ;
-(void)hideColumn:(long long)arg1 ;
-(void)showColumn:(long long)arg1 ;
-(long long)preferredDisplayMode;
-(void)setViewController:(id)arg1 forColumn:(long long)arg2 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(long long)_preferredModalPresentationStyle;
-(void)setViewRespectsSystemMinimumLayoutMargins:(BOOL)arg1 ;
-(void)removeChildViewController:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)setPreferredPrimaryColumnWidthFraction:(double)arg1 ;
-(void)setPreferredSupplementaryColumnWidthFraction:(double)arg1 ;
-(UIBarButtonItem *)displayModeButtonItem;
-(void)_updateDisplayModeButtonItem;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(NSArray *)possibleStates;
-(void)setOverrideTraitCollection:(id)arg1 ;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(void)setModalPresentationCapturesStatusBarAppearance:(BOOL)arg1 ;
-(void)setPrimaryBackgroundStyle:(long long)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI58*)arg1 ;
-(UIEdgeInsets)_tvOSColumnStyleExtraInsetsForChildViewController:(id)arg1 ;
-(long long)primaryEdge;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(long long)preferredLeadingStatusBarStyle;
-(long long)preferredTrailingStatusBarStyle;
-(id)_multitaskingDragExclusionRects;
-(id)_deepestActionResponder;
-(id)_nextResponderUsingTargetActionStrategyFromChildViewController:(id)arg1 didTraverseToParentViewController:(BOOL*)arg2 ;
-(BOOL)_optsOutOfPopoverControllerHierarchyCheck;
-(CGRect)_frameForChildContentContainer:(id)arg1 ;
-(long long)_subclassPreferredFocusedViewPrioritizationType;
-(BOOL)_handlesCounterRotationForPresentation;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)_tabBarControllerDidChangeSelection:(id)arg1 ;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(BOOL)_shouldPersistViewWhenCoding;
-(id)_allContainedViewControllers;
-(id)_additionalViewControllersToCheckForUserActivity;
-(void)_navigationControllerDidChangeNavigationBarHidden:(id)arg1 ;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(void)_updateChildContentMargins;
-(BOOL)_navigationControllerShouldNotAdjustTransitioningSizeForChildContainer:(id)arg1 ;
-(long long)_columnForViewController:(id)arg1 ;
-(id)_childViewControllersToSendViewWillTransitionToSize;
-(void)_navigationControllerDidUpdateStack:(id)arg1 ;
-(void)_navigationController:(id)arg1 navigationBar:(id)arg2 topItemUpdatedContentLayout:(id)arg3 ;
-(void)_navigationController:(id)arg1 navigationBar:(id)arg2 itemBackButtonUpdated:(id)arg3 ;
-(id)_navigationController:(id)arg1 navigationBarAdditionalActionsForBackButtonMenu:(id)arg2 ;
-(void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3 ;
-(void)_popoverController:(id)arg1 willChangeToVisible:(BOOL)arg2 ;
-(void)_popoverController:(id)arg1 didChangeFromVisible:(BOOL)arg2 ;
-(CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2 ;
-(BOOL)_usesPanelImpl;
-(BOOL)_iPhoneShouldUseOverlayInCurrentEnvironment;
-(void)_animateToRequest:(id)arg1 ;
-(void)setStateRequest:(UISlidingBarStateRequest *)arg1 ;
-(BOOL)_isCollapsed;
-(BOOL)_layoutPrimaryOnRight;
-(UISlidingBarStateRequest *)stateRequest;
-(id)viewControllerForColumn:(long long)arg1 ;
-(void)_willBeginSnapshotSession:(id)arg1 ;
-(void)_didEndSnapshotSession:(id)arg1 ;
-(id)_panelImpl;
-(void)setShowsSecondaryOnlyButton:(BOOL)arg1 ;
-(BOOL)showsSecondaryOnlyButton;
-(void)setPreferredSplitBehavior:(long long)arg1 ;
-(long long)preferredSplitBehavior;
-(double)preferredSupplementaryColumnWidthFraction;
-(void)setMinimumSupplementaryColumnWidth:(double)arg1 ;
-(double)minimumSupplementaryColumnWidth;
-(void)setMaximumSupplementaryColumnWidth:(double)arg1 ;
-(double)maximumSupplementaryColumnWidth;
-(double)supplementaryColumnWidth;
-(void)setDisplayModeButtonVisibility:(long long)arg1 ;
-(long long)displayModeButtonVisibility;
-(BOOL)presentsWithGesture;
-(void)setPresentsWithGesture:(BOOL)arg1 ;
-(void)_setVisibleToggleButtonRequiresPresentsWithGesture:(BOOL)arg1 ;
-(BOOL)_visibleToggleButtonRequiresPresentsWithGesture;
-(void)_setForceDisplayModeBarButtonHidden:(BOOL)arg1 ;
-(BOOL)_forceDisplayModeBarButtonHidden;
-(void)_setAllowsDimmedSecondaryAsDeepestUnambiguousResponder:(BOOL)arg1 ;
-(BOOL)_allowsDimmedSecondaryAsDeepestUnambiguousResponder;
-(double)preferredPrimaryColumnWidthFraction;
-(double)minimumPrimaryColumnWidth;
-(void)setMinimumPrimaryColumnWidth:(double)arg1 ;
-(double)maximumPrimaryColumnWidth;
-(void)setMaximumPrimaryColumnWidth:(double)arg1 ;
-(double)primaryColumnWidth;
-(void)setPrimaryEdge:(long long)arg1 ;
-(float)gutterWidth;
-(void)setGutterWidth:(float)arg1 ;
-(BOOL)hidesMasterViewInPortrait;
-(void)setHidesMasterViewInPortrait:(BOOL)arg1 ;
-(NSString *)_displayModeButtonItemTitle;
-(void)_setDisplayModeButtonItemTitle:(id)arg1 ;
-(id)_primaryDimmingView;
-(BOOL)_usesExtraWidePrimaryColumn;
-(void)_setUsesExtraWidePrimaryColumn:(BOOL)arg1 ;
-(void)setPreferredPrimaryColumnWidth:(double)arg1 ;
-(double)preferredPrimaryColumnWidth;
-(void)setPreferredSupplementaryColumnWidth:(double)arg1 ;
-(double)preferredSupplementaryColumnWidth;
-(void)_allowingMutationsInDelegateCallback:(/*^block*/id)arg1 ;
-(void)_viewControllerChildViewControllersDidChange:(id)arg1 ;
-(UIScreenEdgePanGestureRecognizer *)_fluidOpenSidebarPresentationGestureRecognizer;
-(BOOL)_shouldUseFluidSidebarGestures;
-(void)_triggerSidebarKeyCommandAction:(id)arg1 ;
-(double)_primaryDividerPosition;
-(double)_supplementaryDividerPosition;
-(void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(BOOL)arg4 ;
-(void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2 ;
-(void)toggleMasterVisible:(id)arg1 ;
-(long long)primaryBackgroundStyle;
-(void)_updateScrollEdgeBehaviorForDetailNavigationContoller;
-(void)setProvidesPresentationContextTransitionStyle:(BOOL)arg1 ;
-(BOOL)_shouldUseNewStatusBarBehavior;
-(void)unloadViewForced:(BOOL)arg1 ;
-(double)_contentMarginForChildViewController:(id)arg1 ;
-(void)_didChangeToFirstResponder:(id)arg1 ;
-(id)_primaryContentResponder;
-(void)setShowsFullScreenShortcutButtonIfApplicable:(BOOL)arg1 ;
-(BOOL)showsFullScreenShortcutButtonIfApplicable;
-(void)setPrefersSecondaryOnlyShortcutButtonVisible:(BOOL)arg1 ;
-(BOOL)prefersSecondaryOnlyShortcutButtonVisible;
-(void)_setPreferredSplitBehavior:(long long)arg1 ;
-(long long)_preferredSplitBehavior;
-(long long)_splitBehavior;
-(void)_setViewController:(id)arg1 forColumn:(long long)arg2 ;
-(id)_viewControllerForColumn:(long long)arg1 ;
-(void)_hideColumn:(long long)arg1 ;
-(void)_showColumn:(long long)arg1 ;
-(void)setPreferredSupplementalColumnWidthFraction:(double)arg1 ;
-(double)preferredSupplementalColumnWidthFraction;
-(void)setMinimumSupplementalColumnWidth:(double)arg1 ;
-(double)minimumSupplementalColumnWidth;
-(void)setMaximumSupplementalColumnWidth:(double)arg1 ;
-(double)maximumSupplementalColumnWidth;
-(double)supplementalColumnWidth;
-(void)_setPrefersOverlayInRegularWidthPhone:(BOOL)arg1 ;
-(BOOL)_prefersOverlayInRegularWidthPhone;
-(void)_setUsesDeviceOverlayPreferences:(BOOL)arg1 ;
-(BOOL)_usesDeviceOverlayPreferences;
-(void)_setPreferredPrimaryColumnWidth:(double)arg1 ;
-(double)_preferredPrimaryColumnWidth;
-(void)_setPreferredSupplementaryColumnWidth:(double)arg1 ;
-(double)_preferredSupplementaryColumnWidth;
-(void)_enumerateAncestorViewControllersUntilStop:(BOOL*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGSize)_super_sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)_super_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_super_viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_super_preferredFocusedView;
-(id)_super_preferredFocusEnvironments;
-(BOOL)_super_shouldUpdateFocusInContext:(id)arg1 ;
-(BOOL)_shouldUseSeparateStatusBarStyles;
-(id)_super_childViewControllerForStatusBarStyle;
-(unsigned long long)_super_supportedInterfaceOrientations;
-(long long)_super_preferredInterfaceOrientationForPresentation;
-(void)_super_removeChildViewController:(id)arg1 ;
-(void)_super_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)_super_multitaskingDragExclusionRects;
-(id)_super_childViewControllersToSendViewWillTransitionToSize;
-(id)_super_traitCollectionForChildEnvironment:(id)arg1 ;
-(BOOL)_super_disableAutomaticKeyboardBehavior;
-(id)_super_deepestActionResponder;
-(BOOL)_isLockedForDelegateCallback;
-(void)_setLockedForDelegateCallback:(BOOL)arg1 ;
@end

