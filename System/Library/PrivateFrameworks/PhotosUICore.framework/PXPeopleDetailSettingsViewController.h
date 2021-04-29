/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXPeopleDataSourceDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class PXPeoplePersonDataSource, UICollectionView, PXPeopleSuggestionDataSource, NSString;

@interface PXPeopleDetailSettingsViewController : UIViewController <PXPeopleDataSourceDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	PXPeoplePersonDataSource* _dataSource;
	UICollectionView* _collectionView;
	PXPeopleSuggestionDataSource* _suggestionDataSource;

}

@property (retain) PXPeoplePersonDataSource * dataSource;                                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) PXPeopleSuggestionDataSource * suggestionDataSource;              //@synthesize suggestionDataSource=_suggestionDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(PXPeoplePersonDataSource *)dataSource;
-(void)commonInit;
-(void)viewDidLoad;
-(void)setDataSource:(PXPeoplePersonDataSource *)arg1 ;
-(UICollectionView *)collectionView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void)peopleDataSourceMembersChanged:(id)arg1 ;
-(void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2 ;
-(void)loadSuggestionsForPerson:(id)arg1 ;
-(PXPeopleSuggestionDataSource *)suggestionDataSource;
-(void)setSuggestionDataSource:(PXPeopleSuggestionDataSource *)arg1 ;
@end

