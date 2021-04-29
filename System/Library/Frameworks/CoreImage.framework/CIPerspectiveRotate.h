/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPerspectiveRotate : CIFilter {

	float3x3 K;
	float3x3 invK;
	CIImage* inputImage;
	NSNumber* inputFocalLength;
	NSNumber* inputPitch;
	NSNumber* inputYaw;
	NSNumber* inputRoll;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputFocalLength; 
@property (nonatomic,copy) NSNumber * inputPitch; 
@property (nonatomic,copy) NSNumber * inputYaw; 
@property (nonatomic,copy) NSNumber * inputRoll; 
@property (nonatomic,readonly) float3x3 outputTransform; 
+(id)customAttributes;
-(float3x3)outputTransform;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)computeCameraIntrinsics;
-(NSNumber *)inputFocalLength;
-(void)setInputFocalLength:(NSNumber *)arg1 ;
-(NSNumber *)inputPitch;
-(void)setInputPitch:(NSNumber *)arg1 ;
-(NSNumber *)inputYaw;
-(void)setInputYaw:(NSNumber *)arg1 ;
-(NSNumber *)inputRoll;
-(void)setInputRoll:(NSNumber *)arg1 ;
@end

