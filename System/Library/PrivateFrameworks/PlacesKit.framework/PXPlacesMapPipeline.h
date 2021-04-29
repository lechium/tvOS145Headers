/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXPlacesMapPipelineComponentProvider.h>

@protocol PXPlacesMapLayout, PXPlacesMapUpdatePlan, PXPlacesMapRenderer, PXPlacesMapSelectionHandler;
@class PXPlacesImageCache, NSString;

@interface PXPlacesMapPipeline : NSObject <PXPlacesMapPipelineComponentProvider> {

	id<PXPlacesMapLayout> _layout;
	id<PXPlacesMapUpdatePlan> _updatePlan;
	id<PXPlacesMapRenderer> _renderer;
	id<PXPlacesMapSelectionHandler> _selectionHandler;
	PXPlacesImageCache* _imageCache;

}

@property (nonatomic,readonly) id<PXPlacesGeotaggedItemDataSource> dataSource; 
@property (readonly) id<PXPlacesMapLayout> layout;                                          //@synthesize layout=_layout - In the implementation block
@property (readonly) id<PXPlacesMapUpdatePlan> updatePlan;                                  //@synthesize updatePlan=_updatePlan - In the implementation block
@property (readonly) id<PXPlacesMapRenderer> renderer;                                      //@synthesize renderer=_renderer - In the implementation block
@property (readonly) id<PXPlacesMapSelectionHandler> selectionHandler;                      //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (retain) PXPlacesImageCache * imageCache;                                         //@synthesize imageCache=_imageCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(id<PXPlacesMapLayout>)layout;
-(id<PXPlacesMapRenderer>)renderer;
-(id<PXPlacesGeotaggedItemDataSource>)dataSource;
-(PXPlacesImageCache *)imageCache;
-(void)setImageCache:(PXPlacesImageCache *)arg1 ;
-(id<PXPlacesMapSelectionHandler>)selectionHandler;
-(id<PXPlacesMapUpdatePlan>)updatePlan;
-(id)initWithLayout:(id)arg1 updatePlan:(id)arg2 renderer:(id)arg3 selectionHandler:(id)arg4 ;
-(id)executeWithUpdatedViewPort:(id)arg1 andDataSourceChange:(id)arg2 ;
-(id)executeRemoval;
@end

