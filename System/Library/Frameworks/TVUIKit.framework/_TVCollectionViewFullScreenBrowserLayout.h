/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@protocol _TVCollectionViewDelegateFullScreenBrowserLayout;
@class NSArray, NSMutableDictionary, NSIndexPath;

@interface _TVCollectionViewFullScreenBrowserLayout : UICollectionViewLayout {

	SectionInfo* _sectionInfos;
	long long _numberOfSections;
	long long _numberOfCells;
	long long _centerCellIndex;
	id<_TVCollectionViewDelegateFullScreenBrowserLayout> _collectionViewDelegateFullScreenBrowserLayout;
	struct {
		BOOL hasCenterIndexPathDidChange;
		BOOL hasCenterIndexPathTransitionStateDidChange;
		BOOL hasShouldShowItemAtIndexPath;
	}  _collectionViewDelegateFullScreenBrowserLayoutFlags;
	BOOL _isCenterIndexPathInTransition;
	NSArray* _layoutAttributesBySection;
	NSArray* _orderedLayoutAttributes;
	double _cornerRadius;
	double _interitemSpacing;
	double _parallaxFactor;
	double _maskAmount;
	NSMutableDictionary* _layoutAttributesByIndexPath;
	CGSize _cellSize;
	CGSize _contentSize;

}

@property (assign,nonatomic) CGSize cellSize;                                                //@synthesize cellSize=_cellSize - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                             //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * layoutAttributesByIndexPath;              //@synthesize layoutAttributesByIndexPath=_layoutAttributesByIndexPath - In the implementation block
@property (nonatomic,readonly) NSArray * layoutAttributesBySection;                          //@synthesize layoutAttributesBySection=_layoutAttributesBySection - In the implementation block
@property (nonatomic,readonly) NSArray * orderedLayoutAttributes;                            //@synthesize orderedLayoutAttributes=_orderedLayoutAttributes - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                                        //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) double parallaxFactor;                                          //@synthesize parallaxFactor=_parallaxFactor - In the implementation block
@property (assign,nonatomic) double maskAmount;                                              //@synthesize maskAmount=_maskAmount - In the implementation block
@property (nonatomic,readonly) NSIndexPath * centerIndexPath; 
@property (nonatomic,readonly) BOOL isCenterIndexPathInTransition;                           //@synthesize isCenterIndexPathInTransition=_isCenterIndexPathInTransition - In the implementation block
+(Class)layoutAttributesClass;
-(id)init;
-(void)dealloc;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(CGSize)contentSize;
-(CGSize)cellSize;
-(void)setContentSize:(CGSize)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(void)setCellSize:(CGSize)arg1 ;
-(double)maskAmount;
-(void)setMaskAmount:(double)arg1 ;
-(NSIndexPath *)centerIndexPath;
-(id)_indexPathForCellIndex:(long long)arg1 ;
-(void)_enumerateVisibleCellIndexesInRect:(CGRect)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)layoutAttributesByIndexPath;
-(void)setLayoutAttributesByIndexPath:(NSMutableDictionary *)arg1 ;
-(void)_evaluateCenterCellIndexTransitionCheck;
-(long long)_cellIndexForIndexPath:(id)arg1 ;
-(double)parallaxFactor;
-(CGPoint)_targetContentOffsetForCellIndex:(long long)arg1 ;
-(long long)_currentCenterCellIndexWithTransitionState:(BOOL*)arg1 ;
-(NSArray *)layoutAttributesBySection;
-(NSArray *)orderedLayoutAttributes;
-(void)setParallaxFactor:(double)arg1 ;
-(BOOL)isCenterIndexPathInTransition;
@end

