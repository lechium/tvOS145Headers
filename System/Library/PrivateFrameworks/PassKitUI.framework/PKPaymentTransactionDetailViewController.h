/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKContactResolverDelegate.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/PKTransactionDetailQuestionCellDelegate.h>
#import <libobjc.A.dylib/PKPaymentTransactionReportFraudConfirmationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKAccountServiceAccountResolutionControllerDelegate.h>
#import <libobjc.A.dylib/PKDashboardTransactionFetcherDelegate.h>

@protocol PKPaymentDataProvider;
@class PKPeerPaymentWebService, PKPeerPaymentController, PKPaymentTransaction, NSArray, PKTransactionReceipt, NSString, PKPaymentTransactionCellController, PKAccountServiceAccountResolutionController, PKCoarseLocationMonitor, PKFamilyMemberCollection, PKAccount, PKAccountUserCollection, PKDashboardTransactionFetcher, PKTransactionSourceCollection, PKPaymentTransactionDetailHeaderView, PKContactResolver, UIImage, PKPeerPaymentStatusResponse, NSDateFormatter, NSTimeZone;

@interface PKPaymentTransactionDetailViewController : PKSectionTableViewController <PKContactResolverDelegate, PKPaymentDataProviderDelegate, CNContactViewControllerDelegate, PKTransactionDetailQuestionCellDelegate, PKPaymentTransactionReportFraudConfirmationViewControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKDashboardTransactionFetcherDelegate> {

	long long _detailViewStyle;
	BOOL _showRawName;
	BOOL _showTransactionTimeZone;
	BOOL _showProductTimeZone;
	PKPeerPaymentWebService* _peerPaymentWebService;
	PKPeerPaymentController* _lazyPeerPaymentController;
	PKPaymentTransaction* _associatedRefund;
	PKPaymentTransaction* _associatedAdjustment;
	NSArray* _associatedInstallmentPlans;
	PKTransactionReceipt* _associatedReceipt;
	BOOL _suppressReceiptImages;
	NSString* _transactionExplanation;
	PKPaymentTransactionCellController* _transactionCellController;
	PKAccountServiceAccountResolutionController* _accountResolutionController;
	BOOL _allowTransactionLinks;
	PKCoarseLocationMonitor* _coarseLocationMonitor;
	PKFamilyMemberCollection* _familyCollection;
	PKAccount* _account;
	PKAccountUserCollection* _accountUserCollection;
	NSString* _submittingAnswer;
	PKDashboardTransactionFetcher* _transactionFetcher;
	BOOL _issuerAppDeepLinkingEnabled;
	BOOL _inBridge;
	PKPaymentTransaction* _transaction;
	PKTransactionSourceCollection* _transactionSourceCollection;
	id<PKPaymentDataProvider> _paymentServiceDataProvider;
	PKPaymentTransactionDetailHeaderView* _headerView;
	PKContactResolver* _contactResolver;
	UIImage* _mapTilePlaceholderImage;
	NSArray* _lineItems;
	PKPeerPaymentStatusResponse* _peerPaymentStatusResponse;
	NSDateFormatter* _transactionDateFormatter;
	NSDateFormatter* _transactionLocalTimeDateFormatter;
	NSDateFormatter* _productTimeZoneFormatter;
	NSTimeZone* _productTimeZone;

}

