/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UICollectionView, UICollectionViewLayout, NSMapTable, NSMutableIndexSet, NSMutableDictionary, NSMutableArray, NSArray;

@interface UICollectionViewData : NSObject {

	UICollectionView* _collectionView;
	UICollectionViewLayout* _layout;
	NSMapTable* _screenPageMap;
	NSMutableIndexSet* _globalIndexesOfItemsAwaitingValidation;
	NSMutableDictionary* _supplementaryLayoutAttributes;
	NSMutableDictionary* _decorationLayoutAttributes;
	NSMutableDictionary* _invalidatedSupplementaryIndexPaths;
	NSMutableDictionary* _invalidatedDecorationIndexPaths;
	CGRect _validLayoutRect;
	long long _lastSectionTestedForNumberOfItemsBeforeSection;
	long long _lastResultForNumberOfItemsBeforeSection;
	CGSize _contentSize;
	NSMutableArray* _clonedCellAttributes;
	NSMutableArray* _clonedSupplementaryAttributes;
	NSMutableArray* _clonedDecorationAttributes;
	struct {
		unsigned contentSizeIsValid : 1;
		unsigned itemCountsAreValid : 1;
		unsigned layoutIsPreparing : 1;
		unsigned layoutIsPrepared : 1;
		unsigned layoutLocked : 1;
	}  _collectionViewDataFlags;
	vector<long, std::__1::allocator<long>>* _sectionItemCounts;
	unordered_map<long, UICollectionViewLayoutAttributes *, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, UICollectionViewLayoutAttributes *>>>* _globalItemMap;
	long long _totalItemCount;

}

@property (nonatomic,readonly) BOOL layoutIsPrepared; 
@property (assign,getter=isLayoutLocked,nonatomic) BOOL layoutLocked; 
@property (assign,nonatomic) CGSize contentSize;                                     //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) NSArray * clonedCellAttributes;                       //@synthesize clonedCellAttributes=_clonedCellAttributes - In the implementation block
@property (nonatomic,readonly) NSArray * clonedSupplementaryAttributes;              //@synthesize clonedSupplementaryAttributes=_clonedSupplementaryAttributes - In the implementation block
@property (nonatomic,readonly) NSArray * clonedDecorationAttributes;                 //@synthesize clonedDecorationAttributes=_clonedDecorationAttributes - In the implementation block
+(void)initialize;
-(CGSize)contentSize;
-(long long)numberOfItems;
-(long long)numberOfSections;
-(void)setContentSize:(CGSize)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)_screenPageForPoint:(CGPoint)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)invalidateItemsAtIndexPaths:(id)arg1 ;
-(long long)globalIndexForItemAtIndexPath:(id)arg1 ;
-(id)indexPathForItemAtGlobalIndex:(long long)arg1 ;
-(id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)isIndexPathValid:(id)arg1 ;
-(BOOL)dataSourceMatchesCurrentCounts;
-(void)invalidate:(BOOL)arg1 ;
-(BOOL)layoutIsPrepared;
-(CGRect)collectionViewContentRect;
-(long long)_extantNumberOfItems;
-(id)layoutAttributesForCellsInRect:(CGRect)arg1 validateLayout:(BOOL)arg2 ;
-(NSArray *)clonedCellAttributes;
-(NSArray *)clonedSupplementaryAttributes;
-(NSArray *)clonedDecorationAttributes;
-(void)validateLayoutInRect:(CGRect)arg1 ;
-(id)initWithCollectionView:(id)arg1 layout:(id)arg2 ;
-(void)_prepareToLoadData;
-(long long)validatedGlobalIndexForItemAtIndexPath:(id)arg1 ;
-(CGRect)rectForItemAtIndexPath:(id)arg1 ;
-(void)setLayoutLocked:(BOOL)arg1 ;
-(id)validatedIndexPathForItemAtGlobalIndex:(long long)arg1 ;
-(id)existingSupplementaryLayoutAttributesInSection:(long long)arg1 ;
-(id)layoutAttributesForGlobalItemIndex:(long long)arg1 ;
-(id)existingSupplementaryLayoutAttributes;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 nilAttributesArePermitted:(BOOL)arg3 ;
-(CGRect)rectForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)knownDecorationElementKinds;
-(id)knownSupplementaryElementKinds;
-(void)invalidateSupplementaryIndexPaths:(id)arg1 ;
-(void)invalidateDecorationIndexPaths:(id)arg1 ;
-(id)_cachedLayoutAttributesForGlobalItemIndex:(long long)arg1 ;
-(void)_setCachedLayoutAttributes:(id)arg1 forGlobalItemIndex:(long long)arg2 ;
-(void)_updateItemCounts;
-(void)_validateItemCounts;
-(void)_validateContentSize;
-(void)_setLayoutAttributes:(id)arg1 atGlobalItemIndex:(long long)arg2 ;
-(void)validateSupplementaryViews;
-(void)validateDecorationViews;
-(BOOL)isIndexPathValid:(id)arg1 validateItemCounts:(BOOL)arg2 ;
-(BOOL)isGlobalIndexValid:(long long)arg1 ;
-(long long)numberOfItemsBeforeSection:(long long)arg1 ;
-(id)_layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)_loadEverything;
-(CGRect)rectForGlobalItemIndex:(long long)arg1 ;
-(CGRect)rectForDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForElementsInSection:(long long)arg1 ;
-(BOOL)isLayoutLocked;
-(CGRect)_TEST_validLayoutRect;
@end

