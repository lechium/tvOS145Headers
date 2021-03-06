/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>

@protocol PKAddPaymentPassDevicePickerDelegate;
@class PKTableHeaderView, NSArray, PKAddPaymentPassRequestConfiguration;

@interface PKAddPaymentPassDevicePickerViewController : UITableViewController {

	PKTableHeaderView* _headerView;
	NSArray* _webServices;
	PKAddPaymentPassRequestConfiguration* _configuration;
	BOOL _viewHasAppeared;
	BOOL _sentViewHasAppearedEvent;
	id<PKAddPaymentPassDevicePickerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKAddPaymentPassDevicePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<PKAddPaymentPassDevicePickerDelegate>)delegate;
-(void)setDelegate:(id<PKAddPaymentPassDevicePickerDelegate>)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)initWithPaymentWebServices:(id)arg1 configuration:(id)arg2 ;
-(void)reloadContentFromWebServices;
-(void)noteNavigationUserInterfaceDidDisappear;
@end

