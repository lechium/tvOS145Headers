/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKDashboardLayout.h>

@class NSMutableDictionary, NSString;

@interface PKDashboardPassFlowLayout : UICollectionViewLayout <UIGestureRecognizerDelegate, PKDashboardLayout> {

	BOOL _needsCustomLocation;
	BOOL _userIsActivelyDragging;
	BOOL _currentDraggingWentBelowThreshold;
	BOOL _userIsHoldingCardInCurrentDrag;
	BOOL _userWasHoldingCard;
	BOOL _bouncing;
	BOOL _showNonPassCells;
	BOOL _revealingItems;
	CGSize _passCellSize;
	NSMutableDictionary* _attributesPerIndexPath;
	CGSize _currentSize;
	BOOL _isCompactUI;
	BOOL _preventLayoutComputation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL fade; 
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)passPanDidBegin;
-(void)passPanDidEnd;
-(void)_adjustItems:(id)arg1 withLateralMove:(double)arg2 ;
-(UIEdgeInsets)insetsForSection:(long long)arg1 ;
-(void)revealContentAnimated:(BOOL)arg1 ;
-(void)hideContent;
-(id)_indexPathForPassGroup;
-(BOOL)_indexPathIsPassGroupIndexPath:(id)arg1 ;
-(id)_customAttribuesForPassAtTheTop:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
@end

