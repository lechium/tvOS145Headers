/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TVCollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/TVLPagedGridCollectionViewLayoutDelegate.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class NSIndexPath, TVLPagedGridCollectionViewLayout, TVLPagedGridElement, TVLDocument, TVCollectionView, UIPageControl, NSString;

@interface TVLPagedGridView : UIView <TVCollectionViewDelegate, UICollectionViewDataSource, TVLPagedGridCollectionViewLayoutDelegate, ATVUpdatable> {

	BOOL _isAtEdge;
	NSIndexPath* _currentFocusedIndexPath;
	TVLPagedGridCollectionViewLayout* _gridViewLayout;
	TVLPagedGridElement* _pagedGridElement;
	TVLDocument* _feedDocument;
	TVCollectionView* _collectionView;
	UIPageControl* _pageControl;

}

@property (nonatomic,readonly) TVLPagedGridCollectionViewLayout * gridViewLayout;              //@synthesize gridViewLayout=_gridViewLayout - In the implementation block
@property (nonatomic,readonly) TVLPagedGridElement * pagedGridElement;                         //@synthesize pagedGridElement=_pagedGridElement - In the implementation block
@property (nonatomic,readonly) TVLDocument * feedDocument;                                     //@synthesize feedDocument=_feedDocument - In the implementation block
@property (nonatomic,__weak,readonly) TVCollectionView * collectionView;                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,__weak,readonly) UIPageControl * pageControl;                             //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,readonly) BOOL isAtEdge;                                                  //@synthesize isAtEdge=_isAtEdge - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * currentFocusedIndexPath;                     //@synthesize currentFocusedIndexPath=_currentFocusedIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)currentState;
-(TVCollectionView *)collectionView;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIPageControl *)pageControl;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2 ;
-(TVLDocument *)feedDocument;
-(id)initWithFeedElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(void)restoreState:(id)arg1 ;
-(NSIndexPath *)currentFocusedIndexPath;
-(TVLPagedGridElement *)pagedGridElement;
-(long long)collectionView:(id)arg1 numberOfColumnsForSection:(unsigned long long)arg2 ;
-(id)indexPathForPreferredFocusedItemForCollectionView:(id)arg1 ;
-(TVLPagedGridCollectionViewLayout *)gridViewLayout;
-(BOOL)isAtEdge;
@end

