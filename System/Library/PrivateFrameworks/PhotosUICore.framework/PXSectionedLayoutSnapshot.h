/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutSnapshot.h>

@class NSArray, PXLayoutPageMap;

@interface PXSectionedLayoutSnapshot : PXLayoutSnapshot {

	NSArray* _sections;
	PXLayoutPageMap* _pageMap;

}
+(id)emptyLayoutSnapshot;
-(id)description;
-(id)init;
-(id)initWithContentRect:(CGRect)arg1 ;
-(id)initWithContentRect:(CGRect)arg1 forSections:(id)arg2 ;
-(PXLayoutGeometry)geometryForItem:(id)arg1 ;
-(void)enumerateGeometriesForItemsInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateFramesForSectionsInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGRect)frameForSectionAtIndex:(unsigned long long)arg1 ;
@end

