/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Vision/Vision-Structs.h>
@interface VNBlurMeasure : NSObject
+(BOOL)computeBlurScore:(float*)arg1 onGrayscaleImage:(CVBufferRef)arg2 andWithRegionOfInterestInImageCoordinates:(CGRect)arg3 andRegionOfInterestInsetFactor:(float)arg4 error:(id*)arg5 ;
+(BOOL)computeBlurScore:(float*)arg1 onGrayscaleImage:(CVBufferRef)arg2 insetFactor:(float)arg3 error:(id*)arg4 ;
+(BOOL)computeBlurScore:(float*)arg1 usingBlurSignature:(id)arg2 insetFactor:(float)arg3 imageROI:(CGRect)arg4 error:(id*)arg5 ;
+(BOOL)computeEdgeWidthBlurScore:(float*)arg1 onGrayscaleImage:(CVBufferRef)arg2 error:(id*)arg3 ;
+(BOOL)computeApproximateBlurScore:(float*)arg1 onGrayscaleImage:(CVBufferRef)arg2 sampledPixelsCount:(int)arg3 insetFactor:(float)arg4 error:(id*)arg5 ;
+(BOOL)computeApproximateBlurScore:(float*)arg1 onRGBAImage:(CVBufferRef)arg2 sampledPixelsCount:(int)arg3 insetFactor:(float)arg4 error:(id*)arg5 ;
@end

