/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCollectionLayoutSection.h>
#import <UIKitCore/_UICollectionLayoutSectionCallback.h>

@protocol NSCollectionLayoutEnvironment_Private;
@class _UICollectionViewListLayoutSectionConfiguration, NSString;

@interface _UICollectionViewListLayoutSection : NSCollectionLayoutSection <_UICollectionLayoutSectionCallback> {

	_UICollectionViewListLayoutSectionConfiguration* _configuration;
	id<NSCollectionLayoutEnvironment_Private> _layoutEnvironment;

}

@property (getter=_layoutEnvironment,nonatomic,readonly) id<NSCollectionLayoutEnvironment_Private> layoutEnvironment;              //@synthesize layoutEnvironment=_layoutEnvironment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_callback;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)_isRTL;
-(double)_alignedContentMarginGivenMargin:(double)arg1 ;
-(id)initWithConfiguration:(id)arg1 layoutEnvironment:(id)arg2 ;
-(BOOL)prefersListSolver;
-(BOOL)shouldRestrictOrthogonalAxisDuringInteractiveMovement;
-(void)_transformFittingLayoutAttributes:(id)arg1 interactionState:(id)arg2 ;
-(void)_transformPreferredLayoutAttributes:(id)arg1 interactionState:(id)arg2 ;
-(void)_enrichLayoutAttributes:(id)arg1 interactionState:(id)arg2 ;
-(id)_invalidationContextForBackgroundChangeAtIndexPath:(id)arg1 interactionState:(id)arg2 ;
-(id)_constants;
-(id)_layoutEnvironment;
-(NSDirectionalEdgeInsets)_defaultSectionContentInsetsForAppearanceStyle:(long long)arg1 ;
-(BOOL)_hasHorizontalInsets;
-(UIEdgeInsets)_effectiveCollectionViewLayoutMarginsForAppearanceStyle:(long long)arg1 forUseAsContentInsets:(BOOL)arg2 ;
-(UIEdgeInsets)_defaultLayoutMarginsInsideSection;
-(NSDirectionalEdgeInsets)_effectiveSectionHorizontalInsets;
-(BOOL)_adjustsLayoutToMergeWithBarInSection:(long long)arg1 interactionState:(id)arg2 ;
-(BOOL)_hasHeaderFooterBelowLastItemInSection:(long long)arg1 interactionState:(id)arg2 ;
-(id)_generateListSectionDataForLayoutAttributes:(id)arg1 interactionState:(id)arg2 ;
-(unsigned long long)_maskedCornersForBackgroundOfItemWithSelectionGrouping:(unsigned long long)arg1 ;
-(void)_configureLayoutAttributesForPlainCell:(id)arg1 ;
-(void)_configureLayoutAttributesWithDefaultMasking:(id)arg1 ;
-(void)_configureLayoutAttributesForSidebarPlainCell:(id)arg1 ;
-(void)_configureLayoutAttributesWithInsetGroupedMasking:(id)arg1 stylesFirstItemAsHeader:(BOOL)arg2 ;
-(void)_configureLayoutAttributesForBackgroundDecoration:(id)arg1 ;
-(id)_effectiveBackgroundColor;
-(BOOL)__isLastSection:(long long)arg1 ;
-(NSDirectionalEdgeInsets)_defaultDirectionalLayoutMarginsInsideSection;
-(BOOL)__shouldDrawSeparatorAtBottom:(BOOL)arg1 ofSection:(long long)arg2 interactionState:(id)arg3 ;
-(BOOL)__isLastItemInSection:(id)arg1 ;
@end

