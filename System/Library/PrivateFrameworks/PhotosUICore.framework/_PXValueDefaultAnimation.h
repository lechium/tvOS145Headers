/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/_PXValueAnimation.h>

@interface _PXValueDefaultAnimation : _PXValueAnimation {

	double _initialValue;
	long long _curve;

}
-(double)currentValue;
-(id)initWithDuration:(double)arg1 currentMediaTime:(double)arg2 spec:(PXValueAnimationSpec)arg3 ;
-(id)initWithFromValue:(double)arg1 currentMediaTime:(double)arg2 spec:(PXValueAnimationSpec)arg3 ;
@end

