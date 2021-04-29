/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CIDisparityPreprocV3 : CIFilter {

	CIImage* inputImage;
	CIImage* inputAlphaImage;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputAlphaImage; 
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)preprocKernel;
-(id)preprocKernelNoAlpha;
-(CIImage *)inputAlphaImage;
-(void)setInputAlphaImage:(CIImage *)arg1 ;
@end

