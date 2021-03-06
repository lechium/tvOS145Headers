/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusDebugQuickLookImageDrawing.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UIFocusRegionContainer;
@class NSMutableArray, NSString;

@interface _UIFocusRegion : NSObject <_UIFocusDebugQuickLookImageDrawing, NSCopying> {

	NSMutableArray* _mutableOccludingRegions;
	_UIFocusRegion* _originalRegion;
	id<_UIFocusRegionContainer> _regionContainer;
	CGRect _frame;

}

@property (assign,setter=_setFrame:,nonatomic) CGRect frame;                                                                                            //@synthesize frame=_frame - In the implementation block
@property (setter=_setOriginRegion:,getter=_originalRegion,nonatomic,retain) _UIFocusRegion * originalRegion;                                           //@synthesize originalRegion=_originalRegion - In the implementation block
@property (setter=_setMutableOccludingRegions:,getter=_mutableOccludingRegions,nonatomic,retain) NSMutableArray * mutableOccludingRegions;              //@synthesize mutableOccludingRegions=_mutableOccludingRegions - In the implementation block
@property (getter=_debugAssociatedObject,nonatomic,__weak,readonly) id debugAssociatedObject; 
@property (nonatomic,retain) id<_UIFocusRegionContainer> regionContainer;                                                                               //@synthesize regionContainer=_regionContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_regionsByOccludingRegions:(id)arg1 beneathRegions:(id)arg2 ;
+(id)__regionsByEvaluatingOcclusionsForBaseRegions:(id)arg1 occludingRegions:(id)arg2 baseRegionsCanOccludeEachOther:(BOOL)arg3 ;
+(id)_regionsByEvaluatingOcclusionsForRegions:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(CGRect)frame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setFrame:(CGRect)arg1 ;
-(double)_focusPriority;
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)_ignoresSpeedBumpEdges;
-(id)_originalRegion;
-(unsigned long long)_focusableBoundaries;
-(id)_focusedItemForLinearSorting:(id)arg1 inMap:(id)arg2 ;
-(long long)_preferredDistanceComparisonType;
-(BOOL)_canOccludeRegionsBelow;
-(BOOL)_canBeOccludedByRegionsAbove;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 ;
-(BOOL)_shouldUseNextFocusedItemForLinearSorting;
-(void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1 ;
-(id)_debugAssociatedObject;
-(id)_defaultFocusItem;
-(BOOL)_shouldCropRegionToSearchArea;
-(id)_occludingRegions;
-(void)_setOriginRegion:(id)arg1 ;
-(void)_setMutableOccludingRegions:(id)arg1 ;
-(void)setRegionContainer:(id<_UIFocusRegionContainer>)arg1 ;
-(unsigned long long)_boundariesBlockingFocusMovementRequest:(id)arg1 ;
-(id)_mutableOccludingRegions;
-(void)_addOccludingRegion:(id)arg1 ;
-(id)_subregionWithFrame:(CGRect)arg1 ;
-(id<_UIFocusRegionContainer>)regionContainer;
-(id)_visibleSubregionsWhenOccludedByRegion:(id)arg1 ;
-(unsigned long long)_effectiveFocusableBoundariesForHeading:(unsigned long long)arg1 ;
-(unsigned long long)_effectiveBoundariesBlockingFocusMovementRequest:(id)arg1 ;
-(id)_resizeToRect:(CGRect)arg1 ;
-(void)_didParticipateAsDestinationRegionInFocusUpdate:(id)arg1 ;
@end

