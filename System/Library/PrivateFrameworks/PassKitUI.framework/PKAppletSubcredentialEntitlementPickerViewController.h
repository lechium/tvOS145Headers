/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKPaymentSetupTableViewController.h>
#import <libobjc.A.dylib/PKSubcredentialMessageComposeViewControllerDelegate.h>

@protocol PKAppletSubcredentialSharingExplanationViewControllerDelegate;
@class PKPaymentPass, PKSharedCredentialsGroupController, PKAppletSubcredentialSharingRequest, NSArray, PKSubcredentialMessageComposeViewController, NSString;

@interface PKAppletSubcredentialEntitlementPickerViewController : PKPaymentSetupTableViewController <PKSubcredentialMessageComposeViewControllerDelegate> {

	PKPaymentPass* _pass;
	PKSharedCredentialsGroupController* _groupController;
	PKAppletSubcredentialSharingRequest* _sharingRequest;
	NSArray* _supportedEntitlements;
	long long _selectedEntitlementIndex;
	id<PKAppletSubcredentialSharingExplanationViewControllerDelegate> _delegate;
	BOOL _isSharing;
	PKSubcredentialMessageComposeViewController* _messageComposeViewController;

}

@property (nonatomic,retain) PKSubcredentialMessageComposeViewController * messageComposeViewController;              //@synthesize messageComposeViewController=_messageComposeViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)handleSharedButton;
-(void)messageComposeViewControllerDidFinishWithResult:(BOOL)arg1 ;
-(id)initWithSharedCredentialsGroupController:(id)arg1 delegate:(id)arg2 sharingRequest:(id)arg3 ;
-(PKSubcredentialMessageComposeViewController *)messageComposeViewController;
-(void)setMessageComposeViewController:(PKSubcredentialMessageComposeViewController *)arg1 ;
@end

