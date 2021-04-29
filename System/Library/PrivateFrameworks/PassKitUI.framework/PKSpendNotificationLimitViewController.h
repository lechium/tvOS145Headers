/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSIndexPath, UITableViewDiffableDataSource;

@interface PKSpendNotificationLimitViewController : UITableViewController {

	NSArray* _options;
	NSIndexPath* _selectedIndexPath;
	UITableViewDiffableDataSource* _dataSource;
	/*^block*/id _changeHandler;

}

@property (nonatomic,copy) id changeHandler;              //@synthesize changeHandler=_changeHandler - In the implementation block
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)setChangeHandler:(id)arg1 ;
-(id)changeHandler;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_updateSnapshotAnimated:(BOOL)arg1 ;
-(void)_setSelectedIndexPath:(id)arg1 ;
-(id)initWithTitle:(id)arg1 options:(id)arg2 selectedOption:(id)arg3 ;
@end
