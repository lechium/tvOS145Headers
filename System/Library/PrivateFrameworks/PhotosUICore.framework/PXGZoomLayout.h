/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>

@class PXGLayout, NSArray;

@interface PXGZoomLayout : PXGLayout {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	BOOL _settingSublayouts;
	BOOL _isUpdatingSublayouts;
	PXGLayout* _primaryLayer;
	NSArray* _layers;
	id _anchorObjectReference;
	CGPoint _anchorViewportCenter;
	UIEdgeInsets _padding;

}

@property (nonatomic,readonly) PXGLayout * primaryLayer;                //@synthesize primaryLayer=_primaryLayer - In the implementation block
@property (nonatomic,readonly) NSArray * layers;                        //@synthesize layers=_layers - In the implementation block
@property (nonatomic,retain) id anchorObjectReference;                  //@synthesize anchorObjectReference=_anchorObjectReference - In the implementation block
@property (assign,nonatomic) CGPoint anchorViewportCenter;              //@synthesize anchorViewportCenter=_anchorViewportCenter - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                      //@synthesize padding=_padding - In the implementation block
-(id)init;
-(NSArray *)layers;
-(void)update;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)visibleRectDidChange;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(id)axSpriteIndexes;
-(void)_updateSublayoutGeometries;
-(void)viewEnvironmentDidChange;
-(void)scrollSpeedRegimeDidChange;
-(void)userInterfaceDirectionDidChange;
-(void)sublayoutNeedsUpdate:(id)arg1 ;
-(void)sublayoutDidChangeContentSize:(id)arg1 ;
-(void)sublayoutDidChangeLastBaseline:(id)arg1 ;
-(void)didChangeSublayoutOrigins;
-(CGRect)sublayout:(id)arg1 visibleRectForRequestedVisibleRect:(CGRect)arg2 ;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(/*^block*/id)arg1 ;
-(long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(long long)itemForSpriteIndex:(unsigned)arg1 ;
-(void)setAnchorObjectReference:(id)arg1 ;
-(void)setAnchorViewportCenter:(CGPoint)arg1 ;
-(id)anchorObjectReference;
-(CGPoint)anchorViewportCenter;
-(void)setLayers:(id)arg1 primaryLayer:(id)arg2 ;
-(void)_configureSublayouts;
-(PXGLayout *)primaryLayer;
@end

