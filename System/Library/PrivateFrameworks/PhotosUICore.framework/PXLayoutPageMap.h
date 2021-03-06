/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMapTable, NSArray;

@interface PXLayoutPageMap : NSObject {

	NSMapTable* _pageMap;
	NSArray* _sources;
	CGRect _contentRect;

}
-(id)description;
-(id)initWithSources:(id)arg1 contentRect:(CGRect)arg2 ;
-(id)_screenPageForPoint:(CGPoint)arg1 ;
-(id)sourcesFromRect:(CGRect)arg1 ;
-(void)_mapSources:(id)arg1 ;
@end

