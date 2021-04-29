/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIColorMatrix : CIFilter {

	CIImage* inputImage;
	CIVector* inputRVector;
	CIVector* inputGVector;
	CIVector* inputBVector;
	CIVector* inputAVector;
	CIVector* inputBiasVector;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputRVector; 
@property (nonatomic,retain) CIVector * inputGVector; 
@property (nonatomic,retain) CIVector * inputBVector; 
@property (nonatomic,retain) CIVector * inputAVector; 
@property (nonatomic,retain) CIVector * inputBiasVector; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputRVector;
-(void)setInputRVector:(CIVector *)arg1 ;
-(CIVector *)inputGVector;
-(void)setInputGVector:(CIVector *)arg1 ;
-(CIVector *)inputBVector;
-(void)setInputBVector:(CIVector *)arg1 ;
-(CIVector *)inputAVector;
-(void)setInputAVector:(CIVector *)arg1 ;
-(CIVector *)inputBiasVector;
-(void)setInputBiasVector:(CIVector *)arg1 ;
@end

