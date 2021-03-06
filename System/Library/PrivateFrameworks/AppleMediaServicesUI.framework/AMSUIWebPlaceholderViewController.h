/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AMSUICommonViewController.h>
#import <libobjc.A.dylib/AMSUIWebPagePresenter.h>

@protocol AMSUIWebPagePresenter;
@class AMSUIWebAppearance, AMSUIWebLoadingPageModel, UIViewController, AMSUIWebClientContext, AMSUILoadingView, AMSBinaryPromise, UIView, NSString;

@interface AMSUIWebPlaceholderViewController : AMSUICommonViewController <AMSUIWebPagePresenter> {

	BOOL _animateFadeIn;
	BOOL _hasAppeared;
	BOOL _isVisible;
	BOOL _shouldSnapshot;
	AMSUIWebAppearance* _appearance;
	AMSUIWebLoadingPageModel* _model;
	UIViewController*<AMSUIWebPagePresenter> _originalViewController;
	AMSUIWebClientContext* _context;
	AMSUILoadingView* _loadingView;
	AMSBinaryPromise* _snapshotPromise;
	UIView* _snapshotView;
	UIView* _visibleView;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;                                              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL hasAppeared;                                                             //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (assign,nonatomic) BOOL isVisible;                                                               //@synthesize isVisible=_isVisible - In the implementation block
@property (nonatomic,retain) AMSUILoadingView * loadingView;                                               //@synthesize loadingView=_loadingView - In the implementation block
@property (assign,nonatomic) BOOL shouldSnapshot;                                                          //@synthesize shouldSnapshot=_shouldSnapshot - In the implementation block
@property (nonatomic,retain) AMSBinaryPromise * snapshotPromise;                                           //@synthesize snapshotPromise=_snapshotPromise - In the implementation block
@property (nonatomic,retain) UIView * snapshotView;                                                        //@synthesize snapshotView=_snapshotView - In the implementation block
@property (nonatomic,retain) UIView * visibleView;                                                         //@synthesize visibleView=_visibleView - In the implementation block
@property (assign,nonatomic) BOOL animateFadeIn;                                                           //@synthesize animateFadeIn=_animateFadeIn - In the implementation block
@property (nonatomic,retain) AMSUIWebAppearance * appearance;                                              //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,retain) AMSUIWebLoadingPageModel * model;                                             //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) UIViewController*<AMSUIWebPagePresenter> originalViewController;              //@synthesize originalViewController=_originalViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(AMSUIWebLoadingPageModel *)model;
-(BOOL)isVisible;
-(void)setModel:(AMSUIWebLoadingPageModel *)arg1 ;
-(AMSUIWebAppearance *)appearance;
-(void)setAppearance:(AMSUIWebAppearance *)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIView *)snapshotView;
-(void)setSnapshotView:(UIView *)arg1 ;
-(AMSUILoadingView *)loadingView;
-(void)setLoadingView:(AMSUILoadingView *)arg1 ;
-(BOOL)hasAppeared;
-(void)setHasAppeared:(BOOL)arg1 ;
-(void)setIsVisible:(BOOL)arg1 ;
-(void)_applyAppearance;
-(void)willPresentPageModel:(id)arg1 appearance:(id)arg2 ;
-(void)willAppearAfterDismiss;
-(id)initWithModel:(id)arg1 context:(id)arg2 appearance:(id)arg3 ;
-(void)setAnimateFadeIn:(BOOL)arg1 ;
-(id)initWithSnapshot:(id)arg1 context:(id)arg2 appearance:(id)arg3 ;
-(void)setOriginalViewController:(UIViewController*<AMSUIWebPagePresenter>)arg1 ;
-(void)awaitSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(AMSBinaryPromise *)snapshotPromise;
-(void)_transitionToLoadingAnimated:(BOOL)arg1 ;
-(void)_transitionToSnapshot;
-(void)_startReappearTransitionTimerAnimated:(BOOL)arg1 ;
-(UIView *)visibleView;
-(BOOL)animateFadeIn;
-(void)setVisibleView:(UIView *)arg1 ;
-(void)_replacePrimaryViewWithView:(id)arg1 animated:(BOOL)arg2 ;
-(UIViewController*<AMSUIWebPagePresenter>)originalViewController;
-(BOOL)shouldSnapshot;
-(void)setShouldSnapshot:(BOOL)arg1 ;
-(void)setSnapshotPromise:(AMSBinaryPromise *)arg1 ;
@end

