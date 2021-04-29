/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>

@protocol VSIdentityProviderSearchResultsViewControllerDelegate;
@class VSIdentityProviderTableViewDataSource, VSOnboardingInfoCenter, UILabel, NSString;

@interface VSIdentityProviderSearchResultsViewController_tvOS : UIViewController <UITableViewDelegate> {

	id<VSIdentityProviderSearchResultsViewControllerDelegate> _delegate;
	VSIdentityProviderTableViewDataSource* _dataSource;
	VSOnboardingInfoCenter* _onboardingInfoCenter;
	UILabel* _footerLabel;

}

@property (nonatomic,retain) VSIdentityProviderTableViewDataSource * dataSource;                                     //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) VSOnboardingInfoCenter * onboardingInfoCenter;                                          //@synthesize onboardingInfoCenter=_onboardingInfoCenter - In the implementation block
@property (nonatomic,retain) UILabel * footerLabel;                                                                  //@synthesize footerLabel=_footerLabel - In the implementation block
@property (assign,nonatomic,__weak) id<VSIdentityProviderSearchResultsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<VSIdentityProviderSearchResultsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VSIdentityProviderSearchResultsViewControllerDelegate>)arg1 ;
-(VSIdentityProviderTableViewDataSource *)dataSource;
-(void)viewDidLoad;
-(void)setDataSource:(VSIdentityProviderTableViewDataSource *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1 ;
-(UILabel *)footerLabel;
-(void)setFooterLabel:(UILabel *)arg1 ;
-(void)_updateFooter;
-(id)initWithIdentityProviderDataSource:(id)arg1 ;
-(void)_didSelectStorefront:(id)arg1 ;
-(void)_didSelectProvider:(id)arg1 ;
-(void)_didSelectAdditionalProviders;
-(VSOnboardingInfoCenter *)onboardingInfoCenter;
-(void)setOnboardingInfoCenter:(VSOnboardingInfoCenter *)arg1 ;
@end
