/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, MLModel, NSNumber;

@interface CICoreMLModelFilter : CIFilter {

	CIImage* inputImage;
	MLModel* inputModel;
	NSNumber* inputHeadIndex;
	NSNumber* inputSoftmaxNormalization;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) MLModel * inputModel; 
@property (nonatomic,retain) NSNumber * inputHeadIndex; 
@property (nonatomic,retain) NSNumber * inputSoftmaxNormalization; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(MLModel *)inputModel;
-(void)setInputModel:(MLModel *)arg1 ;
-(NSNumber *)inputHeadIndex;
-(void)setInputHeadIndex:(NSNumber *)arg1 ;
-(NSNumber *)inputSoftmaxNormalization;
-(void)setInputSoftmaxNormalization:(NSNumber *)arg1 ;
@end

