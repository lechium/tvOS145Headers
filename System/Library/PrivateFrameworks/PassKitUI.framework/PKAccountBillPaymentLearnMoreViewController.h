/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class PKAccount, UIScrollView, NSString, NSArray, UILabel, UITextView;

@interface PKAccountBillPaymentLearnMoreViewController : UIViewController <UITextViewDelegate, UIScrollViewDelegate> {

	PKAccount* _account;
	UIScrollView* _scrollView;
	NSString* _titleText;
	NSString* _subtitleText;
	NSArray* _suggestionDescriptions;
	NSArray* _footnotes;
	NSString* _customerAgreementText;
	NSString* _customerAgreementLinkText;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSArray* _suggestionDescriptionLabels;
	NSArray* _footnoteLabels;
	UITextView* _customerAgreementTextView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAccount:(id)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)doneButtonTapped;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)_reportEventForPassIfNecessary:(id)arg1 ;
-(id)_customerAgreementAttributedString;
@end

