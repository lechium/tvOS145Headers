/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKSectionTableViewController.h>

@class PKPhysicalCardController, UIBarButtonItem, PKOrderPhysicalCardController;

@interface PKReplacePhysicalCardReasonViewController : PKSectionTableViewController {

	PKPhysicalCardController* _controller;
	long long _context;
	unsigned long long _feature;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _nextButton;
	BOOL _hasSelectedRow;
	long long _selectedRow;
	BOOL _loadingCustomizationOptions;
	PKOrderPhysicalCardController* _orderController;

}
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)_cancelButtonPressed:(id)arg1 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(id)initWithPhysicalCardController:(id)arg1 context:(long long)arg2 ;
-(void)_updateNavigationButtons;
-(void)_nextButtonPressed:(id)arg1 ;
-(id)_cellForReasonAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(void)_reasonRowSelectedAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
@end

