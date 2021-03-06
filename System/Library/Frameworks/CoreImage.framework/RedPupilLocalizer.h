/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface RedPupilLocalizer : CIFilter {

	CIImage* inputImage;
	NSNumber* inputIterations;
	NSNumber* inputScale;
	NSNumber* inputDecay;
	NSNumber* inputGamma;
	NSNumber* inputClip;
	NSNumber* inputLocalizationRadius;
	CIVector* inputExtent;
	NSNumber* inputDebug;
	CIVector* inputAxisLong;
	CIVector* inputAxisShort;
	CIVector* inputPupilCenter;
	NSNumber* inputSearchAxisLong;
	NSNumber* inputSearchAxisShort;

}

@property (nonatomic,retain) NSNumber * inputIterations; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputDecay; 
@property (nonatomic,retain) NSNumber * inputGamma; 
@property (nonatomic,retain) NSNumber * inputClip; 
@property (nonatomic,retain) NSNumber * inputLocalizationRadius; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) NSNumber * inputDebug; 
@property (nonatomic,retain) CIVector * inputAxisLong; 
@property (nonatomic,retain) CIVector * inputAxisShort; 
@property (nonatomic,retain) CIVector * inputPupilCenter; 
@property (nonatomic,retain) NSNumber * inputSearchAxisLong; 
@property (nonatomic,retain) NSNumber * inputSearchAxisShort; 
-(id)outputImage;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(NSNumber *)inputClip;
-(void)setInputClip:(NSNumber *)arg1 ;
-(NSNumber *)inputIterations;
-(void)setInputIterations:(NSNumber *)arg1 ;
-(NSNumber *)inputDecay;
-(void)setInputDecay:(NSNumber *)arg1 ;
-(NSNumber *)inputGamma;
-(void)setInputGamma:(NSNumber *)arg1 ;
-(NSNumber *)inputLocalizationRadius;
-(void)setInputLocalizationRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputDebug;
-(void)setInputDebug:(NSNumber *)arg1 ;
-(CIVector *)inputAxisLong;
-(void)setInputAxisLong:(CIVector *)arg1 ;
-(CIVector *)inputAxisShort;
-(void)setInputAxisShort:(CIVector *)arg1 ;
-(CIVector *)inputPupilCenter;
-(void)setInputPupilCenter:(CIVector *)arg1 ;
-(NSNumber *)inputSearchAxisLong;
-(void)setInputSearchAxisLong:(NSNumber *)arg1 ;
-(NSNumber *)inputSearchAxisShort;
-(void)setInputSearchAxisShort:(NSNumber *)arg1 ;
@end

