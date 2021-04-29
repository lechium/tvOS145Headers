/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPercentileRed : CIFilter {

	CIImage* inputImage;
	NSNumber* inputPercentile;
	NSNumber* inputCount;
	NSNumber* inputScale;
	NSNumber* inputNormalize;
	NSNumber* inputClip;
	NSNumber* inputHard;

}

@property (nonatomic,retain) NSNumber * inputPercentile; 
@property (nonatomic,retain) NSNumber * inputCount; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputNormalize; 
@property (nonatomic,retain) NSNumber * inputClip; 
@property (nonatomic,retain) NSNumber * inputHard; 
+(id)customAttributes;
-(NSNumber *)inputCount;
-(id)outputImage;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(void)setInputCount:(NSNumber *)arg1 ;
-(NSNumber *)inputPercentile;
-(void)setInputPercentile:(NSNumber *)arg1 ;
-(NSNumber *)inputNormalize;
-(void)setInputNormalize:(NSNumber *)arg1 ;
-(NSNumber *)inputClip;
-(void)setInputClip:(NSNumber *)arg1 ;
-(NSNumber *)inputHard;
-(void)setInputHard:(NSNumber *)arg1 ;
@end

