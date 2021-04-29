/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXTimelineCrop : NSObject {

	double _cropScore;
	CGRect _cropRect;

}

@property (nonatomic,readonly) double cropScore;              //@synthesize cropScore=_cropScore - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;               //@synthesize cropRect=_cropRect - In the implementation block
+(id)cropForAsset:(id)arg1 withTargetSize:(CGSize)arg2 ;
-(id)description;
-(CGRect)cropRect;
-(id)initWithCrop:(CGRect)arg1 score:(double)arg2 ;
-(double)cropScore;
@end

