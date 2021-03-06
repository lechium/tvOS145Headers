/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>

@protocol PKTransitTicketDetailDataSource;
@class UIColor;

@interface PKTransitTicketDetailViewController : UITableViewController {

	UIColor* _primaryTextColor;
	UIColor* _secondaryTextColor;
	id<PKTransitTicketDetailDataSource> _dataSource;

}

@property (nonatomic,retain) UIColor * primaryTextColor;                                         //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryTextColor;                                       //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (assign,nonatomic,__weak) id<PKTransitTicketDetailDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id<PKTransitTicketDetailDataSource>)dataSource;
-(UIColor *)primaryTextColor;
-(UIColor *)secondaryTextColor;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(void)viewDidLoad;
-(void)setDataSource:(id<PKTransitTicketDetailDataSource>)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithTransitTicketDetailDataSource:(id)arg1 ;
-(void)_applyDefaultStaticStylingToCell:(id)arg1 ;
@end

