/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusRegion.h>

@protocol UIFocusItem;
@interface _UIFocusItemRegion : _UIFocusRegion {

	SCD_Struct_UI68 _flags;
	id<UIFocusItem> _item;

}

@property (nonatomic,__weak,readonly) id<UIFocusItem> item;              //@synthesize item=_item - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id<UIFocusItem>)item;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 item:(id)arg2 ;
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)_visualRepresentationColor;
-(unsigned long long)_focusableBoundaries;
-(long long)_preferredDistanceComparisonType;
-(long long)_visualRepresentationPatternType;
-(BOOL)_canOccludeRegionsBelow;
-(BOOL)_canBeOccludedByRegionsAbove;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 ;
-(id)_debugAssociatedObject;
-(id)_defaultFocusItem;
-(BOOL)_shouldCropRegionToSearchArea;
@end
