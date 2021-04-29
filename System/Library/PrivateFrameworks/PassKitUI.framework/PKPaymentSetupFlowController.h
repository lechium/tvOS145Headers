/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKSetupFlowControllerProtocol.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPasscodeUpgradeFlowController, PKPaymentProvisioningController, NSString;

@interface PKPaymentSetupFlowController : NSObject <PKSetupFlowControllerProtocol> {

	PKPasscodeUpgradeFlowController* _passcodeUpgradeFlowController;
	PKPaymentProvisioningController* _provisioningController;
	long long _setupContext;
	id<PKPaymentSetupViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) PKPaymentProvisioningController * provisioningController;              //@synthesize provisioningController=_provisioningController - In the implementation block
@property (nonatomic,readonly) long long setupContext;                                                //@synthesize setupContext=_setupContext - In the implementation block
@property (nonatomic,__weak,readonly) id<PKPaymentSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKPaymentSetupViewControllerDelegate>)delegate;
-(long long)setupContext;
-(PKPaymentProvisioningController *)provisioningController;
-(void)nextViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 ;
-(id)nextQueuedCredentialViewControllerWithSetupProduct:(id)arg1 allowsManualEntry:(BOOL)arg2 ;
-(id)manualEntryPaymentSetupViewControllerForProduct:(id)arg1 allowsSelectingBank:(BOOL)arg2 ;
-(id)nextQueuedCredentialViewControllerWithSetupProduct:(id)arg1 state:(long long)arg2 allowsManualEntry:(BOOL)arg3 ;
-(id)paymentSetupViewControllerForAssociatedCredentials:(id)arg1 product:(id)arg2 allowsManualEntry:(BOOL)arg3 ;
-(void)presentPasscodeUpgradeOnViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_paymentSetupViewControllerForAssociatedCredential:(id)arg1 product:(id)arg2 allowsManualEntry:(BOOL)arg3 ;
-(id)_defaultPaymentSetupViewControllerAllowingManualEntry:(BOOL)arg1 ;
-(id)_onboardingViewControllerForProduct:(id)arg1 ;
-(id)_barcodePaymentOnboardingViewControllerForProduct:(id)arg1 ;
-(id)_offerOptionalExpressModeSetup;
-(id)_watchExtensionInstallationViewController;
-(id)_nextPaymentCredentialControllerWithSetupProduct:(id)arg1 allowsManualEntry:(BOOL)arg2 ;
-(id)_offerMakeDefaultViewController;
-(id)_offerAMPEnrollmentViewController;
-(id)_educationViewControllerShouldShow;
-(id)initialPaymentSetupViewControllerForMode:(long long)arg1 allowsManualEntry:(BOOL)arg2 ;
@end

