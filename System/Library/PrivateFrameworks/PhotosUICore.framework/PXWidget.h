/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PXPhotosDetailsContext, PXWidgetSpec, PXTilingController, NSString, PXSectionedSelectionManager;


@protocol PXWidget <NSObject>
@property (assign,nonatomic,__weak) id<PXWidgetDelegate> widgetDelegate; 
@property (assign,nonatomic,__weak) id<PXWidgetUnlockDelegate> widgetUnlockDelegate; 
@property (assign,nonatomic,__weak) id<PXWidgetEditingDelegate> widgetEditingDelegate; 
@property (nonatomic,retain) PXPhotosDetailsContext * context; 
@property (nonatomic,retain) PXWidgetSpec * spec; 
@property (nonatomic,readonly) BOOL hasContentForCurrentInput; 
@property (nonatomic,readonly) double extraSpaceNeededAtContentBottom; 
@property (nonatomic,readonly) BOOL hasLoadedContentData; 
@property (nonatomic,readonly) NSObject*<PXAnonymousView> contentView; 
@property (nonatomic,readonly) long long contentViewAnchoringType; 
@property (nonatomic,readonly) PXTilingController * contentTilingController; 
@property (nonatomic,readonly) long long contentLayoutStyle; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) NSString * localizedCaption; 
@property (nonatomic,readonly) NSString * localizedDisclosureTitle; 
@property (nonatomic,readonly) BOOL allowUserInteractionWithSubtitle; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (nonatomic,readonly) BOOL supportsSelection; 
@property (assign,getter=isSelecting,nonatomic) BOOL selecting; 
@property (nonatomic,readonly) BOOL supportsFaceMode; 
@property (assign,getter=isFaceModeEnabled,nonatomic) BOOL faceModeEnabled; 
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager; 
@property (nonatomic,readonly) BOOL wantsFocus; 
@property (nonatomic,readonly) BOOL isInEditMode; 
@property (assign,nonatomic) CGSize maxVisibleSizeInEditMode; 
@optional
+(void)preloadResources;
-(PXPhotosDetailsContext *)context;
-(void)setContext:(id)arg1;
-(NSString *)localizedTitle;
-(NSString *)localizedSubtitle;
-(NSObject*<PXAnonymousView>)contentView;
-(void)setUserInteractionEnabled:(BOOL)arg1;
-(void)setContentSize:(CGSize)arg1;
-(PXWidgetSpec *)spec;
-(BOOL)isUserInteractionEnabled;
-(NSString *)localizedCaption;
-(void)setSpec:(id)arg1;
-(PXSectionedSelectionManager *)selectionManager;
-(id<PXWidgetUnlockDelegate>)widgetUnlockDelegate;
-(BOOL)hasLoadedContentData;
-(long long)contentViewAnchoringType;
-(PXTilingController *)contentTilingController;
-(long long)contentLayoutStyle;
-(NSString *)localizedDisclosureTitle;
-(BOOL)allowUserInteractionWithSubtitle;
-(BOOL)supportsSelection;
-(BOOL)supportsFaceMode;
-(double)preferredContentHeightForWidth:(double)arg1;
-(void)loadContentData;
-(void)unloadContentData;
-(void)contentViewWillAppear;
-(void)contentViewDidDisappear;
-(void)contentViewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
-(void)userDidSelectSubtitle;
-(void)userDidSelectDisclosureControl;
-(void)requestExitEditWithChangesSavingMode:(long long)arg1;
-(void)deviceDidBecomeUnlocked;
-(id<PXWidgetDelegate>)widgetDelegate;
-(void)setWidgetDelegate:(id)arg1;
-(void)setWidgetUnlockDelegate:(id)arg1;
-(id<PXWidgetEditingDelegate>)widgetEditingDelegate;
-(void)setWidgetEditingDelegate:(id)arg1;
-(BOOL)hasContentForCurrentInput;
-(double)extraSpaceNeededAtContentBottom;
-(BOOL)isSelecting;
-(void)setSelecting:(BOOL)arg1;
-(BOOL)isFaceModeEnabled;
-(void)setFaceModeEnabled:(BOOL)arg1;
-(BOOL)wantsFocus;
-(BOOL)isInEditMode;
-(CGSize)maxVisibleSizeInEditMode;
-(void)setMaxVisibleSizeInEditMode:(CGSize)arg1;

@end

