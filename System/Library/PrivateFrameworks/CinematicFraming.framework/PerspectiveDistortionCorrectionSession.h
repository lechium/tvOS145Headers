/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CinematicFraming.framework/CinematicFraming
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CinematicFraming/CinematicFraming-Structs.h>
#import <CinematicFraming/FrameUndistortionSession.h>

@interface PerspectiveDistortionCorrectionSession : FrameUndistortionSession {

	float _stereographicFisheyeF;
	float _stereographicFisheyeMaxStrength;

}
-(id)init;
-(CGSize)_scaleDisplayRectSizeToFit:(CGSize)arg1 ;
-(CGRect)_moveDisplayRectToFitInFramingSpaceLandscapeLeft:(CGRect)arg1 ;
-(BOOL)_pointInFramingSpaceLandscapeLeftIsValid:(CGRect)arg1 ;
-(CGSize)_searchValidSizeForStartSize:(CGSize)arg1 ;
-(6)_searchEarliestValidPointOnIntervalWithStart:(CGRect)arg1 ;
-(float)_fisheyeStrengthForDisplayRect:(CGRect)arg1 ;
-(SCD_Struct_Pe10)_rotationMatrixForDisplayRect:(CGRect)arg1 ;
-(5)_projectPointInFramingSpaceLandscapeLeft:(CGRect)arg1 ;
-(4)_outputPlaneSizeForDisplayRect:(CGRect)arg1 ;
-(CGRect)_framingSpaceBoundsLandscapeLeft;
-(float)_getHeightDerivativeForWidth:(float)arg1 widthDerivative:(float)arg2 outputAspectRatioInDeviceOrientation:(float)arg3 ;
-(float)_getHeightForWidth:(float)arg1 outputAspectRatioInDeviceOrientation:(float)arg2 ;
-(float)_getWidthForHeight:(float)arg1 outputAspectRatioInDeviceOrientation:(float)arg2 ;
-(CGRect)_adjustDisplayRectToFitInFramingSpaceLandscapeLeft:(CGRect)arg1 ;
-(CGRect)_projectRectInFramingSpaceLandscapeLeft:(CGRect)arg1 toDisplayRectInFramingSpaceLandscapeLeft:(CGRect)arg2 ;
-(CGRect)_warpRectInInputImageCoordinatesToFramingSpaceInLandscapeLeft:(CGRect)arg1 calibrationParameters:(SCD_Struct_Pe12)arg2 ;
-(id)_yyyyKernelShaderName;
-(id)_uvuvuvuvuvKernelShaderName;
-(void)_setYYYYShaderParametersForRotationNormalizedDisplayRect:(CGRect)arg1 gidToNormalizedOutput:(SCD_Struct_Pe12)arg2 calibrationParameters:(id)arg3 ;
-(void)_setUVUVShaderParametersForRotationNormalizedDisplayRect:(CGRect)arg1 gidToNormalizedOutput:(SCD_Struct_Pe12)arg2 calibrationParameters:(id)arg3 ;
@end

