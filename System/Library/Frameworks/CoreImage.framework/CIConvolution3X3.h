/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIConvolution3X3 : CIFilter {

	CIImage* inputImage;
	CIVector* inputWeights;
	NSNumber* inputBias;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputWeights; 
@property (nonatomic,retain) NSNumber * inputBias; 
+(id)customAttributes;
-(BOOL)_isIdentity;
-(CIVector *)inputWeights;
-(void)setInputWeights:(CIVector *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputBias;
-(void)setInputBias:(NSNumber *)arg1 ;
@end

