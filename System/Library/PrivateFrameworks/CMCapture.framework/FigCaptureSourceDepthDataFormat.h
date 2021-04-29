/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSourceFormat.h>

@class NSArray;

@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) SCD_Struct_BW2 dimensions; 
@property (readonly) float minSupportedFrameRate; 
@property (readonly) float maxSupportedFrameRate; 
@property (readonly) float fieldOfView; 
@property (readonly) SCD_Struct_BW2 highResStillImageDimensions; 
@property (getter=isStillImageOnlyDepthData,readonly) BOOL stillImageOnlyDepthData; 
@property (readonly) float portraitEffectsMatteMainImageDownscalingFactor; 
@property (readonly) BOOL RGBIRStereoFusionSupported; 
@property (readonly) NSArray * supportedSemanticSegmentationMatteURNs; 
-(unsigned)mediaType;
-(SCD_Struct_BW2)dimensions;
-(float)fieldOfView;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(float)minSupportedFrameRate;
-(float)maxSupportedFrameRate;
-(SCD_Struct_BW2)highResStillImageDimensions;
-(float)portraitEffectsMatteMainImageDownscalingFactor;
-(NSArray *)supportedSemanticSegmentationMatteURNs;
-(id)copyWithNewPixelFormat:(unsigned)arg1 ;
-(BOOL)isStillImageOnlyDepthData;
-(SCD_Struct_BW2)depthEngineOutputDimensions;
-(BOOL)RGBIRStereoFusionSupported;
@end
