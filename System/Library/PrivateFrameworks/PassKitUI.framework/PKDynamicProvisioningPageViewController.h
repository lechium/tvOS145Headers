/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@class UIImage, PKDynamicProvisioningPageContent, NSString;

@interface PKDynamicProvisioningPageViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKViewControllerPreflightable> {

	UIImage* _heroImage;
	PKDynamicProvisioningPageContent* _page;
	/*^block*/id _primaryButtonAction;
	/*^block*/id _secondaryButtonAction;
	/*^block*/id _bodyButtonAction;
	/*^block*/id _cancelButtonAction;
	/*^block*/id _doneButtonAction;

}

@property (nonatomic,readonly) PKDynamicProvisioningPageContent * page;              //@synthesize page=_page - In the implementation block
@property (nonatomic,copy) id primaryButtonAction;                                   //@synthesize primaryButtonAction=_primaryButtonAction - In the implementation block
@property (nonatomic,copy) id secondaryButtonAction;                                 //@synthesize secondaryButtonAction=_secondaryButtonAction - In the implementation block
@property (nonatomic,copy) id bodyButtonAction;                                      //@synthesize bodyButtonAction=_bodyButtonAction - In the implementation block
@property (nonatomic,copy) id cancelButtonAction;                                    //@synthesize cancelButtonAction=_cancelButtonAction - In the implementation block
@property (nonatomic,copy) id doneButtonAction;                                      //@synthesize doneButtonAction=_doneButtonAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKDynamicProvisioningPageContent *)page;
-(void)viewDidLoad;
-(id)primaryButtonAction;
-(void)setPrimaryButtonAction:(id)arg1 ;
-(id)secondaryButtonAction;
-(void)setSecondaryButtonAction:(id)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)explanationViewDidSelectBodyButton:(id)arg1 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(void)explanationViewControllerDidSelectDone:(id)arg1 ;
-(id)initWithPage:(id)arg1 context:(long long)arg2 ;
-(void)setCancelButtonAction:(id)arg1 ;
-(void)setDoneButtonAction:(id)arg1 ;
-(void)setBodyButtonAction:(id)arg1 ;
-(id)bodyButtonAction;
-(id)cancelButtonAction;
-(id)doneButtonAction;
@end

