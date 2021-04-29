/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusRegion.h>

@protocol _UIFocusGuideRegionDelegate;
@interface _UIFocusGuideRegion : _UIFocusRegion {

	BOOL __isUnoccludable;
	BOOL __ignoresSpeedBumpEdges;
	id<_UIFocusGuideRegionDelegate> _delegate;
	double __focusPriority;

}

@property (assign,setter=_setIsUnoccludable:,nonatomic) BOOL _isUnoccludable;                            //@synthesize _isUnoccludable=__isUnoccludable - In the implementation block
@property (assign,setter=_setFocusPriority:,nonatomic) double _focusPriority;                            //@synthesize _focusPriority=__focusPriority - In the implementation block
@property (assign,setter=_setIgnoresSpeedBumpEdges:,nonatomic) BOOL _ignoresSpeedBumpEdges;              //@synthesize _ignoresSpeedBumpEdges=__ignoresSpeedBumpEdges - In the implementation block
@property (assign,nonatomic,__weak) id<_UIFocusGuideRegionDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<_UIFocusGuideRegionDelegate>)delegate;
-(void)setDelegate:(id<_UIFocusGuideRegionDelegate>)arg1 ;
-(double)_focusPriority;
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)_isUnoccludable;
-(void)_setIsUnoccludable:(BOOL)arg1 ;
-(void)_setFocusPriority:(double)arg1 ;
-(BOOL)_ignoresSpeedBumpEdges;
-(void)_setIgnoresSpeedBumpEdges:(BOOL)arg1 ;
-(id)_fallbackFocusItemForMovementRequest:(id)arg1 inFocusMap:(id)arg2 ;
-(id)_visualRepresentationColor;
-(unsigned long long)_focusableBoundaries;
-(BOOL)_isEnabledForFocusedRegion:(id)arg1 ;
-(id)_delegatePreferredFocusEnvironmentsForMovementRequest:(id)arg1 ;
-(id)_focusedItemForLinearSorting:(id)arg1 inMap:(id)arg2 ;
-(long long)_preferredDistanceComparisonType;
-(long long)_visualRepresentationPatternType;
-(BOOL)_canOccludeRegionsBelow;
-(BOOL)_canBeOccludedByRegionsAbove;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 ;
-(BOOL)_shouldUseNextFocusedItemForLinearSorting;
-(void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1 ;
-(id)_debugAssociatedObject;
@end
