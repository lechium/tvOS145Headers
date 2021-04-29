/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/GKExtensionParentViewControllerProtocol.h>
#import <libobjc.A.dylib/GKAuthenticateViewController.h>

@class NSError, GKAuthenticateHostViewController, NSString;

@interface GKHostedAuthenticateViewController : UIViewController <GKExtensionParentViewControllerProtocol, GKAuthenticateViewController> {

	BOOL _disablesSignIn;
	BOOL _rotationLocked;
	/*^block*/id _completionHandler;
	NSError* _error;
	/*^block*/id _remoteViewReadyHandler;
	GKAuthenticateHostViewController* _extensionHostViewController;
	long long _mode;
	/*^block*/id _dismissCompletionHandler;

}

@property (nonatomic,retain) GKAuthenticateHostViewController * extensionHostViewController;              //@synthesize extensionHostViewController=_extensionHostViewController - In the implementation block
@property (assign,nonatomic) long long mode;                                                              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) id dismissCompletionHandler;                                                   //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
@property (assign,getter=isRotationLocked,nonatomic) BOOL rotationLocked;                                 //@synthesize rotationLocked=_rotationLocked - In the implementation block
@property (nonatomic,retain) NSError * error;                                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id remoteViewReadyHandler;                                                     //@synthesize remoteViewReadyHandler=_remoteViewReadyHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id completionHandler;                                                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL disablesSignIn;                                                         //@synthesize disablesSignIn=_disablesSignIn - In the implementation block
+(BOOL)_preventsAppearanceProxyCustomization;
-(id)init;
-(void)dealloc;
-(void)setMode:(long long)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(long long)mode;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutorotate;
-(void)_setupChildViewController;
-(void)extensionDidFinishWithError:(id)arg1 ;
-(void)setRemoteViewReadyHandler:(id)arg1 ;
-(void)continueWithMode:(long long)arg1 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(id)remoteViewReadyHandler;
-(void)finishAuthenticationWithError:(id)arg1 ;
-(void)showPasswordChangeAlertWithURL:(id)arg1 ;
-(BOOL)disablesSignIn;
-(void)setDisablesSignIn:(BOOL)arg1 ;
-(void)setRotationLocked:(BOOL)arg1 ;
-(void)onboardingFlowDidSignOut;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(id)dismissCompletionHandler;
-(GKAuthenticateHostViewController *)extensionHostViewController;
-(void)_setupExtensionHostViewController;
-(void)setExtensionHostViewController:(GKAuthenticateHostViewController *)arg1 ;
-(BOOL)isRotationLocked;
@end
