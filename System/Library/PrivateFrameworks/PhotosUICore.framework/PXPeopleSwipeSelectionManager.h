/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXAutoScrollerDelegate.h>

@protocol PXPeopleSwipeSelectionManagerDelegate;
@class UIScrollView, UIGestureRecognizer, NSIndexPath, NSSet, PXUIAutoScroller, NSString;

@interface PXPeopleSwipeSelectionManager : NSObject <PXAutoScrollerDelegate> {

	SCD_Struct_PX37 _needsUpdateFlags;
	SCD_Struct_PX71 _delegateFlags;
	id<PXPeopleSwipeSelectionManagerDelegate> _delegate;
	unsigned long long _state;
	UIScrollView* _scrollView;
	UIGestureRecognizer* _swipeGestureRecognizer;
	NSIndexPath* _startingIndexPath;
	NSIndexPath* _currentIndexPath;
	NSSet* _selectedIndexPathsBeforeSwipe;
	id _pausingChangesToken;
	PXUIAutoScroller* _autoScroller;

}

@property (assign,nonatomic) unsigned long long state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSIndexPath * startingIndexPath;                                        //@synthesize startingIndexPath=_startingIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentIndexPath;                                         //@synthesize currentIndexPath=_currentIndexPath - In the implementation block
@property (nonatomic,copy) NSSet * selectedIndexPathsBeforeSwipe;                                    //@synthesize selectedIndexPathsBeforeSwipe=_selectedIndexPathsBeforeSwipe - In the implementation block
@property (nonatomic,retain) id pausingChangesToken;                                                 //@synthesize pausingChangesToken=_pausingChangesToken - In the implementation block
@property (nonatomic,readonly) PXUIAutoScroller * autoScroller;                                      //@synthesize autoScroller=_autoScroller - In the implementation block
@property (nonatomic,readonly) BOOL isSelecting; 
@property (assign,nonatomic,__weak) id<PXPeopleSwipeSelectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * swipeGestureRecognizer;                         //@synthesize swipeGestureRecognizer=_swipeGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<PXPeopleSwipeSelectionManagerDelegate>)delegate;
-(void)setDelegate:(id<PXPeopleSwipeSelectionManagerDelegate>)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(UIScrollView *)scrollView;
-(id)initWithScrollView:(id)arg1 ;
-(UIGestureRecognizer *)swipeGestureRecognizer;
-(BOOL)isSelecting;
-(void)autoScroller:(id)arg1 didAutoscrollWithTimestamp:(double)arg2 ;
-(void)setCurrentIndexPath:(NSIndexPath *)arg1 ;
-(id)_itemIndexPathAtLocation:(CGPoint)arg1 ;
-(id)_itemIndexPathClosestLeadingLocation:(CGPoint)arg1 ;
-(id)_itemIndexPathClosestAboveLocation:(CGPoint)arg1 ;
-(void)_handleSwipeSelectionGesture:(id)arg1 ;
-(void)_beginSelectionFromIndexPath:(id)arg1 ;
-(void)_updateSelectionWithHitIndexPath:(id)arg1 leadingClosestIndexPath:(id)arg2 aboveClosestIndexPath:(id)arg3 ;
-(void)_endSelection;
-(void)_invalidateSelectedIndexPaths;
-(void)_updateSelectedIndexPaths;
-(NSIndexPath *)startingIndexPath;
-(void)setStartingIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)currentIndexPath;
-(NSSet *)selectedIndexPathsBeforeSwipe;
-(void)setSelectedIndexPathsBeforeSwipe:(NSSet *)arg1 ;
-(id)pausingChangesToken;
-(void)setPausingChangesToken:(id)arg1 ;
-(PXUIAutoScroller *)autoScroller;
@end

