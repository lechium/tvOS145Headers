/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RawCamera/RawCamera-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface RAWSimpleLensCorrectionFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputDistortionScaleHalfMinorRadius;
	NSNumber* inputDistortionScaleMinorRadius;
	NSNumber* inputDistortionScaleMajorRadius;
	NSNumber* inputDistortionScaleMaxRadius;
	NSNumber* inputDraftMode;
	id inputColorSpace;
	NSNumber* inputFocalLength;

}
+(id)customAttributes;
-(id)customAttributes;
-(id)outputImage;
-(CGPoint)mapPoint:(CGPoint)arg1 info:(id)arg2 ;
-(CGRect)distortionRegionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
@end

