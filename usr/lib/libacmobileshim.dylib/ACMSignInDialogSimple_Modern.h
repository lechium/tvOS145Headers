/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libacmobileshim.dylib/ACMSignInDialogCustom.h>
#import <libobjc.A.dylib/ACMSignInDialogSimpleProtocol.h>

@class UIImage, UIImageView, NSString, UIView, UIToolbar, NSArray, UIColor;

@interface ACMSignInDialogSimple_Modern : ACMSignInDialogCustom <ACMSignInDialogSimpleProtocol> {

	UIImage* _logo;
	UIImageView* _logoView;
	NSString* _accountNameFieldPlaceholder;
	UIView* _container;
	UIToolbar* _toolbar;
	NSArray* _burButtonItems;

}

@property (nonatomic,readonly) UIImage * iForgotImage; 
@property (nonatomic,retain) UIToolbar * toolbar;                                 //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UIImageView * logoView;                              //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) NSArray * burButtonItems;                            //@synthesize burButtonItems=_burButtonItems - In the implementation block
@property (nonatomic,retain) UIView * container;                                  //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) double widgetConstraintMultiplier; 
@property (nonatomic,readonly) double widgetConstraintConstant; 
@property (nonatomic,retain) UIImage * logo;                                      //@synthesize logo=_logo - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,retain) NSString * accountNameFieldPlaceholder;              //@synthesize accountNameFieldPlaceholder=_accountNameFieldPlaceholder - In the implementation block
@property (assign) id<ACMSignInDialogDelegate> delegate; 
@property (nonatomic,retain) NSString * requestedUserName; 
@property (readonly) NSString * userNameString; 
@property (assign) NSString * passwordString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UIView *)container;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setContainer:(UIView *)arg1 ;
-(UIImage *)logo;
-(void)setLogo:(UIImage *)arg1 ;
-(void)loadView;
-(id)tintColor;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIToolbar *)toolbar;
-(long long)preferredStatusBarStyle;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)passwordField;
-(id)darkTextColor;
-(BOOL)prefersStatusBarHidden;
-(id)widget;
-(UIImageView *)logoView;
-(void)setLogoView:(UIImageView *)arg1 ;
-(id)accountNameField;
-(void)checkFields;
-(BOOL)canSignIn;
-(BOOL)standardViewController;
-(void)setAccountNameFieldPlaceholder:(NSString *)arg1 ;
-(BOOL)userNameFieldEditable;
-(void)disableControls:(BOOL)arg1 ;
-(NSString *)accountNameFieldPlaceholder;
-(Class)widgetClass;
-(BOOL)shouldAuthenticateOnUserInput;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(void)setBurButtonItems:(NSArray *)arg1 ;
-(UIImage *)iForgotImage;
-(id)createCancelItem;
-(id)createIForgotItem;
-(NSArray *)burButtonItems;
-(void)buildConstraints;
-(void)buildWidgetContentGroupHorizontalConstraints;
-(void)buildWidgetContentGroupVerticalConstraints;
-(double)widgetConstraintMultiplier;
-(double)widgetConstraintConstant;
-(void)buildHorizontalConstraints;
-(void)buildVerticalConstraints;
-(BOOL)shouldManuallyChangeStatusBarStyle;
-(id)darkDisabledTextColor;
@end

