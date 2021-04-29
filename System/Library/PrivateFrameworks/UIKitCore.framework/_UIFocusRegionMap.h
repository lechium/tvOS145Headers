/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, UIFocusSystem, _UIFocusRegionMapSnapshot;

@interface _UIFocusRegionMap : NSObject {

	UIView* _rootView;
	UIFocusSystem* _focusSystem;
	_UIFocusRegionMapSnapshot* _lastSnapshot;
	CGRect _minimumSearchArea;

}

@property (nonatomic,retain) _UIFocusRegionMapSnapshot * lastSnapshot;              //@synthesize lastSnapshot=_lastSnapshot - In the implementation block
@property (assign,nonatomic,__weak) UIView * rootView;                              //@synthesize rootView=_rootView - In the implementation block
@property (nonatomic,retain) UIFocusSystem * focusSystem;                           //@synthesize focusSystem=_focusSystem - In the implementation block
@property (assign,nonatomic) CGRect minimumSearchArea;                              //@synthesize minimumSearchArea=_minimumSearchArea - In the implementation block
-(id)debugQuickLookObject;
-(_UIFocusRegionMapSnapshot *)lastSnapshot;
-(void)setLastSnapshot:(_UIFocusRegionMapSnapshot *)arg1 ;
-(UIView *)rootView;
-(UIFocusSystem *)focusSystem;
-(id)_nearestCandidateForFocusMovement:(id)arg1 fromFocusedView:(id)arg2 withFocusedRect:(CGRect)arg3 includingFocusedView:(BOOL)arg4 ;
-(CGRect)minimumSearchArea;
-(CGPoint)_focusCandidateSearchOriginForFocusedFrame:(CGRect)arg1 heading:(unsigned long long)arg2 minimumSearchArea:(CGRect)arg3 ;
-(CGRect)_focusCandidateSearchRectForFocusedFrame:(CGRect)arg1 heading:(unsigned long long)arg2 minimumSearchArea:(CGRect)arg3 ;
-(CGRect)_viewSearchRectForFocusedFrame:(CGRect)arg1 focusCandidateSearchRect:(CGRect)arg2 includesFocusedFrame:(BOOL)arg3 ;
-(id)_closestFocusableRegionInArray:(id)arg1 toPoint:(CGPoint)arg2 usingHeading:(unsigned long long)arg3 withFocusedView:(id)arg4 consideringFavoredRegion:(BOOL)arg5 includingFocusedView:(BOOL)arg6 ;
-(id)_contextWithSourceView:(id)arg1 focusedRegion:(id)arg2 movement:(id)arg3 ;
-(id)_contextWithSourceView:(id)arg1 focusedContainerGuide:(id)arg2 movement:(id)arg3 ;
-(id)linearlyOrderedFocusRegionMapEntriesForFocusMovement:(id)arg1 fromView:(id)arg2 ;
-(CGRect)_rectThatJustBarelyIntersectsRect:(CGRect)arg1 startingRect:(CGRect)arg2 ;
-(CGRect)_viewSearchRectForSnapshotRect:(CGRect)arg1 ;
-(id)initWithRootView:(id)arg1 focusSystem:(id)arg2 ;
-(id)nearestCandidateFromRect:(CGRect)arg1 ;
-(id)linearlyOrderedCandidatesForFocusMovement:(id)arg1 fromView:(id)arg2 indexForFocusedView:(unsigned long long*)arg3 ;
-(BOOL)_containsFocusableRegionForView:(id)arg1 ;
-(void)setRootView:(UIView *)arg1 ;
-(void)setFocusSystem:(UIFocusSystem *)arg1 ;
-(void)setMinimumSearchArea:(CGRect)arg1 ;
@end

