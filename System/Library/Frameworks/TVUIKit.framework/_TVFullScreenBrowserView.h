/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <TVUIKit/_TVCollectionViewDelegateFullScreenBrowserLayout.h>

@protocol _TVFullScreenBrowserViewDelegate, _TVFullScreenBrowserViewDataSource;
@class UICollectionView, _TVCollectionViewFullScreenBrowserLayout, _TVFullScreenBrowserTransitionContext, _TVFullScreenBrowserCenterCellContext, NSIndexPath, NSArray, NSString;

@interface _TVFullScreenBrowserView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, _TVCollectionViewDelegateFullScreenBrowserLayout> {

	struct {
		BOOL respondsToNumberOfSections;
	}  _dataSourceFlags;
	struct {
		BOOL respondsToIndexPathForPreferredCenteredCell;
		BOOL respondsToWillDisplayCell;
		BOOL respondsToDidEndDisplayingCell;
		BOOL respondsToWillCenterCell;
		BOOL respondsToDidCenterCell;
		BOOL respondsToShouldShowItemAtIndexPath;
	}  _delegateFlags;
	id<_TVFullScreenBrowserViewDelegate> _delegate;
	id<_TVFullScreenBrowserViewDataSource> _dataSource;
	double _maskCornerRadius;
	double _interitemSpacing;
	double _parallaxFactor;
	double _maskAmount;
	UICollectionView* _collectionView;
	_TVCollectionViewFullScreenBrowserLayout* _paradeLayout;
	_TVFullScreenBrowserTransitionContext* _transitionContext;
	_TVFullScreenBrowserCenterCellContext* _centerCellContext;
	UIEdgeInsets _maskInset;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                                    //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) _TVCollectionViewFullScreenBrowserLayout * paradeLayout;              //@synthesize paradeLayout=_paradeLayout - In the implementation block
@property (nonatomic,retain) _TVFullScreenBrowserTransitionContext * transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,retain) _TVFullScreenBrowserCenterCellContext * centerCellContext;              //@synthesize centerCellContext=_centerCellContext - In the implementation block
@property (assign,nonatomic,__weak) id<_TVFullScreenBrowserViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<_TVFullScreenBrowserViewDataSource> dataSource;               //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) UIEdgeInsets maskInset;                                                 //@synthesize maskInset=_maskInset - In the implementation block
@property (assign,nonatomic) double maskCornerRadius;                                                //@synthesize maskCornerRadius=_maskCornerRadius - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                                                //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) double parallaxFactor;                                                  //@synthesize parallaxFactor=_parallaxFactor - In the implementation block
@property (nonatomic,readonly) NSIndexPath * centerIndexPath; 
@property (assign,nonatomic) double maskAmount;                                                      //@synthesize maskAmount=_maskAmount - In the implementation block
@property (nonatomic,readonly) NSArray * visibleCells; 
@property (nonatomic,readonly) NSArray * indexPathsForVisibleItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_TVFullScreenBrowserViewDelegate>)delegate;
-(void)setDelegate:(id<_TVFullScreenBrowserViewDelegate>)arg1 ;
-(_TVFullScreenBrowserTransitionContext *)transitionContext;
-(void)setTransitionContext:(_TVFullScreenBrowserTransitionContext *)arg1 ;
-(id<_TVFullScreenBrowserViewDataSource>)dataSource;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<_TVFullScreenBrowserViewDataSource>)arg1 ;
-(long long)_numberOfSections;
-(UICollectionView *)collectionView;
-(void)layoutSubviews;
-(void)reloadData;
-(NSArray *)visibleCells;
-(void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2 ;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(NSArray *)indexPathsForVisibleItems;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)cellForItemAtIndexPath:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(double)interitemSpacing;
-(UIEdgeInsets)maskInset;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)setMaskInset:(UIEdgeInsets)arg1 ;
-(double)maskAmount;
-(void)setMaskCornerRadius:(double)arg1 ;
-(void)setMaskAmount:(double)arg1 ;
-(NSIndexPath *)centerIndexPath;
-(void)transitionWithLayoutAttributes:(id)arg1 animator:(/*^block*/id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldShowItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 centerIndexPathDidChangeForLayout:(id)arg2 ;
-(void)collectionView:(id)arg1 centerIndexPathTransitionStateDidChangeForLayout:(id)arg2 ;
-(double)parallaxFactor;
-(void)setParallaxFactor:(double)arg1 ;
-(id)_makeParadeLayout;
-(_TVCollectionViewFullScreenBrowserLayout *)paradeLayout;
-(void)_evaluateTransition;
-(void)setCenterCellContext:(_TVFullScreenBrowserCenterCellContext *)arg1 ;
-(long long)_numberOfItemsForSection:(long long)arg1 ;
-(id)_cellForItemAtIndexPath:(id)arg1 ;
-(_TVFullScreenBrowserCenterCellContext *)centerCellContext;
-(void)_willCenterCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_didCenterCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_willDisplayCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_didEndDisplayingCell:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_shouldShowItemAtIndexPath:(id)arg1 ;
-(double)maskCornerRadius;
-(id)_makeParadeTransitionLayoutWithLayoutAttributes:(id)arg1 ;
@end

