/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber, CIVector;

@interface RAWVignetteRadial : RAWFilter {

	CIImage* inputImage;
	NSNumber* inputVignetteK0;
	NSNumber* inputVignetteK1;
	NSNumber* inputVignetteK2;
	NSNumber* inputVignetteK3;
	NSNumber* inputVignetteK4;
	CIVector* inputVignetteCenter;
	id inputColorSpace;
	NSNumber* inputVignetteExecute;

}
+(id)customAttributes;
-(id)outputImage;
@end