@property (nonatomic,retain) PKPaymentTransactionDetailHeaderView * headerView;                          //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) PKContactResolver * contactResolver;                                        //@synthesize contactResolver=_contactResolver - In the implementation block
@property (assign,nonatomic) BOOL issuerAppDeepLinkingEnabled;                                           //@synthesize issuerAppDeepLinkingEnabled=_issuerAppDeepLinkingEnabled - In the implementation block
@property (assign,nonatomic) BOOL inBridge;                                                              //@synthesize inBridge=_inBridge - In the implementation block
@property (nonatomic,retain) UIImage * mapTilePlaceholderImage;                                          //@synthesize mapTilePlaceholderImage=_mapTilePlaceholderImage - In the implementation block
@property (nonatomic,retain) NSArray * lineItems;                                                        //@synthesize lineItems=_lineItems - In the implementation block
@property (nonatomic,retain) PKPeerPaymentStatusResponse * peerPaymentStatusResponse;                    //@synthesize peerPaymentStatusResponse=_peerPaymentStatusResponse - In the implementation block
@property (nonatomic,retain) NSDateFormatter * transactionDateFormatter;                                 //@synthesize transactionDateFormatter=_transactionDateFormatter - In the implementation block
@property (nonatomic,retain) NSDateFormatter * transactionLocalTimeDateFormatter;                        //@synthesize transactionLocalTimeDateFormatter=_transactionLocalTimeDateFormatter - In the implementation block
@property (nonatomic,retain) NSDateFormatter * productTimeZoneFormatter;                                 //@synthesize productTimeZoneFormatter=_productTimeZoneFormatter - In the implementation block
@property (nonatomic,retain) NSTimeZone * productTimeZone;                                               //@synthesize productTimeZone=_productTimeZone - In the implementation block
@property (nonatomic,readonly) PKPaymentTransaction * transaction;                                       //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) PKTransactionSourceCollection * transactionSourceCollection;              //@synthesize transactionSourceCollection=_transactionSourceCollection - In the implementation block
@property (nonatomic,readonly) id<PKPaymentDataProvider> paymentServiceDataProvider;                     //@synthesize paymentServiceDataProvider=_paymentServiceDataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(PKPaymentTransaction *)transaction;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(PKPaymentTransactionDetailHeaderView *)headerView;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)setHeaderView:(PKPaymentTransactionDetailHeaderView *)arg1 ;
-(NSArray *)lineItems;
-(NSTimeZone *)productTimeZone;
-(void)setProductTimeZone:(NSTimeZone *)arg1 ;
-(void)setLineItems:(NSArray *)arg1 ;
-(void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(void)didUpdateFamilyMembers:(id)arg1 ;
-(void)transactionWithIdentifier:(id)arg1 didDownloadTransactionReceipt:(id)arg2 ;
-(void)contactsDidChangeForContactResolver:(id)arg1 ;
-(PKContactResolver *)contactResolver;
-(id<PKPaymentDataProvider>)paymentServiceDataProvider;
-(void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(PKTransactionSourceCollection *)transactionSourceCollection;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(void)setContactResolver:(PKContactResolver *)arg1 ;
-(id)initWithTransaction:(id)arg1 transactionSourceCollection:(id)arg2 familyCollection:(id)arg3 account:(id)arg4 accountUserCollection:(id)arg5 contactResolver:(id)arg6 peerPaymentWebService:(id)arg7 paymentServiceDataProvider:(id)arg8 detailViewStyle:(long long)arg9 allowTransactionLinks:(BOOL)arg10 ;
-(void)didReportFraudInViewController:(id)arg1 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(BOOL)inBridge;
-(void)setInBridge:(BOOL)arg1 ;
-(void)transactionsChanged:(id)arg1 ;
-(void)_updateTableHeaderHeight;
-(void)_handleCoarseLocationChangedNotification:(id)arg1 ;
-(void)submitAnswer:(id)arg1 ;
-(id)_explanationTextForPaymentTransaction:(id)arg1 ;
-(void)_recomputeLineItems;
-(void)_reloadTableHeaderView;
-(void)_updateWithTransactionReceipt:(id)arg1 ;
-(long long)_numberOfActionRowsEnabled;
-(id)_peerPaymentController;
-(void)_updatePeerPaymentTransactionStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)formattedBalanceAdjustmentAmountWithTransitDescriptors;
-(void)_handleTransactionHeaderTapRecognizer:(id)arg1 ;
-(unsigned long long)_numberOfAmountDetailsRows;
-(id)_amountDetailsCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_questionCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_fraudRiskCellForTableView:(id)arg1 ;
-(id)_merchantAddressCellForTableView:(id)arg1 ;
-(id)_associatedInstallmentCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_tableView:(id)arg1 cellForAwardAtIndex:(long long)arg2 ;
-(id)_tableView:(id)arg1 cellForActionAtIndex:(long long)arg2 ;
-(id)_transactionIdentifierCellForTableView:(id)arg1 ;
-(id)_debugDetailCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_tableView:(id)arg1 willDisplayAmountDetailsCell:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_tableView:(id)arg1 didSelectMechantAddressAtIndexPath:(id)arg2 ;
-(void)_openOfferDetailsInIssuerApp:(id)arg1 ;
-(void)_tableView:(id)arg1 didSelectActionAtIndexPath:(id)arg2 ;
-(void)_showInstallmentDetailsForAssociatedInstallment:(id)arg1 ;
-(id)_coarseLocationHyperlinkFooterView;
-(unsigned long long)_actionRowForRowIndex:(long long)arg1 ;
-(BOOL)_shouldHighlightAction:(unsigned long long)arg1 ;
-(void)_handlePeerPaymentDisplayableError:(id)arg1 withPeerPaymentController:(id)arg2 ;
-(BOOL)_actionRowIsEnabled:(unsigned long long)arg1 ;
-(id)_tableView:(id)arg1 actionButtonCellForSection:(unsigned long long)arg2 ;
-(id)_awardCellForTableView:(id)arg1 ;
-(void)_openTransactionInIssuerApp;
-(void)_openMessagesToPresentAction:(unsigned long long)arg1 ;
-(void)_tableView:(id)arg1 didSelectPeerPaymentAction:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_presentReportIssue;
-(void)_presentContactViewController;
-(void)_performPeerPaymentAction:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_openBusinessChatControllerForContext:(id)arg1 ;
-(BOOL)_amountDetailsRowIsEnabled:(unsigned long long)arg1 ;
-(unsigned long long)_amountDetailsRowForIndex:(unsigned long long)arg1 ;
-(id)_statusCellForTableView:(id)arg1 ;
-(unsigned long long)_lineItemItemForRowIndex:(unsigned long long)arg1 ;
-(id)_tableView:(id)arg1 cellForAmountDetailLineItemAtIndex:(long long)arg2 atIndexPath:(id)arg3 ;
-(id)_transactionStatusString;
-(void)_applyAmountDetailSeparatorInsetForTableView:(id)arg1 cell:(id)arg2 ;
-(id)_transactionIdentifierDescription;
-(void)_presentPhysicalCardSuspendedAlert;
-(void)_presentCardNumberUpdatedAlert;
-(long long)_rowIndexForActionRow:(unsigned long long)arg1 ;
-(BOOL)_transactionHasNonZeroSecondaryFundingSourceAmount;
-(id)_mapTilePlaceholderImage;
-(BOOL)issuerAppDeepLinkingEnabled;
-(void)setIssuerAppDeepLinkingEnabled:(BOOL)arg1 ;
-(UIImage *)mapTilePlaceholderImage;
-(void)setMapTilePlaceholderImage:(UIImage *)arg1 ;
-(PKPeerPaymentStatusResponse *)peerPaymentStatusResponse;
-(void)setPeerPaymentStatusResponse:(PKPeerPaymentStatusResponse *)arg1 ;
-(NSDateFormatter *)transactionDateFormatter;
-(void)setTransactionDateFormatter:(NSDateFormatter *)arg1 ;
-(NSDateFormatter *)transactionLocalTimeDateFormatter;
-(void)setTransactionLocalTimeDateFormatter:(NSDateFormatter *)arg1 ;
-(NSDateFormatter *)productTimeZoneFormatter;
-(void)setProductTimeZoneFormatter:(NSDateFormatter *)arg1 ;
@end

