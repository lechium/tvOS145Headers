/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UICoordinateSpace;
@class NSObject;

@interface PXCoordinatedRect : NSObject <NSCopying> {

	NSObject*<UICoordinateSpace> _coordinateSpace;
	CGRect _rect;

}

@property (nonatomic,readonly) CGRect rect;                                               //@synthesize rect=_rect - In the implementation block
@property (nonatomic,readonly) NSObject*<UICoordinateSpace> coordinateSpace;              //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(CGRect)rect;
-(NSObject*<UICoordinateSpace>)coordinateSpace;
-(id)initWithRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(CGRect)rectInCoordinateSpace:(id)arg1 ;
@end

