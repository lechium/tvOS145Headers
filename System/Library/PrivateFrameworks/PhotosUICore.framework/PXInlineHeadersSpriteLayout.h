/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGItemsLayout.h>
#import <libobjc.A.dylib/PXGItemsGeometry.h>
#import <libobjc.A.dylib/PXGViewSource.h>

@protocol PXZoomableInlineHeadersLayoutGeometrySource;
@class NSDateFormatter, NSCalendar, NSIndexSet, PXZoomableInlineHeadersLayoutSpec, PXZoomableInlineHeadersDataSource, NSString;

@interface PXInlineHeadersSpriteLayout : PXGItemsLayout <PXGItemsGeometry, PXGViewSource> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	NSDateFormatter* _yearFormatter;
	NSDateFormatter* _monthFormatter;
	NSCalendar* _calendar;
	unsigned short _mediaVersion;
	BOOL _didHideSprites;
	NSIndexSet* _axSpriteIndexes;
	unsigned long long _level;
	unsigned long long _style;
	PXZoomableInlineHeadersLayoutSpec* _spec;
	PXZoomableInlineHeadersDataSource* _dataSource;
	id<PXZoomableInlineHeadersLayoutGeometrySource> _geometrySource;

}

@property (nonatomic,readonly) unsigned long long level;                                                         //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                                           //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) PXZoomableInlineHeadersLayoutSpec * spec;                                           //@synthesize spec=_spec - In the implementation block
@property (nonatomic,retain) PXZoomableInlineHeadersDataSource * dataSource;                                     //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PXZoomableInlineHeadersLayoutGeometrySource> geometrySource;              //@synthesize geometrySource=_geometrySource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)level;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)update;
-(PXZoomableInlineHeadersDataSource *)dataSource;
-(id)initWithLevel:(unsigned long long)arg1 ;
-(void)setDataSource:(PXZoomableInlineHeadersDataSource *)arg1 ;
-(PXZoomableInlineHeadersLayoutSpec *)spec;
-(void)setSpec:(PXZoomableInlineHeadersLayoutSpec *)arg1 ;
-(Class)viewClassForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)_updateSprites;
-(void)visibleRectDidChange;
-(void)screenScaleDidChange;
-(void)alphaDidChange;
-(id)axSpriteIndexes;
-(id)axSpriteIndexesInRect:(CGRect)arg1 ;
-(unsigned)axSpriteIndexClosestToSpriteIndex:(unsigned)arg1 inDirection:(unsigned long long)arg2 ;
-(void)setGeometrySource:(id<PXZoomableInlineHeadersLayoutGeometrySource>)arg1 ;
-(void)invalidateAnchorItemFrames;
-(id<PXZoomableInlineHeadersLayoutGeometrySource>)geometrySource;
-(long long)itemClosestToItem:(long long)arg1 inDirection:(unsigned long long)arg2 ;
-(id)itemsBetweenItem:(long long)arg1 andItem:(long long)arg2 ;
-(id)itemsInRect:(CGRect)arg1 inLayout:(id)arg2 ;
-(void)_setupDateFormatters;
-(void)_currentLocaleChanged:(id)arg1 ;
-(void)_bumpMediaVersion;
-(id)itemsGeometry;
@end
