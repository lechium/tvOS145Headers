/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKPeerPaymentActionViewController.h>
#import <libobjc.A.dylib/_PKUIKVisibilityBackdropViewDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentActionControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/PKEnterCurrencyAmountPassViewDelegate.h>

@class NSArray, NSNumberFormatter, NSDecimalNumberHandler, PKPaymentPass, PKAnimatedNavigationBarTitleView, UITableView, UIImageView, _PKUIKVisibilityBackdropView, UILabel, PKEnterCurrencyAmountPassTableHeaderFooterView, NSDecimalNumber, NSString;

@interface PKPeerPaymentActionTransferToBankViewController : PKPeerPaymentActionViewController <_PKUIKVisibilityBackdropViewDelegate, PKPeerPaymentActionControllerDelegate, UITableViewDelegate, UITableViewDataSource, PKEnterCurrencyAmountPassViewDelegate> {

	NSArray* _supportedTransferActions;
	NSNumberFormatter* _currencyFormatter;
	NSNumberFormatter* _percentageFormatter;
	NSDecimalNumberHandler* _roundingHandler;
	PKPaymentPass* _defaultInstantFundsOutPaymentPass;
	BOOL _isSmallPhone;
	BOOL _usesAccessibilityLayout;
	PKAnimatedNavigationBarTitleView* _passNavbarTitleView;
	UITableView* _tableView;
	UIImageView* _navbarPassView;
	_PKUIKVisibilityBackdropView* _backdropView;
	UILabel* _footerTextLabel;
	PKEnterCurrencyAmountPassTableHeaderFooterView* _tableHeaderView;
	NSDecimalNumber* _feePercentage;
	NSDecimalNumber* _minimumFee;
	NSDecimalNumber* _maximumFee;
	double _backdropWeight;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)setMinBalance:(id)arg1 ;
-(void)setMaxBalance:(id)arg1 ;
-(void)setMinLoadAmount:(id)arg1 ;
-(void)setMaxLoadAmount:(id)arg1 ;
-(void)setCardBalance:(id)arg1 ;
-(void)enterCurrencyAmountPassViewDidLoadPassSnapshot:(id)arg1 ;
-(id)_amountPassView;
-(id)initWithPaymentPass:(id)arg1 webService:(id)arg2 passLibraryDataProvider:(id)arg3 context:(long long)arg4 ;
-(void)updateAccountValues;
-(void)peerPaymentActionController:(id)arg1 hasChangedState:(unsigned long long)arg2 ;
-(void)_showNavigationBarSpinner:(BOOL)arg1 ;
-(id)_spinnerBarButton;
-(long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2 ;
-(void)_calculateBlur;
-(void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2 ;
-(void)_updateBarButtonEnabledState;
-(void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2 ;
-(BOOL)_isCurrentAmountValid;
-(id)_defaultInstantFundsOutPaymentPass;
-(id)_transferBarButton;
-(BOOL)_passViewInNavBar;
-(void)_updateFooterText;
-(void)_updateTableHeaderHeight;
-(id)_calculateFee;
-(id)_detailTextForAction:(unsigned long long)arg1 ;
-(id)_indexPathForAction:(unsigned long long)arg1 ;
-(void)_transferBarButtonPressed:(id)arg1 ;
-(void)_dismissViewController:(id)arg1 ;
@end

