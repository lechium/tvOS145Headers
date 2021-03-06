/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVDocumentViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <TVMLKit/_TVModalPresenterFocusing.h>
#import <TVMLKit/_TVPagePerformanceDelegate.h>
#import <TVMLKit/_TVApplicationInspectorDocumentProvider.h>
#import <TVMLKit/_TVIKAppDocumentDelegate.h>
#import <libobjc.A.dylib/IKAppDocumentDelegate.h>

@protocol _TVAppDocumentControllerDelegate;
@class IKAppDocument, UIViewController, TVMediaQueryEvaluator, UITapGestureRecognizer, _TVPagePerformanceController, UIView, NSString, NSArray;

@interface _TVAppDocumentController : TVDocumentViewController <UIGestureRecognizerDelegate, _TVModalPresenterFocusing, _TVPagePerformanceDelegate, _TVApplicationInspectorDocumentProvider, _TVIKAppDocumentDelegate, IKAppDocumentDelegate> {

	struct {
		BOOL hasMediaQueryEvaluator;
		BOOL hasWillHostTemplateViewController;
		BOOL hasDidHostTemplateViewController;
	}  _delegateFlags;
	BOOL _opaque;
	BOOL _dismissAppOnMenu;
	BOOL _applicationDeactivatedOnMenu;
	BOOL _transitioning;
	BOOL _visualEffectDisablementNeeded;
	BOOL _presentedModal;
	BOOL _adoptsContext;
	IKAppDocument* _appDocument;
	id<_TVAppDocumentControllerDelegate> _appDelegate;
	UIViewController* _templateViewController;
	/*^block*/id _menuGestureHandler;
	TVMediaQueryEvaluator* _mediaQueryEvaluator;
	UITapGestureRecognizer* _menuGestureRecognizer;
	_TVPagePerformanceController* _pagePerformance;
	UIView* _pagePerformanceView;

}

