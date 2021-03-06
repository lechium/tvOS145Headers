/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSArray;

@interface SiriTVUICollectionViewLayout : UICollectionViewLayout {

	double _minimumInteritemSpacing;
	NSArray* _shelfLayoutSections;
	double _cachedTallestItemHeight;
	double _cachedTallestHeaderHeight;
	CGSize _itemSize;
	CGSize _headerReferenceSize;
	UIEdgeInsets _sectionInset;

}

@property (nonatomic,retain) NSArray * shelfLayoutSections;                 //@synthesize shelfLayoutSections=_shelfLayoutSections - In the implementation block
@property (assign,nonatomic) double cachedTallestItemHeight;                //@synthesize cachedTallestItemHeight=_cachedTallestItemHeight - In the implementation block
@property (assign,nonatomic) double cachedTallestHeaderHeight;              //@synthesize cachedTallestHeaderHeight=_cachedTallestHeaderHeight - In the implementation block
@property (assign,nonatomic) double minimumInteritemSpacing;                //@synthesize minimumInteritemSpacing=_minimumInteritemSpacing - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                               //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) CGSize headerReferenceSize;                    //@synthesize headerReferenceSize=_headerReferenceSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;                     //@synthesize sectionInset=_sectionInset - In the implementation block
-(id)init;
-(void)setItemSize:(CGSize)arg1 ;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(void)setMinimumInteritemSpacing:(double)arg1 ;
-(double)minimumInteritemSpacing;
-(UIEdgeInsets)sectionInset;
-(CGSize)itemSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)setHeaderReferenceSize:(CGSize)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGSize)headerReferenceSize;
-(double)computedContentHeight;
-(NSArray *)shelfLayoutSections;
-(void)setShelfLayoutSections:(NSArray *)arg1 ;
-(double)cachedTallestHeaderHeight;
-(void)setCachedTallestHeaderHeight:(double)arg1 ;
-(void)setCachedTallestItemHeight:(double)arg1 ;
-(double)cachedTallestItemHeight;
@end

