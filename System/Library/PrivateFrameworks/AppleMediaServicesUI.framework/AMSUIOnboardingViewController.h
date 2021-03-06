/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol OS_dispatch_queue;
@class UIImage, OBPrivacyLinkController, OBWelcomeController, NSString, NSObject, _UIBackdropView, AMSUIOnboardingHeaderView, AMSUIOnboardingMultiFeatureHeaderView, UIButton, UIView, UIImageView, UITraitCollection;

@interface AMSUIOnboardingViewController : UIViewController <UIScrollViewDelegate> {

	BOOL _viewHasAppeared;
	UIImage* _rightImage;
	OBPrivacyLinkController* _privacyLinkController;
	/*^block*/id _primaryButtonCallback;
	OBWelcomeController* _welcomeController;
	UIImage* _image;
	NSString* _titleText;
	NSString* _descriptionText;
	NSString* _primaryButtonText;
	NSObject*<OS_dispatch_queue> _metricsQueue;
	_UIBackdropView* _backdropView;
	AMSUIOnboardingHeaderView* _headerView;
	AMSUIOnboardingMultiFeatureHeaderView* _multiFeatureHeaderView;
	UIButton* _primaryButton;
	UIView* _leftContentView;
	UIView* _rightContentView;
	UIImageView* _rightImageView;

}

@property (nonatomic,retain) OBWelcomeController * welcomeController;                                     //@synthesize welcomeController=_welcomeController - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                             //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * titleText;                                                        //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;                                                  //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) NSString * primaryButtonText;                                                //@synthesize primaryButtonText=_primaryButtonText - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLinkController;                             //@synthesize privacyLinkController=_privacyLinkController - In the implementation block
@property (nonatomic,readonly) BOOL isPresentedInFormSheet; 
@property (nonatomic,readonly) UITraitCollection * cappedTraitCollection; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> metricsQueue;                                   //@synthesize metricsQueue=_metricsQueue - In the implementation block
@property (assign,nonatomic) BOOL viewHasAppeared;                                                        //@synthesize viewHasAppeared=_viewHasAppeared - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                                              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) AMSUIOnboardingHeaderView * headerView;                                      //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) AMSUIOnboardingMultiFeatureHeaderView * multiFeatureHeaderView;              //@synthesize multiFeatureHeaderView=_multiFeatureHeaderView - In the implementation block
@property (nonatomic,retain) UIButton * primaryButton;                                                    //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) UIView * leftContentView;                                                    //@synthesize leftContentView=_leftContentView - In the implementation block
@property (nonatomic,retain) UIView * rightContentView;                                                   //@synthesize rightContentView=_rightContentView - In the implementation block
@property (nonatomic,retain) UIImageView * rightImageView;                                                //@synthesize rightImageView=_rightImageView - In the implementation block
@property (nonatomic,readonly) UIImage * headerImage; 
@property (nonatomic,retain) UIImage * rightImage;                                                        //@synthesize rightImage=_rightImage - In the implementation block
@property (nonatomic,copy) id primaryButtonCallback;                                                      //@synthesize primaryButtonCallback=_primaryButtonCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)privacyLinkIdentifiersFromController:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)viewDidLoad;
-(NSObject*<OS_dispatch_queue>)metricsQueue;
-(void)setMetricsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(AMSUIOnboardingHeaderView *)headerView;
-(void)setHeaderView:(AMSUIOnboardingHeaderView *)arg1 ;
-(id)preferredFocusEnvironments;
-(UIImage *)headerImage;
-(BOOL)viewHasAppeared;
-(void)setViewHasAppeared:(BOOL)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(void)setPrimaryButton:(UIButton *)arg1 ;
-(UIButton *)primaryButton;
-(void)updateOverrideTraits;
-(UITraitCollection *)cappedTraitCollection;
-(id)childTraitCollectionForViewController:(id)arg1 ;
-(NSString *)primaryButtonText;
-(id)primaryButtonCallback;
-(id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkController:(id)arg5 ;
-(id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkController:(id)arg4 ;
-(void)didTapPrimaryButton:(id)arg1 ;
-(BOOL)isPresentedInFormSheet;
-(OBPrivacyLinkController *)privacyLinkController;
-(void)setPrimaryButtonCallback:(id)arg1 ;
-(void)setPrimaryButtonText:(NSString *)arg1 ;
-(void)setRightImage:(UIImage *)arg1 ;
-(UIImage *)rightImage;
-(UIImageView *)rightImageView;
-(void)setRightImageView:(UIImageView *)arg1 ;
-(void)commonInitWithPrimaryButtonText:(id)arg1 privacyLinkController:(id)arg2 ;
-(id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 features:(id)arg3 primaryButtonText:(id)arg4 privacyLinkBundleIdentifier:(id)arg5 ;
-(UIView *)leftContentView;
-(UIView *)rightContentView;
-(AMSUIOnboardingMultiFeatureHeaderView *)multiFeatureHeaderView;
-(id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkBundleIdentifier:(id)arg5 ;
-(id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkBundleIdentifier:(id)arg4 ;
-(void)commonSetupWithPrimaryButtonText:(id)arg1 privacyLinkBundleIdentifiers:(id)arg2 ;
-(void)setPrivacyLinkController:(OBPrivacyLinkController *)arg1 ;
-(OBWelcomeController *)welcomeController;
-(void)setWelcomeController:(OBWelcomeController *)arg1 ;
-(void)setMultiFeatureHeaderView:(AMSUIOnboardingMultiFeatureHeaderView *)arg1 ;
-(void)setLeftContentView:(UIView *)arg1 ;
-(void)setRightContentView:(UIView *)arg1 ;
@end

