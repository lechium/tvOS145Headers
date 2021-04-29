/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class WKWebView, PKPaymentProvisioningController, NSURL, NSString;

@interface PKPaymentCardIneligibleViewController : UIViewController <WKNavigationDelegate> {

	WKWebView* _webView;
	/*^block*/id _preflightCompletion;
	BOOL _preloadLearnMoreWebView;
	long long _reason;
	long long _context;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	PKPaymentProvisioningController* _provisioningController;
	NSURL* _learnMoreURL;
	/*^block*/id _learnMorePresentationHandler;
	/*^block*/id _continueActionHandler;

}

@property (assign,nonatomic) long long reason;                                                           //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) long long context;                                                          //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,retain) PKPaymentProvisioningController * provisioningController;                   //@synthesize provisioningController=_provisioningController - In the implementation block
@property (nonatomic,retain) NSURL * learnMoreURL;                                                       //@synthesize learnMoreURL=_learnMoreURL - In the implementation block
@property (nonatomic,copy) id learnMorePresentationHandler;                                              //@synthesize learnMorePresentationHandler=_learnMorePresentationHandler - In the implementation block
@property (nonatomic,copy) id continueActionHandler;                                                     //@synthesize continueActionHandler=_continueActionHandler - In the implementation block
@property (assign) BOOL preloadLearnMoreWebView;                                                         //@synthesize preloadLearnMoreWebView=_preloadLearnMoreWebView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)reason;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(void)setReason:(long long)arg1 ;
-(void)viewDidLoad;
-(id)webView;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(PKPaymentProvisioningController *)provisioningController;
-(void)setProvisioningController:(PKPaymentProvisioningController *)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)learnMoreURL;
-(void)setLearnMoreURL:(NSURL *)arg1 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)setContinueActionHandler:(id)arg1 ;
-(void)handleDone:(id)arg1 ;
-(id)_alertWithReason:(long long)arg1 learnMoreURL:(id)arg2 isPreloaded:(BOOL)arg3 ;
-(void)_webViewDidLoad:(BOOL)arg1 withError:(id)arg2 ;
-(id)initWithReason:(long long)arg1 context:(long long)arg2 setupDelegate:(id)arg3 ;
-(id)learnMorePresentationHandler;
-(void)setLearnMorePresentationHandler:(id)arg1 ;
-(id)continueActionHandler;
-(BOOL)preloadLearnMoreWebView;
-(void)setPreloadLearnMoreWebView:(BOOL)arg1 ;
@end

