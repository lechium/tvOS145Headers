/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol MKBrowseCategoryViewControllerDelegate;
@class NSArray, MKBrowseCategoryCollectionView, MKFixedToTopCollectionViewFlowLayout, NSLayoutConstraint, UIFont, UIColor, MKMapItem, NSString;

@interface MKBrowseCategoryViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, MKModuleViewControllerProtocol> {

	id<MKBrowseCategoryViewControllerDelegate> _delegate;
	NSArray* _browseItems;
	MKBrowseCategoryCollectionView* _collectionView;
	MKFixedToTopCollectionViewFlowLayout* _collectionViewFlowLayout;
	NSLayoutConstraint* _collectionViewBottomConstraint;
	UIFont* _preferredCellTitleLabelFont;
	UIColor* _cellTitleLabelTextColor;
	MKMapItem* _mapItem;
	CGSize _preferredCellSize;

}

@property (nonatomic,retain) NSArray * browseItems;                                                        //@synthesize browseItems=_browseItems - In the implementation block
@property (nonatomic,retain) MKBrowseCategoryCollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) MKFixedToTopCollectionViewFlowLayout * collectionViewFlowLayout;              //@synthesize collectionViewFlowLayout=_collectionViewFlowLayout - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * collectionViewBottomConstraint;                          //@synthesize collectionViewBottomConstraint=_collectionViewBottomConstraint - In the implementation block
@property (assign,nonatomic) CGSize preferredCellSize;                                                     //@synthesize preferredCellSize=_preferredCellSize - In the implementation block
@property (nonatomic,retain) UIFont * preferredCellTitleLabelFont;                                         //@synthesize preferredCellTitleLabelFont=_preferredCellTitleLabelFont - In the implementation block
@property (nonatomic,retain) UIColor * cellTitleLabelTextColor;                                            //@synthesize cellTitleLabelTextColor=_cellTitleLabelTextColor - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                          //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKBrowseCategoryViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MKBrowseCategoryViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MKBrowseCategoryViewControllerDelegate>)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(id)initWithMapItem:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(MKBrowseCategoryCollectionView *)collectionView;
-(void)viewDidLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(MKBrowseCategoryCollectionView *)arg1 ;
-(void)infoCardThemeChanged;
-(id)willStartDisplayCategoriesNotificationName;
-(void)_ppt_postNotificationName:(id)arg1 object:(id)arg2 ;
-(void)setBrowseItems:(NSArray *)arg1 ;
-(void)setupCollectionView;
-(void)setCollectionViewFlowLayout:(MKFixedToTopCollectionViewFlowLayout *)arg1 ;
-(MKFixedToTopCollectionViewFlowLayout *)collectionViewFlowLayout;
-(double)collectionViewBottomPadding;
-(void)setCollectionViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)collectionViewBottomConstraint;
-(void)updateCellTitleLabelTextColor;
-(UIFont *)preferredCellTitleLabelFont;
-(CGSize)preferredCellSize;
-(void)setPreferredCellSize:(CGSize)arg1 ;
-(void)setPreferredCellTitleLabelFont:(UIFont *)arg1 ;
-(NSArray *)browseItems;
-(id)didDisplayCategoriesNotificationName;
-(void)setCellTitleLabelTextColor:(UIColor *)arg1 ;
-(int)placeCardTypeForAnalytics;
-(UIColor *)cellTitleLabelTextColor;
@end

