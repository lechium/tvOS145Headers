/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIMix : CIFilter {

	CIImage* inputImage;
	CIImage* inputBackgroundImage;
	NSNumber* inputAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputBackgroundImage; 
@property (nonatomic,retain) NSNumber * inputAmount; 
+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputBackgroundImage;
-(void)setInputBackgroundImage:(CIImage *)arg1 ;
-(NSNumber *)inputAmount;
-(void)setInputAmount:(NSNumber *)arg1 ;
@end

