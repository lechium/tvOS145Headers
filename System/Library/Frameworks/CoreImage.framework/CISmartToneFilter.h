/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSData, CIContext;

@interface CISmartToneFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputExposure;
	NSNumber* inputContrast;
	NSNumber* inputBrightness;
	NSNumber* inputShadows;
	NSNumber* inputHighlights;
	NSNumber* inputBlack;
	NSNumber* inputRawHighlights;
	NSNumber* inputLocalLight;
	NSData* _inputLightMap;
	NSNumber* inputUseCube;
	id inputUseCubeColorSpace;
	CIImage* _cubeImage;
	NSData* _cubeData;
	CIContext* _cubeContext;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputExposure; 
@property (nonatomic,retain) NSNumber * inputContrast; 
@property (nonatomic,retain) NSNumber * inputBrightness; 
@property (nonatomic,retain) NSNumber * inputShadows; 
@property (nonatomic,retain) NSNumber * inputHighlights; 
@property (nonatomic,retain) NSNumber * inputBlack; 
@property (nonatomic,retain) NSNumber * inputRawHighlights; 
@property (nonatomic,retain) NSNumber * inputLocalLight; 
@property (nonatomic,retain) NSData * inputLightMap;                     //@synthesize inputLightMap=_inputLightMap - In the implementation block
@property (nonatomic,retain) NSNumber * inputUseCube; 
@property (nonatomic,retain) id inputUseCubeColorSpace; 
+(id)customAttributes;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_isIdentity;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputBrightness;
-(void)setInputBrightness:(NSNumber *)arg1 ;
-(NSNumber *)inputContrast;
-(void)setInputContrast:(NSNumber *)arg1 ;
-(NSData *)inputLightMap;
-(NSNumber *)inputLocalLight;
-(id)_kernelH;
-(NSNumber *)inputUseCube;
-(id)inputUseCubeColorSpace;
-(id)_kernelBneg;
-(id)_kernelBpos;
-(id)_kernelRH;
-(id)_kernelC;
-(NSNumber *)inputExposure;
-(void)setInputExposure:(NSNumber *)arg1 ;
-(NSNumber *)inputShadows;
-(void)setInputShadows:(NSNumber *)arg1 ;
-(NSNumber *)inputHighlights;
-(void)setInputHighlights:(NSNumber *)arg1 ;
-(NSNumber *)inputBlack;
-(void)setInputBlack:(NSNumber *)arg1 ;
-(NSNumber *)inputRawHighlights;
-(void)setInputRawHighlights:(NSNumber *)arg1 ;
-(void)setInputLocalLight:(NSNumber *)arg1 ;
-(void)setInputLightMap:(NSData *)arg1 ;
-(void)setInputUseCube:(NSNumber *)arg1 ;
-(void)setInputUseCubeColorSpace:(id)arg1 ;
@end

