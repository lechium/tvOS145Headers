/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSNumber, NSSet, PXAssetReference, PXContentFilterState, NSMutableOrderedSet;


@protocol PXMutablePhotosViewModel <NSObject>
@property (assign,nonatomic) BOOL isInSelectMode; 
@property (assign,nonatomic) BOOL isInCompactMode; 
@property (assign,nonatomic) BOOL isAppearing; 
@property (assign,nonatomic) BOOL dismissRequested; 
@property (assign,nonatomic) BOOL hasScrollableContent; 
@property (assign,getter=isScrolledToTop,nonatomic) BOOL scrolledToTop; 
@property (assign,nonatomic) double headerTitleTopInset; 
@property (assign,nonatomic) long long numberOfZoomSteps; 
@property (nonatomic,copy) NSNumber * userWantsAspectFitContent; 
@property (nonatomic,copy) NSSet * draggedAssetReferences; 
@property (nonatomic,retain) PXAssetReference * dropTargetAssetReference; 
@property (assign,nonatomic) BOOL wantsContentFilterVisible; 
@property (assign,nonatomic) BOOL wantsContentFilterIndicatorVisible; 
@property (assign,nonatomic) BOOL footerHasImportantInformation; 
@property (assign,getter=isContentBelowTitle,nonatomic) BOOL contentBelowTitle; 
@property (assign,getter=isShowingAlternateContent,nonatomic) BOOL showingAlternateContent; 
@property (assign,nonatomic) BOOL viewBasedDecorationsEnabled; 
@property (assign,nonatomic) BOOL captionsVisible; 
@property (assign,nonatomic) double floatingTitleOpacity; 
@property (assign,nonatomic) BOOL keepsTabBarAlwaysHidden; 
@property (nonatomic,copy) PXContentFilterState * filterState; 
@property (nonatomic,readonly) NSMutableOrderedSet * visibleAssetCollections; 
@required
-(BOOL)wantsContentFilterVisible;
-(void)setWantsContentFilterVisible:(BOOL)arg1;
-(PXAssetReference *)dropTargetAssetReference;
-(NSSet *)draggedAssetReferences;
-(void)setDraggedAssetReferences:(id)arg1;
-(void)setDropTargetAssetReference:(id)arg1;
-(BOOL)viewBasedDecorationsEnabled;
-(void)setViewBasedDecorationsEnabled:(BOOL)arg1;
-(BOOL)isInSelectMode;
-(void)setIsInSelectMode:(BOOL)arg1;
-(BOOL)captionsVisible;
-(void)setCaptionsVisible:(BOOL)arg1;
-(void)setFilterState:(id)arg1;
-(PXContentFilterState *)filterState;
-(BOOL)attemptSetInSelectMode:(BOOL)arg1;
-(void)setZoomStep:(double)arg1 isInteractive:(BOOL)arg2 shouldAnimate:(BOOL)arg3 anchorAssetReference:(id)arg4;
-(void)toggleSelectionForIndexPath:(PXSimpleIndexPath)arg1;
-(void)toggleSelectionForIndexPath:(PXSimpleIndexPath)arg1 updateCursorIndexPath:(BOOL)arg2;
-(void)toggleSelectionForAssetReference:(id)arg1;
-(void)toggleSelectionForAssetReference:(id)arg1 updateCursorIndexPath:(BOOL)arg2;
-(void)toggleSelectionForAssetCollectionReference:(id)arg1;
-(void)setEnterSelectModeAllowed:(BOOL)arg1 forReason:(id)arg2;
-(void)setOneUpPresentationAllowed:(BOOL)arg1 forReason:(id)arg2;
-(void)setAspectRatioToggleAllowed:(BOOL)arg1 forReason:(id)arg2;
-(void)setHideSurroundingContent:(BOOL)arg1 forReason:(id)arg2;
-(BOOL)isInCompactMode;
-(void)setIsInCompactMode:(BOOL)arg1;
-(BOOL)isAppearing;
-(void)setIsAppearing:(BOOL)arg1;
-(BOOL)dismissRequested;
-(void)setDismissRequested:(BOOL)arg1;
-(BOOL)hasScrollableContent;
-(void)setHasScrollableContent:(BOOL)arg1;
-(BOOL)isScrolledToTop;
-(void)setScrolledToTop:(BOOL)arg1;
-(double)headerTitleTopInset;
-(void)setHeaderTitleTopInset:(double)arg1;
-(long long)numberOfZoomSteps;
-(void)setNumberOfZoomSteps:(long long)arg1;
-(NSNumber *)userWantsAspectFitContent;
-(void)setUserWantsAspectFitContent:(id)arg1;
-(BOOL)wantsContentFilterIndicatorVisible;
-(void)setWantsContentFilterIndicatorVisible:(BOOL)arg1;
-(BOOL)footerHasImportantInformation;
-(void)setFooterHasImportantInformation:(BOOL)arg1;
-(BOOL)isContentBelowTitle;
-(void)setContentBelowTitle:(BOOL)arg1;
-(BOOL)isShowingAlternateContent;
-(void)setShowingAlternateContent:(BOOL)arg1;
-(double)floatingTitleOpacity;
-(void)setFloatingTitleOpacity:(double)arg1;
-(BOOL)keepsTabBarAlwaysHidden;
-(void)setKeepsTabBarAlwaysHidden:(BOOL)arg1;
-(NSMutableOrderedSet *)visibleAssetCollections;

@end

