/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationInAppContextPasswordDelegate.h>
#import <libobjc.A.dylib/AKBasicLoginPasswordFieldProtocol.h>
#import <libobjc.A.dylib/AKBasicLoginAnimateProtocol.h>

@protocol AKBasicLoginControllerDelegate;
@class AKBasicLoginActions, AKAppleIDAuthenticationInAppContext, NSLayoutConstraint, UITableView, AKBasicLoginTableViewCell, UIView, AKBasicLoginOptionsViewController, NSString;

@interface AKBasicLoginViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, AKBasicLoginPasswordFieldProtocol, AKBasicLoginAnimateProtocol> {

	BOOL _isPasswordFieldVisible;
	AKBasicLoginActions* _loginActions;
	id<AKBasicLoginControllerDelegate> _delegate;
	AKAppleIDAuthenticationInAppContext* _context;
	NSLayoutConstraint* _heightAnchor;
	UITableView* _tableView;
	AKBasicLoginTableViewCell* _usernameCell;
	AKBasicLoginTableViewCell* _passwordCell;
	UIView* _loginOptions;
	AKBasicLoginOptionsViewController* _loginOptionsViewController;
	UIView* _contentView;
	/*^block*/id _passwordHandler;

}

@property (assign,nonatomic,__weak) AKAppleIDAuthenticationInAppContext * context;                        //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightAnchor;                                           //@synthesize heightAnchor=_heightAnchor - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                     //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) AKBasicLoginTableViewCell * usernameCell;                                    //@synthesize usernameCell=_usernameCell - In the implementation block
@property (nonatomic,retain) AKBasicLoginTableViewCell * passwordCell;                                    //@synthesize passwordCell=_passwordCell - In the implementation block
@property (nonatomic,retain) UIView * loginOptions;                                                       //@synthesize loginOptions=_loginOptions - In the implementation block
@property (nonatomic,retain) AKBasicLoginOptionsViewController * loginOptionsViewController;              //@synthesize loginOptionsViewController=_loginOptionsViewController - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy) id passwordHandler;                                                            //@synthesize passwordHandler=_passwordHandler - In the implementation block
@property (assign,nonatomic) BOOL isPasswordFieldVisible;                                                 //@synthesize isPasswordFieldVisible=_isPasswordFieldVisible - In the implementation block
@property (nonatomic,copy) AKBasicLoginActions * loginActions;                                            //@synthesize loginActions=_loginActions - In the implementation block
@property (assign,nonatomic,__weak) id<AKBasicLoginControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AKBasicLoginControllerDelegate>)delegate;
-(void)setDelegate:(id<AKBasicLoginControllerDelegate>)arg1 ;
-(AKAppleIDAuthenticationInAppContext *)context;
-(void)setContext:(AKAppleIDAuthenticationInAppContext *)arg1 ;
-(id)_title;
-(id)initWithContext:(id)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)stopAnimating;
-(void)startAnimating;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UITableView *)tableView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardDidHide:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_setContentInset:(double)arg1 ;
-(void)context:(id)arg1 needsPasswordWithCompletion:(/*^block*/id)arg2 ;
-(BOOL)isPresentedModally;
-(id)_tableView;
-(NSLayoutConstraint *)heightAnchor;
-(void)setTableView:(UITableView *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(AKBasicLoginActions *)loginActions;
-(void)setLoginActions:(AKBasicLoginActions *)arg1 ;
-(void)_updatePlaceholderIfNeeded;
-(void)clearPasswordField;
-(id)_cancelBarButtonItem;
-(id)_signInBarButtonItem;
-(id)_loginOptions;
-(BOOL)_shouldShowUserName;
-(BOOL)_shouldShowPassword;
-(id)_usernameCell;
-(id)_passwordCell;
-(AKBasicLoginTableViewCell *)passwordCell;
-(id)passwordHandler;
-(void)setPasswordHandler:(id)arg1 ;
-(void)_signInPressed:(id)arg1 ;
-(AKBasicLoginTableViewCell *)usernameCell;
-(void)_setPasswordHiddenIfNeeded;
-(BOOL)isPasswordFieldVisible;
-(void)setHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(void)setLoginOptionsViewController:(AKBasicLoginOptionsViewController *)arg1 ;
-(AKBasicLoginOptionsViewController *)loginOptionsViewController;
-(void)_cancelPressed:(id)arg1 ;
-(void)setIsPasswordFieldVisible:(BOOL)arg1 ;
-(void)setUsernameCell:(AKBasicLoginTableViewCell *)arg1 ;
-(void)setPasswordCell:(AKBasicLoginTableViewCell *)arg1 ;
-(UIView *)loginOptions;
-(void)setLoginOptions:(UIView *)arg1 ;
@end

