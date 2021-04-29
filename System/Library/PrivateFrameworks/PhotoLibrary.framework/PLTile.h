/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@interface PLTile : NSObject {

	IOSurfaceRef _decodedSurface;
	CGRect _imageRect;
	id _tileId;
	BOOL _visible;

}
-(void)dealloc;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(void)setDecodedSurface:(IOSurfaceRef)arg1 ;
-(IOSurfaceRef)decodedSurface;
-(CGRect)imageRect;
-(void)setImageRect:(CGRect)arg1 ;
-(id)tileId;
-(void)setTileId:(id)arg1 ;
@end

