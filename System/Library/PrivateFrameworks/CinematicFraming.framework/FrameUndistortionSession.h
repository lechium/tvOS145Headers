/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CinematicFraming.framework/CinematicFraming
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CinematicFraming/CinematicFraming-Structs.h>
#import <libobjc.A.dylib/FramingSpaceManager.h>

@protocol MTLDevice, MTLCommandQueue, MTLLibrary;
@interface FrameUndistortionSession : NSObject <FramingSpaceManager> {

	SCD_Struct_Ci4 _outputDimensions;
	int _cameraOrientation;
	int _numCCWRotationsFromInputToFramingSpace;
	 _gravity;
	id<MTLDevice> _metalDevice;
	id<MTLCommandQueue> _commandQueue;
	id<MTLLibrary> _library;
	SCD_Struct_Fr14 _kernels;
	SCD_Struct_Fr16 _calibrationParameters;

}

@property (assign,nonatomic) SCD_Struct_Ci4 outputDimensions;                           //@synthesize outputDimensions=_outputDimensions - In the implementation block
@property (assign,nonatomic) int cameraOrientation; 
@property (nonatomic,readonly) int numCCWRotationsFromInputToFramingSpace;              //@synthesize numCCWRotationsFromInputToFramingSpace=_numCCWRotationsFromInputToFramingSpace - In the implementation block
@property (nonatomic,readonly)  gravity;                                                //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fr17 calibrationParams;                       //@synthesize calibrationParameters=_calibrationParameters - In the implementation block
@property (nonatomic,readonly) CGRect framingSpaceBounds; 
@property (nonatomic,readonly) CGRect defaultFramingSpaceViewport; 
@property (nonatomic,readonly) float maxWidth; 
-(id)init;
-()gravity;
-(float)maxWidth;
-(void)setOutputDimensions:(SCD_Struct_Ci4)arg1 ;
-(SCD_Struct_Ci4)outputDimensions;
-(int)cameraOrientation;
-(CGRect)computeNewCoordinatesInOrientation:(int)arg1 forViewportInCurrentOrientation:(CGRect)arg2 ;
-(void)setCameraOrientation:(int)arg1 ;
-(int)processBuffer:(CVBufferRef)arg1 cropRect:(CGRect)arg2 outputPixelBuffer:(CVBufferRef)arg3 ;
-(void)registerCalibrationData:(id)arg1 ;
-(void)registerGravityX:(float)arg1 y:(float)arg2 z:(float)arg3 ;
-(void)warpMetadataInInputImageCoordinatesToFramingSpace:(id)arg1 ;
-(CGRect)warpRectInInputImageCoordinatesToFramingSpace:(CGRect)arg1 ;
-(CGRect)projectRectInFramingSpace:(CGRect)arg1 toDisplayRectInFramingSpace:(CGRect)arg2 ;
-(CGRect)framingSpaceBounds;
-(CGRect)defaultFramingSpaceViewport;
-(CGRect)adjustDisplayRectToFitInFramingSpace:(CGRect)arg1 ;
-(float)getHeightForWidth:(float)arg1 ;
-(float)getWidthForHeight:(float)arg1 ;
-(SCD_Struct_Fr17)calibrationParams;
-(int)numCCWRotationsFromInputToFramingSpace;
-(CGRect)_framingSpaceBoundsLandscapeLeft;
-(float)_getHeightDerivativeForWidth:(float)arg1 widthDerivative:(float)arg2 outputAspectRatioInDeviceOrientation:(float)arg3 ;
-(float)_getHeightForWidth:(float)arg1 outputAspectRatioInDeviceOrientation:(float)arg2 ;
-(float)_getWidthForHeight:(float)arg1 outputAspectRatioInDeviceOrientation:(float)arg2 ;
-(CGRect)_adjustDisplayRectToFitInFramingSpaceLandscapeLeft:(CGRect)arg1 ;
-(CGRect)_projectRectInFramingSpaceLandscapeLeft:(CGRect)arg1 toDisplayRectInFramingSpaceLandscapeLeft:(CGRect)arg2 ;
-(CGRect)_warpRectInInputImageCoordinatesToFramingSpaceInLandscapeLeft:(CGRect)arg1 calibrationParameters:(SCD_Struct_Fr17)arg2 ;
-(id)_yyyyKernelShaderName;
-(id)_uvuvuvuvuvKernelShaderName;
-(void)_setYYYYShaderParametersForRotationNormalizedDisplayRect:(CGRect)arg1 gidToNormalizedOutput:(SCD_Struct_Fr17)arg2 calibrationParameters:(id)arg3 ;
-(void)_setUVUVShaderParametersForRotationNormalizedDisplayRect:(CGRect)arg1 gidToNormalizedOutput:(SCD_Struct_Fr17)arg2 calibrationParameters:(id)arg3 ;
-(float)getHeightDerivativeForWidth:(float)arg1 widthDerivative:(float)arg2 ;
-(void)initializeMetal;
-(int)_computeNumberOfCCWRotationsFromInputToFramingSpaceForOrientation:(int)arg1 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(unsigned long long)arg4 pixelRatio:(unsigned long long)arg5 ;
-(float)outputAspectRatioInDeviceOrientation;
-(void)compileShaders;
-(id)computePipelineStateFor:(id)arg1 ;
@end

