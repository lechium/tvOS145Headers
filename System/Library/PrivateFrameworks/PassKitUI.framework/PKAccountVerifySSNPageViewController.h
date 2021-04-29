/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKPaymentSetupFieldsViewController.h>

@class PKAccount;

@interface PKAccountVerifySSNPageViewController : PKPaymentSetupFieldsViewController {

	PKAccount* _account;
	BOOL _isLoading;

}
-(void)viewDidLoad;
-(id)initWithAccount:(id)arg1 context:(long long)arg2 ;
-(void)_terminateFlow;
-(void)_showSpinner:(BOOL)arg1 ;
-(void)_handleNextStep;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(void)_cancelPressed;
@end

