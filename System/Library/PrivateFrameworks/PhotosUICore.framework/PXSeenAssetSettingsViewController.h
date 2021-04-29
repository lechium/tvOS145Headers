/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, PHFetchResult, NSString;

@interface PXSeenAssetSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	PHFetchResult* _fetchResult;

}

@property (nonatomic,retain) UITableView * tableView;                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) PHFetchResult * fetchResult;              //@synthesize fetchResult=_fetchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(PHFetchResult *)fetchResult;
-(UITableView *)tableView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setFetchResult:(PHFetchResult *)arg1 ;
-(id)_suggestedSeenFetchOptions;
-(void)_fetchSeenAssetsAndReload:(BOOL)arg1 ;
-(long long)_recommendedVariationTypeForAsset:(id)arg1 ;
-(void)_presentConfirmationForAssetAtIndexPath:(id)arg1 ;
-(void)_markVariationsAsUnseenForAssetAtIndexPath:(id)arg1 ;
@end

