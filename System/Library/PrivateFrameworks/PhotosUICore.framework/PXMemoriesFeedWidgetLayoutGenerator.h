/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXMemoriesFeedLayoutGenerator.h>

@class PXMemoriesFeedWidgetLayoutMetrics;

@interface PXMemoriesFeedWidgetLayoutGenerator : PXMemoriesFeedLayoutGenerator {

	LayoutContext _context;

}

@property (nonatomic,copy) PXMemoriesFeedWidgetLayoutMetrics * metrics; 
-(CGSize)size;
-(id)initWithMetrics:(id)arg1 ;
-(CGSize)estimatedSize;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(id)geometryKinds;
@end