@property (nonatomic,retain) IKAppDocument * appDocument;                                                            //@synthesize appDocument=_appDocument - In the implementation block
@property (nonatomic,retain) TVMediaQueryEvaluator * mediaQueryEvaluator;                                            //@synthesize mediaQueryEvaluator=_mediaQueryEvaluator - In the implementation block
@property (nonatomic,retain) UIViewController * templateViewController;                                              //@synthesize templateViewController=_templateViewController - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                                              //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,nonatomic,__weak) UITapGestureRecognizer * menuGestureRecognizer;                                  //@synthesize menuGestureRecognizer=_menuGestureRecognizer - In the implementation block
@property (assign,getter=isVisualEffectDisablementNeeded,nonatomic) BOOL visualEffectDisablementNeeded;              //@synthesize visualEffectDisablementNeeded=_visualEffectDisablementNeeded - In the implementation block
@property (nonatomic,retain) _TVPagePerformanceController * pagePerformance;                                         //@synthesize pagePerformance=_pagePerformance - In the implementation block
@property (nonatomic,retain) UIView * pagePerformanceView;                                                           //@synthesize pagePerformanceView=_pagePerformanceView - In the implementation block
@property (assign,getter=isPresentedModal,nonatomic) BOOL presentedModal;                                            //@synthesize presentedModal=_presentedModal - In the implementation block
@property (assign,nonatomic) BOOL adoptsContext;                                                                     //@synthesize adoptsContext=_adoptsContext - In the implementation block
@property (assign,nonatomic,__weak) id<_TVAppDocumentControllerDelegate> appDelegate;                                //@synthesize appDelegate=_appDelegate - In the implementation block
@property (assign,nonatomic) BOOL opaque;                                                                            //@synthesize opaque=_opaque - In the implementation block
@property (nonatomic,copy) id menuGestureHandler;                                                                    //@synthesize menuGestureHandler=_menuGestureHandler - In the implementation block
@property (assign,nonatomic) BOOL dismissAppOnMenu;                                                                  //@synthesize dismissAppOnMenu=_dismissAppOnMenu - In the implementation block
@property (nonatomic,readonly) BOOL applicationDeactivatedOnMenu;                                                    //@synthesize applicationDeactivatedOnMenu=_applicationDeactivatedOnMenu - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
-(void)dealloc;
-(void)setOpaque:(BOOL)arg1 ;
-(BOOL)opaque;
-(BOOL)isTransitioning;
-(void)viewDidLoad;
-(void)loadView;
-(void)scrollToTop;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)setTransitioning:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
-(id)activeDocument;
-(IKAppDocument *)appDocument;
-(void)documentNeedsUpdate:(id)arg1 ;
-(id)impressionableViewElementsForDocument:(id)arg1 ;
-(BOOL)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2 ;
-(void)setAppDocument:(IKAppDocument *)arg1 ;
-(void)documentDidUpdate:(id)arg1 ;
-(void)documentDidUpdateImplicitly:(id)arg1 ;
-(void)snapshotImpressions;
-(UITapGestureRecognizer *)menuGestureRecognizer;
-(void)setMenuGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id<_TVAppDocumentControllerDelegate>)appDelegate;
-(void)setAppDelegate:(id<_TVAppDocumentControllerDelegate>)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(id)initWithAppDocument:(id)arg1 ;
-(UIViewController *)templateViewController;
-(void)updatePreferredFocusedViewStateForFocus:(BOOL)arg1 ;
-(id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2 ;
-(id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2 ;
-(void)setPresentedModal:(BOOL)arg1 ;
-(void)setAdoptsContext:(BOOL)arg1 ;
-(void)replaceAppDocumentWithAppDocument:(id)arg1 ;
-(BOOL)adoptsContext;
-(void)willHostTemplateViewController:(id)arg1 usesTransitions:(BOOL*)arg2 ;
-(void)setMenuGestureHandler:(id)arg1 ;
-(void)setPagePerformance:(_TVPagePerformanceController *)arg1 ;
-(_TVPagePerformanceController *)pagePerformance;
-(void)_updateTemplateViewController;
-(void)_updateIdleModeStatus;
-(void)setTemplateViewController:(UIViewController *)arg1 ;
-(BOOL)isVisualEffectDisablementNeeded;
-(UIView *)pagePerformanceView;
-(id)overrideTraitCollectionForChildViewController:(id)arg1 ;
-(void)_markAndNotifyStylesDirty;
-(TVMediaQueryEvaluator *)mediaQueryEvaluator;
-(BOOL)isPresentedModal;
-(BOOL)_isFlowcaseStack;
-(void)_updateModalPresentationStateWithTemplateView:(id)arg1 ;
-(id)_alertControllerWithError:(id)arg1 ;
-(id)_mediaQueryEvaluator;
-(void)setMediaQueryEvaluator:(TVMediaQueryEvaluator *)arg1 ;
-(void)_willHostTemplateViewController:(id)arg1 usesTransitions:(BOOL*)arg2 ;
-(void)setVisualEffectDisablementNeeded:(BOOL)arg1 ;
-(void)_didHostTemplateViewController:(id)arg1 usedTransitions:(BOOL)arg2 ;
-(void)didHostTemplateViewController:(id)arg1 usedTransitions:(BOOL)arg2 ;
-(void)_menuGestureHandler:(id)arg1 ;
-(void)setPagePerformanceView:(UIView *)arg1 ;
-(BOOL)ppt_isLoading;
-(id)currentImpressionableElements;
-(void)pagePerformanceController:(id)arg1 didUpdateMetrics:(id)arg2 ;
-(CGSize)tv_adjustedWindowSizeForDocument:(id)arg1 ;
-(BOOL)tv_isPresentedModalForDocument:(id)arg1 ;
-(BOOL)_tvTabBarShouldOverlap;
-(CGSize)formSize;
-(id)menuGestureHandler;
-(BOOL)dismissAppOnMenu;
-(void)setDismissAppOnMenu:(BOOL)arg1 ;
-(BOOL)applicationDeactivatedOnMenu;
@end

