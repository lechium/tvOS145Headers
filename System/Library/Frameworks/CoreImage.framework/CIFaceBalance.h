/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, NSNumber;

@interface CIFaceBalance : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSNumber* inputOrigI;
	NSNumber* inputOrigQ;
	NSNumber* inputStrength;
	NSNumber* inputWarmth;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputOrigI; 
@property (nonatomic,retain) NSNumber * inputOrigQ; 
@property (nonatomic,retain) NSNumber * inputStrength; 
@property (nonatomic,retain) NSNumber * inputWarmth; 
+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(NSNumber *)inputWarmth;
-(void)setInputWarmth:(NSNumber *)arg1 ;
-(void)setInputOrigI:(NSNumber *)arg1 ;
-(void)setInputOrigQ:(NSNumber *)arg1 ;
-(NSNumber *)inputOrigI;
-(NSNumber *)inputOrigQ;
@end

