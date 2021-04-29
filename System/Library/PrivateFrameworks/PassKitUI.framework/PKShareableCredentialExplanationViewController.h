/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKShareableCredentialsMessageComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class UIImage, NSArray, PKAddShareablePassConfiguration, PKShareableCredentialsMessageComposeViewController, PKHeroCardExplainationHeaderView, PKAssertion, NSMutableDictionary, NSString;

@interface PKShareableCredentialExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKShareableCredentialsMessageComposeViewControllerDelegate, PKPaymentSetupViewControllerDelegate> {

	UIImage* _passThumbnailImage;
	NSArray* _credentials;
	PKAddShareablePassConfiguration* _configuration;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	PKShareableCredentialsMessageComposeViewController* _messageComposeViewController;
	PKHeroCardExplainationHeaderView* _heroView;
	PKAssertion* _notificationSupressionAssertion;
	PKAssertion* _provisioningAssertion;
	NSMutableDictionary* _passToMoreItems;

}

@property (nonatomic,retain) UIImage * passThumbnailImage;                                                                   //@synthesize passThumbnailImage=_passThumbnailImage - In the implementation block
@property (nonatomic,retain) NSArray * credentials;                                                                          //@synthesize credentials=_credentials - In the implementation block
@property (nonatomic,retain) PKAddShareablePassConfiguration * configuration;                                                //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;                                  //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,retain) PKShareableCredentialsMessageComposeViewController * messageComposeViewController;              //@synthesize messageComposeViewController=_messageComposeViewController - In the implementation block
@property (nonatomic,retain) PKHeroCardExplainationHeaderView * heroView;                                                    //@synthesize heroView=_heroView - In the implementation block
@property (nonatomic,retain) PKAssertion * notificationSupressionAssertion;                                                  //@synthesize notificationSupressionAssertion=_notificationSupressionAssertion - In the implementation block
@property (nonatomic,retain) PKAssertion * provisioningAssertion;                                                            //@synthesize provisioningAssertion=_provisioningAssertion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * passToMoreItems;                                                          //@synthesize passToMoreItems=_passToMoreItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(PKAddShareablePassConfiguration *)configuration;
-(void)setConfiguration:(PKAddShareablePassConfiguration *)arg1 ;
-(void)viewDidLoad;
-(NSArray *)credentials;
-(UIImage *)passThumbnailImage;
-(void)setPassThumbnailImage:(UIImage *)arg1 ;
-(void)_invalidateAssertions;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)setHeroView:(PKHeroCardExplainationHeaderView *)arg1 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(void)viewController:(id)arg1 didFinishWithPasses:(id)arg2 error:(id)arg3 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)_handleNextStep;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(PKShareableCredentialsMessageComposeViewController *)messageComposeViewController;
-(void)setMessageComposeViewController:(PKShareableCredentialsMessageComposeViewController *)arg1 ;
-(id)initWithContext:(long long)arg1 setupDelegate:(id)arg2 credentials:(id)arg3 configuration:(id)arg4 ;
-(PKHeroCardExplainationHeaderView *)heroView;
-(void)_showProvisioningFlowWithCredentials:(id)arg1 ;
-(void)_terminateSetupFlowWithPasses:(id)arg1 error:(id)arg2 ;
-(void)_acquireAssertions;
-(void)_finishProvisioningFlowWithAddedPasses:(id)arg1 moreInfoItems:(id)arg2 ;
-(void)_showProvisioningErrorWithNumberOfPassesFailed:(long long)arg1 ;
-(void)_showMoreInfoViewControllerForPasses:(id)arg1 withItems:(id)arg2 showExpressEducationIfPresent:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setCredentials:(NSArray *)arg1 ;
-(PKAssertion *)notificationSupressionAssertion;
-(void)setNotificationSupressionAssertion:(PKAssertion *)arg1 ;
-(PKAssertion *)provisioningAssertion;
-(void)setProvisioningAssertion:(PKAssertion *)arg1 ;
-(NSMutableDictionary *)passToMoreItems;
-(void)setPassToMoreItems:(NSMutableDictionary *)arg1 ;
@end

