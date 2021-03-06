/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXTilingCoordinateSpace : NSObject {

	PXTilingCoordinateSpace* _parentSpace;
	CGAffineTransform _transform;

}

@property (nonatomic,readonly) void* identifier; 
@property (assign,nonatomic,__weak) PXTilingCoordinateSpace * parentSpace;              //@synthesize parentSpace=_parentSpace - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                               //@synthesize transform=_transform - In the implementation block
-(id)init;
-(void*)identifier;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(PXTilingCoordinateSpace *)parentSpace;
-(void)setParentSpace:(PXTilingCoordinateSpace *)arg1 ;
@end

