/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKOnBoardingViewController.h>

@class PKApplyController, PKAccount, NSMutableArray, PKPaymentInstallmentConfiguration;

@interface PKFeatureOnBoardingViewController : PKOnBoardingViewController {

	unsigned long long _featureIdentifier;
	PKApplyController* _applyController;
	BOOL _isMainFeatureOnboardingPage;
	BOOL _useCompactLayout;
	BOOL _didBeginOnboardingSubject;
	PKAccount* _defaultFeatureAccount;
	BOOL _fetchedDefaultFeatureAccount;
	long long _onboardingContext;
	NSMutableArray* _defaultFeatureAccountCompletions;
	PKPaymentInstallmentConfiguration* _installmentConfiguration;

}

@property (nonatomic,retain) PKPaymentInstallmentConfiguration * installmentConfiguration;              //@synthesize installmentConfiguration=_installmentConfiguration - In the implementation block
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(PKPaymentInstallmentConfiguration *)installmentConfiguration;
-(void)setInstallmentConfiguration:(PKPaymentInstallmentConfiguration *)arg1 ;
-(void)_beginReportingIfNecessary;
-(id)initWithParentFlowController:(id)arg1 setupDelegate:(id)arg2 setupContext:(long long)arg3 onboardingContext:(long long)arg4 featureIdentifier:(unsigned long long)arg5 provisioningController:(id)arg6 paymentSetupProduct:(id)arg7 currentPage:(id)arg8 ;
-(void)_reportAnalyticsViewDidAppear:(BOOL)arg1 ;
-(void)_endReportingIfNecessary;
-(void)_defaultFeatureAccountAnalyticsWithCompletion:(/*^block*/id)arg1 ;
-(void)_openTermsAndConditions;
-(void)_reportContinueTapped;
-(void)_handleAccountCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_checkSecurityCapabilities:(unsigned long long)arg1 nextStep:(/*^block*/id)arg2 ;
-(void)_handleApplyFlowWithCompletion:(/*^block*/id)arg1 ;
-(void)_defaultFeaureAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)handleSetupLater;
-(void)handleProductAvailable;
-(id)nextOnboardingViewControllerWithPage:(id)arg1 product:(id)arg2 ;
@end
