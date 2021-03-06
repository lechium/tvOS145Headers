/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKeyCommandDiscoverabilityHUDColumnViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class NSArray, UIView, NSLayoutConstraint, UIBlurEffect, UIVibrancyEffect, UIVisualEffectView, UICollectionViewFlowLayout, UICollectionView, UIPageControl, UIKeyCommandDiscoverabilityHUDVisualStyle, NSString;

@interface UIKeyCommandDiscoverabilityHUDView : UIView <UIKeyCommandDiscoverabilityHUDColumnViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	NSArray* _keyCommands;
	UIView* _HUDOutlineView;
	NSLayoutConstraint* _HUDOutlineViewWidthConstraint;
	NSLayoutConstraint* _HUDOutlineViewHeightConstraint;
	UIBlurEffect* _blurEffect;
	UIVibrancyEffect* _vibrancyEffect;
	UIVisualEffectView* _backdropView;
	UICollectionViewFlowLayout* _flowLayout;
	UICollectionView* _collectionView;
	NSLayoutConstraint* _collectionViewTopConstraint;
	NSLayoutConstraint* _collectionViewBottomConstraint;
	NSLayoutConstraint* _collectionViewLeadingConstraint;
	NSLayoutConstraint* _collectionViewTrailingConstraint;
	UIPageControl* _pageControl;
	NSLayoutConstraint* _pageControlYAnchor;
	double _fontScaleFactor;
	unsigned long long _pageCount;
	unsigned long long _cellsPerColumn;
	CGSize _columnSize;
	BOOL _twoColumnsPerPage;
	BOOL _shouldUseWordsNotSymbols;
	UIKeyCommandDiscoverabilityHUDVisualStyle* _visualStyle;

}

@property (getter=_shouldUseWordsNotSymbols,nonatomic,readonly) BOOL shouldUseWordsNotSymbols;              //@synthesize shouldUseWordsNotSymbols=_shouldUseWordsNotSymbols - In the implementation block
@property (nonatomic,retain) UIKeyCommandDiscoverabilityHUDVisualStyle * visualStyle;                       //@synthesize visualStyle=_visualStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)animateIn;
-(void)animateOutWithCompletion:(/*^block*/id)arg1 ;
-(void)_pageControlValueChanged:(id)arg1 ;
-(UIKeyCommandDiscoverabilityHUDVisualStyle *)visualStyle;
-(void)setVisualStyle:(UIKeyCommandDiscoverabilityHUDVisualStyle *)arg1 ;
-(id)initWithKeyCommands:(id)arg1 keyboard:(GSKeyboardRef)arg2 ;
-(id)discoverabilityHUDColumnView:(id)arg1 descriptionStringForKeyCommand:(id)arg2 ;
-(id)discoverabilityHUDColumnView:(id)arg1 modifiersStringForKeyCommand:(id)arg2 ;
-(id)discoverabilityHUDColumnView:(id)arg1 inputStringForKeyCommand:(id)arg2 ;
-(void)recalculatePages;
-(id)_discoverabilityTitleForKeyCommand:(id)arg1 ;
-(id)_keyCommandsForColumnIndex:(unsigned long long)arg1 withCellsPerColumn:(unsigned long long)arg2 ;
-(CGSize)_bestColumnSizeWithCellsPerColumn:(unsigned long long)arg1 maxColumnSize:(CGSize)arg2 columnCount:(unsigned long long)arg3 usingColumnView:(id)arg4 getFontScaleFactor:(double*)arg5 ;
-(id)_columnViewForColumnIndex:(unsigned long long)arg1 reusingView:(id)arg2 ;
-(BOOL)_shouldUseWordsNotSymbols;
@end

