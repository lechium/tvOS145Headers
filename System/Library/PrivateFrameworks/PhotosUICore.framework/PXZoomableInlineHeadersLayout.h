/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGSplitLayout.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>

@protocol PXZoomableInlineHeadersLayoutGeometrySource;
@class PXInlineHeadersSpriteLayout, PXZoomableInlineHeadersDataSourceManager, PXZoomableInlineHeadersLayoutSpec, NSString;

@interface PXZoomableInlineHeadersLayout : PXGSplitLayout <PXSectionedDataSourceManagerObserver> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	PXInlineHeadersSpriteLayout* _yearsLayout;
	PXInlineHeadersSpriteLayout* _monthsLayout;
	PXZoomableInlineHeadersDataSourceManager* _dataSourceManager;
	PXZoomableInlineHeadersLayoutSpec* _spec;
	id<PXZoomableInlineHeadersLayoutGeometrySource> _geometrySource;

}

@property (nonatomic,readonly) PXZoomableInlineHeadersDataSourceManager * dataSourceManager;                     //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) PXZoomableInlineHeadersLayoutSpec * spec;                                           //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) double yearsAlpha; 
@property (assign,nonatomic) double monthsAlpha; 
@property (assign,nonatomic,__weak) id<PXZoomableInlineHeadersLayoutGeometrySource> geometrySource;              //@synthesize geometrySource=_geometrySource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)update;
-(PXZoomableInlineHeadersLayoutSpec *)spec;
-(void)setSpec:(PXZoomableInlineHeadersLayoutSpec *)arg1 ;
-(PXZoomableInlineHeadersDataSourceManager *)dataSourceManager;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)initWithDataSourceManager:(id)arg1 ;
-(void)setGeometrySource:(id<PXZoomableInlineHeadersLayoutGeometrySource>)arg1 ;
-(void)setYearsAlpha:(double)arg1 ;
-(double)yearsAlpha;
-(void)setMonthsAlpha:(double)arg1 ;
-(double)monthsAlpha;
-(void)invalidateAnchorItemFrames;
-(void)invalidateGeometry;
-(void)_updateSublayouts;
-(id<PXZoomableInlineHeadersLayoutGeometrySource>)geometrySource;
@end

