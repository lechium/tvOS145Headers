/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSourceFormat.h>

@class NSArray, FigCaptureSourceCompanionFormat;

@interface FigCaptureSourceVideoFormat : FigCaptureSourceFormat {

	NSArray* _frontEndScalerCompanionFormats;
	BOOL _sifrSupported;
	FigCaptureSourceCompanionFormat* _nonSIFRCompanionFormat;
	FigCaptureSourceCompanionFormat* _depthCompanionFormat;
	FigCaptureSourceVideoFormat* _cinematicFramingFormat;
	FigCaptureSourceVideoFormat* _geometricDistortionCorrectionFormat;
	NSArray* _supportedDepthDataFormats;
	BOOL _isStreamingDisparitySupported;
	BOOL _isStreamingDepthSupported;
	BOOL _isStillImageDisparitySupported;
	BOOL _isStillImageDepthSupported;

}

@property (readonly) int formatIndex; 
@property (readonly) SCD_Struct_BW2 dimensions; 
@property (readonly) SCD_Struct_BW2 sensorDimensions; 
@property (readonly) SCD_Struct_BW2 previewDimensions; 
@property (readonly) float minSupportedFrameRate; 
@property (readonly) float maxSupportedFrameRate; 
@property (readonly) float fieldOfView; 
@property (readonly) float geometricDistortionCorrectedFieldOfView; 
@property (readonly) SCD_Struct_BW2 geometricDistortionCorrectedNativeDimensions; 
@property (getter=isBinned,readonly) BOOL binned; 
@property (readonly) int stabilizationTypeForTimelapse; 
@property (readonly) int stabilizationTypeOverrideForStandard; 
@property (readonly) int stabilizationTypeOverrideForCinematic; 
@property (readonly) float stabilizationOverscanPercentageOverrideForStandard; 
@property (readonly) float stabilizationOverscanPercentageOverrideForCinematic; 
@property (readonly) float cinematicStabilizationExtendedLookAheadDuration; 
@property (getter=isZoomSupported,readonly) BOOL zoomSupported; 
@property (readonly) float maxZoomFactor; 
@property (readonly) float zoomFactorUpscaleThreshold; 
@property (getter=isZoomDynamicSensorCropSupported,readonly) BOOL zoomDynamicSensorCropSupported; 
@property (readonly) int rawBitDepth; 
@property (readonly) float minISO; 
@property (readonly) float maxISO; 
@property (readonly) SCD_Struct_BW7 minExposureDuration; 
@property (readonly) SCD_Struct_BW7 maxExposureDuration; 
@property (readonly) BOOL hasSensorHDRCompanionIndex; 
@property (readonly) BOOL prefersSensorHDREnabled; 
@property (getter=isSIFRSupported,readonly) BOOL SIFRSupported; 
@property (getter=isLowLightVideoCaptureSupported,readonly) BOOL lowLightVideoCaptureSupported; 
@property (getter=isVariableFrameRateVideoCaptureSupported,readonly) BOOL variableFrameRateVideoCaptureSupported; 
@property (getter=isVisionDataDeliverySupported,readonly) BOOL visionDataDeliverySupported; 
@property (getter=isCameraCalibrationDataDeliverySupported,readonly) BOOL cameraCalibrationDataDeliverySupported; 
@property (getter=isPointCloudDataDeliverySupported,readonly) BOOL pointCloudDataDeliverySupported; 
@property (getter=isSecondaryScalerUnavailable,readonly) BOOL secondaryScalerUnavailable; 
@property (getter=isStudioAndContourPreviewRenderingSupported,readonly) BOOL studioAndContourPreviewRenderingSupported; 
@property (getter=isStagePreviewRenderingSupported,readonly) BOOL stagePreviewRenderingSupported; 
@property (getter=isWideAsStatsMasterEnabled,readonly) BOOL wideAsStatsMasterEnabled; 
@property (readonly) BOOL is10bitVideoFormat; 
@property (getter=isVideoHDRFusionSupported,readonly) BOOL videoHDRFusionSupported; 
@property (readonly) int autoFocusSystem; 
@property (getter=isPhotoFormat,readonly) BOOL photoFormat; 
@property (getter=isHighResPhotoFormat,readonly) BOOL highResPhotoFormat; 
@property (getter=isStillImageStabilizationSupported,readonly) BOOL stillImageStabilizationSupported; 
@property (getter=isSupplementalTimeOfFlightCameraSupported,readonly) BOOL supplementalTimeOfFlightCameraSupported; 
@property (readonly) BOOL configureForStillImageStabilizationSupport; 
@property (readonly) BOOL configureForSpatialOverCaptureSupport; 
@property (readonly) BOOL configureForDigitalFlashSupport; 
@property (getter=isIrisSupported,readonly) BOOL irisSupported; 
@property (getter=isIrisVideoStabilizationSupported,readonly) BOOL irisVideoStabilizationSupported; 
@property (getter=isHDRSupported,readonly) BOOL hdrSupported; 
@property (getter=isGNRHDRSupported,readonly) BOOL gnrHDRSupported; 
@property (getter=isHighResStillImageSupported,readonly) BOOL highResStillImageSupported; 
@property (getter=isQuadraHighResStillImageSupported,readonly) BOOL quadraHighResStillImageSupported; 
@property (getter=isStereoFusionSupported,readonly) BOOL stereoFusionSupported; 
@property (getter=isISPMultiBandNoiseReductionSupported,readonly) BOOL ispMultiBandNoiseReductionSupported; 
@property (getter=isStillImageISPMultiBandNoiseReductionSupported,readonly) BOOL stillImageISPMultiBandNoiseReductionSupported; 
@property (getter=isZeroShutterLagSupported,readonly) BOOL zeroShutterLagSupported; 
@property (readonly) BOOL zeroShutterLagRequiresUserInitiatedCaptureRequestTime; 
@property (getter=isRedEyeReductionSupported,readonly) BOOL redEyeReductionSupported; 
@property (getter=isDigitalFlashSupported,readonly) BOOL digitalFlashSupported; 
@property (readonly) NSArray * digitalFlashDetectedObjectTypes; 
@property (getter=isDeepFusionSupported,readonly) BOOL deepFusionSupported; 
@property (getter=isResponsiveShutterSupported,readonly) BOOL responsiveShutterSupported; 
@property (readonly) SCD_Struct_BW2 highResStillImageDimensions; 
@property (readonly) SCD_Struct_BW2 stillImageGDCInDCProcessorOutputCropDimensions; 
@property (getter=isWideColorSupported,readonly) BOOL wideColorSupported; 
@property (readonly) NSArray * supportedColorSpaces; 
@property (readonly) unsigned supportedRawPixelFormat; 
@property (readonly) unsigned internalDemosaicedRawPixelFormat; 
@property (readonly) unsigned supportedDemosaicedRawPixelFormat; 
@property (readonly) float defaultSimulatedAperture; 
@property (readonly) float minSimulatedAperture; 
@property (readonly) float maxSimulatedAperture; 
@property (readonly) float defaultPortraitLightingEffectStrength; 
@property (readonly) float minPortraitLightingEffectStrength; 
@property (readonly) float maxPortraitLightingEffectStrength; 
@property (getter=isSIFRStillImageCaptureWithDepthDataDisabled,readonly) BOOL sifrStillImageCaptureWithDepthDataDisabled; 
@property (getter=isHighProfileH264Supported,readonly) BOOL highProfileH264Supported; 
@property (readonly) NSArray * AVCaptureSessionPresets; 
@property (getter=isStreamingDisparitySupported,readonly) BOOL streamingDisparitySupported; 
@property (getter=isStreamingDepthSupported,readonly) BOOL streamingDepthSupported; 
@property (getter=isStillImageDisparitySupported,readonly) BOOL stillImageDisparitySupported; 
@property (getter=isStillImageDepthSupported,readonly) BOOL stillImageDepthSupported; 
@property (readonly) NSArray * supportedDepthDataFormats; 
@property (readonly) float minZoomFactorForDepthDataDelivery; 
@property (readonly) float maxZoomFactorForDepthDataDelivery; 
@property (getter=isMomentCaptureMovieRecordingSupported,readonly) BOOL momentCaptureMovieRecordingSupported; 
@property (getter=isSpatialOverCaptureSupported,readonly) BOOL spatialOverCaptureSupported; 
@property (readonly) float spatialOverCapturePercentage; 
@property (getter=isNonDestructiveCropSupported,readonly) BOOL nonDestructiveCropSupported; 
@property (getter=isDeferredPhotoProcessingSupported,readonly) BOOL deferredPhotoProcessingSupported; 
@property (getter=isMultiCamSupported,readonly) BOOL multiCamSupported; 
@property (readonly) float hardwareCost; 
@property (readonly) int sensorPowerConsumption; 
@property (readonly) int baseSensorPowerConsumption; 
@property (readonly) int variableSensorPowerConsumption; 
@property (readonly) int ispPowerConsumption; 
@property (getter=isGlobalToneMappingSupported,readonly) BOOL globalToneMappingSupported; 
@property (nonatomic,readonly) int dcProcessorVersion; 
@property (nonatomic,readonly) BOOL intelligentDistortionCorrectionSupported; 
@property (nonatomic,readonly) BOOL stillImageGeometricDistortionCorrectionInDCProcessorSupported; 
@property (getter=isCinematicFramingSupported,readonly) BOOL cinematicFramingSupported; 
@property (readonly) FigCaptureSourceVideoFormat * cinematicFramingFormat; 
@property (readonly) FigCaptureSourceVideoFormat * geometricDistortionCorrectionFormat; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)mediaType;
-(SCD_Struct_BW2)dimensions;
-(id)initWithXPCEncoding:(id)arg1 ;
-(float)fieldOfView;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(NSArray *)supportedDepthDataFormats;
-(float)maxZoomFactor;
-(int)autoFocusSystem;
-(float)minISO;
-(float)maxISO;
-(SCD_Struct_BW7)minExposureDuration;
-(SCD_Struct_BW7)maxExposureDuration;
-(BOOL)isWideColorSupported;
-(BOOL)isStillImageDisparitySupported;
-(BOOL)isStillImageDepthSupported;
-(BOOL)isStreamingDisparitySupported;
-(BOOL)isStreamingDepthSupported;
-(BOOL)isMultiCamSupported;
-(float)minSupportedFrameRate;
-(float)maxSupportedFrameRate;
-(BOOL)isBinned;
-(float)zoomFactorUpscaleThreshold;
-(float)minZoomFactorForDepthDataDelivery;
-(float)maxZoomFactorForDepthDataDelivery;
-(FigCaptureSourceVideoFormat *)cinematicFramingFormat;
-(int)stabilizationTypeForTimelapse;
-(BOOL)isGlobalToneMappingSupported;
-(BOOL)hasSensorHDRCompanionIndex;
-(BOOL)isSIFRSupported;
-(BOOL)is10bitVideoFormat;
-(BOOL)isStabilizationModeSupported:(int)arg1 ;
-(FigCaptureSourceVideoFormat *)geometricDistortionCorrectionFormat;
-(SCD_Struct_BW2)highResStillImageDimensions;
-(BOOL)isHighResStillImageSupported;
-(BOOL)isStillImageStabilizationSupported;
-(NSArray *)supportedColorSpaces;
-(BOOL)isPhotoFormat;
-(float)geometricDistortionCorrectedFieldOfView;
-(BOOL)intelligentDistortionCorrectionSupported;
-(BOOL)isCinematicFramingSupported;
-(NSArray *)AVCaptureSessionPresets;
-(BOOL)prefersSensorHDREnabled;
-(BOOL)isZoomDynamicSensorCropSupported;
-(BOOL)isRedEyeReductionSupported;
-(BOOL)isDigitalFlashSupported;
-(BOOL)isStereoFusionSupported;
-(BOOL)isIrisSupported;
-(BOOL)isIrisVideoStabilizationSupported;
-(int)rawBitDepth;
-(BOOL)isHighResPhotoFormat;
-(BOOL)isHighProfileH264Supported;
-(int)formatIndex;
-(float)defaultMaxFrameRateForSessionPreset:(id)arg1 ;
-(float)defaultMinFrameRateForSessionPreset:(id)arg1 ;
-(SCD_Struct_BW2)sensorDimensions;
-(SCD_Struct_BW2)previewDimensions;
-(BOOL)isQuadraHighResStillImageSupported;
-(BOOL)isHDRSupported;
-(float)hardwareCost;
-(int)baseSensorPowerConsumption;
-(int)variableSensorPowerConsumption;
-(int)ispPowerConsumption;
-(unsigned)supportedRawPixelFormat;
-(unsigned)internalDemosaicedRawPixelFormat;
-(unsigned)supportedDemosaicedRawPixelFormat;
-(BOOL)isLowLightVideoCaptureSupported;
-(BOOL)isVariableFrameRateVideoCaptureSupported;
-(BOOL)isVisionDataDeliverySupported;
-(BOOL)isCameraCalibrationDataDeliverySupported;
-(float)defaultSimulatedAperture;
-(float)minSimulatedAperture;
-(float)maxSimulatedAperture;
-(float)defaultPortraitLightingEffectStrength;
-(float)minPortraitLightingEffectStrength;
-(float)maxPortraitLightingEffectStrength;
-(BOOL)isResponsiveShutterSupported;
-(BOOL)isMomentCaptureMovieRecordingSupported;
-(BOOL)isSpatialOverCaptureSupported;
-(float)spatialOverCapturePercentage;
-(BOOL)isNonDestructiveCropSupported;
-(BOOL)isDeferredPhotoProcessingSupported;
-(BOOL)isDeepFusionSupported;
-(BOOL)isVideoHDRFusionSupported;
-(int)stabilizationTypeOverrideForStandard;
-(float)stabilizationOverscanPercentageOverrideForStandard;
-(float)stabilizationOverscanPercentageOverrideForCinematic;
-(float)cinematicStabilizationExtendedLookAheadDuration;
-(int)semanticDevelopmentVersion;
-(int)semanticRenderingVersion;
-(int)horizontalSensorBinningFactor;
-(int)verticalSensorBinningFactor;
-(SCD_Struct_BW2)_outputDimensions;
-(BOOL)isZoomSupported;
-(id)copyWithNewPixelFormat:(unsigned)arg1 ;
-(BOOL)isSupplementalTimeOfFlightCameraSupported;
-(int)stillImageNoiseReductionAndStabilizationScheme;
-(BOOL)sushiRawBlackBorderingEnabled;
-(SCD_Struct_BW2)sensorCropDimensions;
-(id)rawLensShadingCorrection;
-(float)aeMaxGain;
-(id)initWithFigCaptureStreamFormatDictionary:(id)arg1 ;
-(void)_resolveProperties;
-(SCD_Struct_BW2)cinematicFramingOutputDimensions;
-(SCD_Struct_BW2)_maxUseableSensorDimensions;
-(SCD_Struct_BW2)_nativeDimensionsWithoutCrop;
-(SCD_Struct_BW2)preGDCSensorCropDimensions;
-(int)stabilizationTypeOverrideForCinematic;
-(SCD_Struct_BW2)_visibleSensorDimensionsIncludingCinematic:(BOOL)arg1 ;
-(SCD_Struct_BW2)_highQualitySensorDimensions;
-(id)nonSIFRCompanionFormat;
-(BOOL)capturesStillsFromVideoStream;
-(int)redEyeReductionVersion;
-(SCD_Struct_BW2)sourceCropAspectRatio;
-(id)_buildFESCompanionFormatsForType:(id)arg1 ;
-(SCD_Struct_BW2)nativeDimensions;
-(SCD_Struct_BW2)geometricDistortionCorrectedNativeDimensions;
-(int)previewImageQueueSyncStrategy;
-(CGRect)maxVisibleSensorRect;
-(int)fesBinningFactorHorizontal;
-(int)temporalNoiseReductionMode;
-(BOOL)temporalNoiseReductionBand0Disabled;
-(BOOL)ispChromaNoiseReductionEnabled;
-(int)maxIntegrationTimeOverride;
-(float)depthDataAEMaxGain;
-(float)depthDataMaxIntegrationTimeOverride;
-(float)lowLightVideoAEMaxGain;
-(id)frontEndScalerCompanionFormats;
-(id)depthCompanionFormat;
-(SCD_Struct_BW2)postGDCCropDimensions;
-(SCD_Struct_BW2)fesInputCropDimensions;
-(SCD_Struct_BW2)cropDimensionsForFES;
-(int)sensorHDRCompanionIndex;
-(BOOL)isPointCloudDataDeliverySupported;
-(BOOL)isSecondaryScalerUnavailable;
-(BOOL)isStudioAndContourPreviewRenderingSupported;
-(BOOL)isStagePreviewRenderingSupported;
-(BOOL)isWideAsStatsMasterEnabled;
-(CGSize)stabilizationOverscanFromSensorForFESCropDimensions:(SCD_Struct_BW2)arg1 preferSIFRFormat:(BOOL)arg2 geometricDistortionCorrection:(BOOL)arg3 useFESCompanionIndex:(BOOL)arg4 ;
-(BOOL)configureForStillImageStabilizationSupport;
-(BOOL)configureForSpatialOverCaptureSupport;
-(BOOL)configureForDigitalFlashSupport;
-(BOOL)isGNRHDRSupported;
-(BOOL)isISPMultiBandNoiseReductionSupported;
-(BOOL)isStillImageISPMultiBandNoiseReductionSupported;
-(BOOL)isZeroShutterLagSupported;
-(BOOL)zeroShutterLagRequiresUserInitiatedCaptureRequestTime;
-(BOOL)isGainMapSupported;
-(int)dcProcessorVersion;
-(BOOL)stillImageGeometricDistortionCorrectionInDCProcessorSupported;
-(NSArray *)digitalFlashDetectedObjectTypes;
-(BOOL)isWideDigitalFlashAvailableShallowDepthOfFieldEffectsEnabled;
-(BOOL)isCaptureTimePhotoCurationSupported;
-(BOOL)usesPacked10BitFirmwareStillImageOutputPixelFormat;
-(SCD_Struct_BW2)stillImageGDCInDCProcessorOutputCropDimensions;
-(BOOL)isStillImageISPChromaNoiseReductionEnabled;
-(BOOL)isSIFRStillImageCaptureWithDepthDataDisabled;
-(int)sensorPowerConsumption;
-(BOOL)isValidDerivedBravoFormatForUnderlyingFormat:(id)arg1 ;
-(BOOL)isCompatibleWithInfraredFormat:(id)arg1 ;
@end

