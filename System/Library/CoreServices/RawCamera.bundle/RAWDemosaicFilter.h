/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RawCamera/RawCamera-Structs.h>
#import <RawCamera/RAWFilter.h>

@class CIImage, CIVector, NSNumber;

@interface RAWDemosaicFilter : RAWFilter {

	CIImage* inputImage;
	CIVector* inputBlacks;
	NSNumber* inputRange;
	CIVector* inputFactors;
	NSNumber* inputPattern;
	NSNumber* inputDespeckle;
	CIVector* inputCropRect;
	NSNumber* inputRepresentativeNoise;
	NSNumber* inputDraftMode;
	NSNumber* inputScaleFactor;
	CIVector* inputNoiseModel;
	NSNumber* inputBaselineExposure;
	NSNumber* inputVersion;

}
-(id)range;
-(id)outputImage;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)crop;
-(id)phaseForBayer;
-(id)phaseForXtrans;
-(int)sensorType;
-(int)versionfor:(int)arg1 ;
-(id)phaseFor:(int)arg1 ;
-(int)forceVersion;
-(id)exposureFactor;
-(id)blacks;
-(id)noiseModel;
@end
