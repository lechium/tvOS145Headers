/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIPortraitBlurNoise : CIFilter {

	CIImage* inputImage;
	NSNumber* inputLumaNoiseAmpl;
	NSNumber* inputLumaNoiseModelCoeff;
	CIVector* inputExtent;
	NSNumber* inputUseMetal;

}

@property (retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseAmpl; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseModelCoeff; 
@property (copy) CIVector * inputExtent; 
@property (nonatomic,copy) NSNumber * inputUseMetal; 
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(id)_kernelMetal;
-(NSNumber *)inputLumaNoiseAmpl;
-(void)setInputLumaNoiseAmpl:(NSNumber *)arg1 ;
-(NSNumber *)inputLumaNoiseModelCoeff;
-(void)setInputLumaNoiseModelCoeff:(NSNumber *)arg1 ;
-(NSNumber *)inputUseMetal;
-(void)setInputUseMetal:(NSNumber *)arg1 ;
@end

