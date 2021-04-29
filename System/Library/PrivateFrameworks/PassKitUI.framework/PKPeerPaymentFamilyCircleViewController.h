/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PKPeerPaymentAssociatedAccountSetupDelegate.h>

@protocol PKPassLibraryDataProvider;
@class PKPaymentService, PKFamilyMemberCollection, PKPeerPaymentService, PKPeerPaymentAccount, NSArray, PKContactAvatarManager, NSString;

@interface PKPeerPaymentFamilyCircleViewController : UITableViewController <PKPeerPaymentAssociatedAccountSetupDelegate> {

	PKPaymentService* _paymentService;
	PKFamilyMemberCollection* _familyCollection;
	PKPeerPaymentService* _peerPaymentService;
	PKPeerPaymentAccount* _account;
	BOOL _loadingFamily;
	NSArray* _sortedRows;
	PKContactAvatarManager* _avatarManager;
	id<PKPassLibraryDataProvider> _passLibraryDataProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)_loadAvatarImagesIfNecessary;
-(void)_peerPaymentAccountChanged:(id)arg1 ;
-(void)_handleRowTapped:(id)arg1 ;
-(id)_pendingInvitations;
-(void)_reloadSortedRows;
-(void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(BOOL)arg1 updatedAccount:(id)arg2 forFamilyMember:(id)arg3 ;
-(void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)arg1 ;
-(id)initWithFamilyCollection:(id)arg1 avatarManager:(id)arg2 passLibraryDataProvider:(id)arg3 ;
-(id)_familyMemberWithDSID:(id)arg1 ;
@end

