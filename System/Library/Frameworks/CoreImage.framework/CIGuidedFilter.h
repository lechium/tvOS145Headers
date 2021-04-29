/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIGuidedFilter : CIFilter {

	CIImage* inputImage;
	CIImage* inputGuideImage;
	NSNumber* inputRadius;
	NSNumber* inputEpsilon;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputGuideImage; 
@property (copy) NSNumber * inputRadius; 
@property (copy) NSNumber * inputEpsilon; 
+(id)customAttributes;
-(id)_finalResult;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(id)_fullFloatBoxFilter;
-(id)_multiplyImagesKernel;
-(id)_boxFilter:(id)arg1 fullFloat:(BOOL)arg2 ;
-(id)_swizzleImageXXX1:(id)arg1 ;
-(id)_swizzleImageYYZ1:(id)arg1 ;
-(id)_swizzleImageYZZ1:(id)arg1 ;
-(id)multiplyImages:(id)arg1 imageB:(id)arg2 ;
-(id)subtract:(id)arg1 minus:(id)arg2 ;
-(id)_computeABKernel;
-(id)_downsampledColorImage:(id)arg1 ;
-(id)_combineRGB_and_A;
-(id)computeAB:(id)arg1 ;
-(id)_upsampleImage:(id)arg1 targetImageSize:(CGSize)arg2 ;
-(CIImage *)inputGuideImage;
-(void)setInputGuideImage:(CIImage *)arg1 ;
-(NSNumber *)inputEpsilon;
-(void)setInputEpsilon:(NSNumber *)arg1 ;
@end

