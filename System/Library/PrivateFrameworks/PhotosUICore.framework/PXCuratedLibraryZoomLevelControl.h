/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXCuratedLibraryZoomLevelControlDelegate;
@class PXUpdater, UIVisualEffectView, _PXCuratedLibraryZoomLevelSegmentedControl, PXCuratedLibraryViewModel, PXCuratedLibraryStyleGuide, NSArray, NSString;

@interface PXCuratedLibraryZoomLevelControl : UIView <PXChangeObserver> {

	PXUpdater* _updater;
	UIEdgeInsets _padding;
	CGSize* _textSizes;
	double _minimumInterTextSpacing;
	CGSize _intrinsicSize;
	UIVisualEffectView* _backgroundEffectView;
	_PXCuratedLibraryZoomLevelSegmentedControl* _segmentedControl;
	PXCuratedLibraryViewModel* _viewModel;
	PXCuratedLibraryStyleGuide* _styleGuide;
	id<PXCuratedLibraryZoomLevelControlDelegate> _delegate;
	NSArray* _zoomLevelIdentifiers;
	long long _selectedZoomLevel;
	NSArray* _enabledZoomLevelIdentifiers;
	long long _shrinkLevel;

}

@property (nonatomic,readonly) NSArray * zoomLevelIdentifiers;                                          //@synthesize zoomLevelIdentifiers=_zoomLevelIdentifiers - In the implementation block
@property (assign,nonatomic) long long selectedZoomLevel;                                               //@synthesize selectedZoomLevel=_selectedZoomLevel - In the implementation block
@property (nonatomic,retain) NSArray * enabledZoomLevelIdentifiers;                                     //@synthesize enabledZoomLevelIdentifiers=_enabledZoomLevelIdentifiers - In the implementation block
@property (assign,nonatomic) long long shrinkLevel;                                                     //@synthesize shrinkLevel=_shrinkLevel - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;                                   //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryStyleGuide * styleGuide;                                 //@synthesize styleGuide=_styleGuide - In the implementation block
@property (assign,nonatomic,__weak) id<PXCuratedLibraryZoomLevelControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_enabledZoomLevelIdentifiersForViewModel:(id)arg1 ;
+(id)_allZoomLevelIdentifiers;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<PXCuratedLibraryZoomLevelControlDelegate>)delegate;
-(void)setDelegate:(id<PXCuratedLibraryZoomLevelControlDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(PXCuratedLibraryViewModel *)viewModel;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)initWithViewModel:(id)arg1 styleGuide:(id)arg2 ;
-(void)setShrinkLevel:(long long)arg1 ;
-(void)setEnabledZoomLevelIdentifiers:(NSArray *)arg1 ;
-(void)setSelectedZoomLevel:(long long)arg1 ;
-(long long)zoomLevelDisplayedBeforeZoomLevel:(long long)arg1 ;
-(void)_invalidateSegmentedControl;
-(void)_updateSegmentedControl;
-(void)_handleSegmentedControlAction:(id)arg1 ;
-(void)_handleContentSizeCategoryDidChange:(id)arg1 ;
-(PXCuratedLibraryStyleGuide *)styleGuide;
-(NSArray *)zoomLevelIdentifiers;
-(long long)selectedZoomLevel;
-(NSArray *)enabledZoomLevelIdentifiers;
-(long long)shrinkLevel;
@end

