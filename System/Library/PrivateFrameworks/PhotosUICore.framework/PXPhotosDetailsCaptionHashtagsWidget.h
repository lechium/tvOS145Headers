/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXCaptionHashtagsEntryViewDelegate.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>
#import <libobjc.A.dylib/PXWidget.h>

@protocol PXWidgetEditingDelegate, PXWidgetDelegate;
@class PXPhotosDetailsContext, PXWidgetSpec, PXTilingController, NSString, PXSectionedSelectionManager, _PXUIContainerView, PXCaptionHashtagsEntryView, PHAsset;

@interface PXPhotosDetailsCaptionHashtagsWidget : NSObject <PXCaptionHashtagsEntryViewDelegate, PXPhotoLibraryUIChangeObserver, PXWidget> {

	BOOL _isInEditMode;
	id<PXWidgetEditingDelegate> _widgetEditingDelegate;
	PXPhotosDetailsContext* _context;
	id<PXWidgetDelegate> _widgetDelegate;
	PXWidgetSpec* _spec;
	_PXUIContainerView* _containerView;
	PXCaptionHashtagsEntryView* _textEntryView;
	PHAsset* _asset;
	long long _exitEditChangesSavingMode;
	/*^block*/id _deferredAppearingAnimation;
	CGSize _maxVisibleSizeInEditMode;
	CGSize _contentSize;

}

@property (nonatomic,readonly) _PXUIContainerView * containerView;                                     //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) PXCaptionHashtagsEntryView * textEntryView;                             //@synthesize textEntryView=_textEntryView - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                       //@synthesize contentSize=_contentSize - In the implementation block
@property (retain) PHAsset * asset;                                                                    //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) long long exitEditChangesSavingMode;                                      //@synthesize exitEditChangesSavingMode=_exitEditChangesSavingMode - In the implementation block
@property (nonatomic,copy) id deferredAppearingAnimation;                                              //@synthesize deferredAppearingAnimation=_deferredAppearingAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXWidgetDelegate> widgetDelegate;                               //@synthesize widgetDelegate=_widgetDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetUnlockDelegate> widgetUnlockDelegate; 
@property (assign,nonatomic,__weak) id<PXWidgetEditingDelegate> widgetEditingDelegate;                 //@synthesize widgetEditingDelegate=_widgetEditingDelegate - In the implementation block
@property (nonatomic,retain) PXPhotosDetailsContext * context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PXWidgetSpec * spec;                                                      //@synthesize spec=_spec - In the implementation block
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
@property (nonatomic,readonly) BOOL isInEditMode;                                                      //@synthesize isInEditMode=_isInEditMode - In the implementation block
@property (assign,nonatomic) CGSize maxVisibleSizeInEditMode;                                          //@synthesize maxVisibleSizeInEditMode=_maxVisibleSizeInEditMode - In the implementation block
-(id)init;
-(PXPhotosDetailsContext *)context;
-(void)setContext:(PXPhotosDetailsContext *)arg1 ;
-(CGSize)contentSize;
-(PHAsset *)asset;
-(NSObject*<PXAnonymousView>)contentView;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setAsset:(PHAsset *)arg1 ;
-(PXWidgetSpec *)spec;
-(PXCaptionHashtagsEntryView *)textEntryView;
-(_PXUIContainerView *)containerView;
-(void)setSpec:(PXWidgetSpec *)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(double)preferredContentHeightForWidth:(double)arg1 ;
-(void)loadContentData;
-(void)unloadContentData;
-(void)contentViewWillAppear;
-(void)contentViewDidDisappear;
-(void)contentViewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)requestExitEditWithChangesSavingMode:(long long)arg1 ;
-(id<PXWidgetDelegate>)widgetDelegate;
-(void)setWidgetDelegate:(id<PXWidgetDelegate>)arg1 ;
-(id<PXWidgetEditingDelegate>)widgetEditingDelegate;
-(void)setWidgetEditingDelegate:(id<PXWidgetEditingDelegate>)arg1 ;
-(BOOL)hasContentForCurrentInput;
-(double)extraSpaceNeededAtContentBottom;
-(BOOL)wantsFocus;
-(BOOL)isInEditMode;
-(CGSize)maxVisibleSizeInEditMode;
-(void)setMaxVisibleSizeInEditMode:(CGSize)arg1 ;
-(void)captionHashtagsEntryViewPreferredHeightDidChange:(id)arg1 ;
-(BOOL)captionHashtagsEntryViewShouldBeginEditing:(id)arg1 ;
-(void)captionHashtagsEntryViewWillBeginEditing:(id)arg1 ;
-(void)captionHashtagsEntryViewDidBeginEditing:(id)arg1 ;
-(BOOL)captionHashtagsEntryViewShouldEndEditing:(id)arg1 ;
-(void)captionHashtagsEntryViewDidEndEditing:(id)arg1 ;
-(void)captionHashtagsEntryViewRequestFocus:(id)arg1 ;
-(double)currentContentHeight;
-(UIEdgeInsets)_adjustedContentInsets;
-(CGRect)_textEntryViewFrameForSize:(CGSize)arg1 ;
-(void)_logCPAnalyticsEventsForCommittedCaption:(id)arg1 numOfHashtags:(unsigned long long)arg2 ;
-(void)_configureTextViewVisibility:(BOOL)arg1 ;
-(void)_configureFadeInAnimation;
-(long long)exitEditChangesSavingMode;
-(void)setExitEditChangesSavingMode:(long long)arg1 ;
-(id)deferredAppearingAnimation;
-(void)setDeferredAppearingAnimation:(id)arg1 ;
@end

