/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class FigCaptureSourceConfiguration, FigVideoCaptureConnectionConfiguration, NSArray, FigDepthDataCaptureConnectionConfiguration, FigPointCloudDataCaptureConnectionConfiguration;

@interface FigCaptureCameraSourcePipelineConfiguration : NSObject {

	int _motionAttachmentsSource;
	int _videoStabilizationType;
	int _depthType;
	SCD_Struct_BW7 _maxExposureDurationClientOverride;
	SCD_Struct_BW7 _maxExposureDurationFrameworkOverride;
	BOOL _forceCNRDisabled;
	BOOL _coreMediaFaceTrackingEnabled;
	BOOL _ispFaceTrackingEnabled;
	BOOL _stillImageGeometricDistortionCorrectionEnabled;
	BOOL _streamingGeometricDistortionCorrectionEnabled;
	BOOL _fullGeometricDistortionCorrectionRequired;
	BOOL _stillImageGeometricDistortionCorrectionExpansionCoversOverscan;
	BOOL _offlineVISEnabled;
	BOOL _zeroShutterLagEnabled;
	BOOL _configureForZeroShutterLagSupport;
	BOOL _configureForSIFRStillImageCaptureIfAvailable;
	BOOL _enableStillImageSensorOverscanIfAvailable;
	float _overCapturePercentage;
	BOOL _configureForSpatialOverCaptureSupport;
	BOOL _configureForDigitalFlashSupport;
	BOOL _clockSynchronizationEnabled;
	BOOL _depthConversionEnabled;
	int _stillImageFocusPixelDataRetainedBufferCount;
	int _stillImageSashimiRawRetainedBufferCount;
	int _stillImageSensorInterfaceRawRetainedBufferCount;
	int _stillImageOutputRetainedBufferCountOverride;
	BOOL _stillImageOutputSushiRawAttachmentOptionEnabled;
	BOOL _streamingForegroundSegmentationEnabled;
	BOOL _RGBIRStereoFusionEnabled;
	BOOL _streamingCameraCalibrationDataDeliveryEnabled;
	int _autoImageControlMode;
	FigCaptureSourceConfiguration* _cameraConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoPreviewSinkConnectionConfiguration;
	NSArray* _previewDerivedConnectionConfigurations;
	NSArray* _videoCaptureConnectionConfigurations;
	FigVideoCaptureConnectionConfiguration* _stillImageConnectionConfiguration;
	FigDepthDataCaptureConnectionConfiguration* _depthDataConnectionConfiguration;
	NSArray* _visionDataConnectionConfigurations;
	NSArray* _metadataObjectConnectionConfigurations;
	NSArray* _movieFileDetectedObjectMetadataConnectionConfigurations;
	FigPointCloudDataCaptureConnectionConfiguration* _pointCloudDataConnectionConfiguration;
	BOOL _videoHDRImageStatisticsEnabled;
	float _additionalVISOverscanWhenRecording;
	int _originalVideoStabilizationTypeForOfflineVIS;

}

@property (assign,nonatomic) int motionAttachmentsSource;                                                                          //@synthesize motionAttachmentsSource=_motionAttachmentsSource - In the implementation block
@property (assign,nonatomic) int videoStabilizationType;                                                                           //@synthesize videoStabilizationType=_videoStabilizationType - In the implementation block
@property (assign,nonatomic) int originalVideoStabilizationTypeForOfflineVIS;                                                      //@synthesize originalVideoStabilizationTypeForOfflineVIS=_originalVideoStabilizationTypeForOfflineVIS - In the implementation block
@property (assign,nonatomic) int depthType;                                                                                        //@synthesize depthType=_depthType - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW7 maxExposureDurationClientOverride;                                                     //@synthesize maxExposureDurationClientOverride=_maxExposureDurationClientOverride - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW7 maxExposureDurationFrameworkOverride;                                                  //@synthesize maxExposureDurationFrameworkOverride=_maxExposureDurationFrameworkOverride - In the implementation block
@property (assign,nonatomic) BOOL forceCNRDisabled;                                                                                //@synthesize forceCNRDisabled=_forceCNRDisabled - In the implementation block
@property (assign,nonatomic) BOOL coreMediaFaceTrackingEnabled;                                                                    //@synthesize coreMediaFaceTrackingEnabled=_coreMediaFaceTrackingEnabled - In the implementation block
@property (assign,nonatomic) BOOL ispFaceTrackingEnabled;                                                                          //@synthesize ispFaceTrackingEnabled=_ispFaceTrackingEnabled - In the implementation block
@property (assign,nonatomic) BOOL stillImageGeometricDistortionCorrectionEnabled;                                                  //@synthesize stillImageGeometricDistortionCorrectionEnabled=_stillImageGeometricDistortionCorrectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL streamingGeometricDistortionCorrectionEnabled;                                                   //@synthesize streamingGeometricDistortionCorrectionEnabled=_streamingGeometricDistortionCorrectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL fullGeometricDistortionCorrectionRequired;                                                       //@synthesize fullGeometricDistortionCorrectionRequired=_fullGeometricDistortionCorrectionRequired - In the implementation block
@property (assign,nonatomic) BOOL stillImageGeometricDistortionCorrectionExpansionCoversOverscan;                                  //@synthesize stillImageGeometricDistortionCorrectionExpansionCoversOverscan=_stillImageGeometricDistortionCorrectionExpansionCoversOverscan - In the implementation block
@property (assign,nonatomic) BOOL offlineVISEnabled;                                                                               //@synthesize offlineVISEnabled=_offlineVISEnabled - In the implementation block
@property (assign,nonatomic) BOOL zeroShutterLagEnabled;                                                                           //@synthesize zeroShutterLagEnabled=_zeroShutterLagEnabled - In the implementation block
@property (assign,nonatomic) BOOL configureForZeroShutterLagSupport;                                                               //@synthesize configureForZeroShutterLagSupport=_configureForZeroShutterLagSupport - In the implementation block
@property (assign,nonatomic) BOOL configureForSIFRStillImageCaptureIfAvailable;                                                    //@synthesize configureForSIFRStillImageCaptureIfAvailable=_configureForSIFRStillImageCaptureIfAvailable - In the implementation block
@property (assign,nonatomic) BOOL enableStillImageSensorOverscanIfAvailable;                                                       //@synthesize enableStillImageSensorOverscanIfAvailable=_enableStillImageSensorOverscanIfAvailable - In the implementation block
@property (assign,nonatomic) float overCapturePercentage;                                                                          //@synthesize overCapturePercentage=_overCapturePercentage - In the implementation block
@property (assign,nonatomic) BOOL configureForSpatialOverCaptureSupport;                                                           //@synthesize configureForSpatialOverCaptureSupport=_configureForSpatialOverCaptureSupport - In the implementation block
@property (assign,nonatomic) BOOL configureForDigitalFlashSupport;                                                                 //@synthesize configureForDigitalFlashSupport=_configureForDigitalFlashSupport - In the implementation block
@property (assign,nonatomic) BOOL clockSynchronizationEnabled;                                                                     //@synthesize clockSynchronizationEnabled=_clockSynchronizationEnabled - In the implementation block
@property (assign,nonatomic) BOOL depthConversionEnabled;                                                                          //@synthesize depthConversionEnabled=_depthConversionEnabled - In the implementation block
@property (assign,nonatomic) int stillImageFocusPixelDataRetainedBufferCount;                                                      //@synthesize stillImageFocusPixelDataRetainedBufferCount=_stillImageFocusPixelDataRetainedBufferCount - In the implementation block
@property (assign,nonatomic) int stillImageSashimiRawRetainedBufferCount;                                                          //@synthesize stillImageSashimiRawRetainedBufferCount=_stillImageSashimiRawRetainedBufferCount - In the implementation block
@property (assign,nonatomic) int stillImageSensorInterfaceRawRetainedBufferCount;                                                  //@synthesize stillImageSensorInterfaceRawRetainedBufferCount=_stillImageSensorInterfaceRawRetainedBufferCount - In the implementation block
@property (assign,nonatomic) int stillImageOutputRetainedBufferCountOverride;                                                      //@synthesize stillImageOutputRetainedBufferCountOverride=_stillImageOutputRetainedBufferCountOverride - In the implementation block
@property (assign,nonatomic) BOOL stillImageOutputSushiRawAttachmentOptionEnabled;                                                 //@synthesize stillImageOutputSushiRawAttachmentOptionEnabled=_stillImageOutputSushiRawAttachmentOptionEnabled - In the implementation block
@property (assign,nonatomic) BOOL streamingForegroundSegmentationEnabled;                                                          //@synthesize streamingForegroundSegmentationEnabled=_streamingForegroundSegmentationEnabled - In the implementation block
@property (assign,nonatomic) BOOL RGBIRStereoFusionEnabled;                                                                        //@synthesize RGBIRStereoFusionEnabled=_RGBIRStereoFusionEnabled - In the implementation block
@property (assign,nonatomic) BOOL streamingCameraCalibrationDataDeliveryEnabled;                                                   //@synthesize streamingCameraCalibrationDataDeliveryEnabled=_streamingCameraCalibrationDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) int autoImageControlMode;                                                                             //@synthesize autoImageControlMode=_autoImageControlMode - In the implementation block
@property (nonatomic,retain) FigCaptureSourceConfiguration * cameraConfiguration;                                                  //@synthesize cameraConfiguration=_cameraConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoPreviewSinkConnectionConfiguration;                     //@synthesize videoPreviewSinkConnectionConfiguration=_videoPreviewSinkConnectionConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * previewDerivedConnectionConfigurations;                                                     //@synthesize previewDerivedConnectionConfigurations=_previewDerivedConnectionConfigurations - In the implementation block
@property (nonatomic,retain) NSArray * videoCaptureConnectionConfigurations;                                                       //@synthesize videoCaptureConnectionConfigurations=_videoCaptureConnectionConfigurations - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * stillImageConnectionConfiguration;                           //@synthesize stillImageConnectionConfiguration=_stillImageConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigDepthDataCaptureConnectionConfiguration * depthDataConnectionConfiguration;                        //@synthesize depthDataConnectionConfiguration=_depthDataConnectionConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * visionDataConnectionConfigurations;                                                         //@synthesize visionDataConnectionConfigurations=_visionDataConnectionConfigurations - In the implementation block
@property (nonatomic,retain) NSArray * metadataObjectConnectionConfigurations;                                                     //@synthesize metadataObjectConnectionConfigurations=_metadataObjectConnectionConfigurations - In the implementation block
@property (nonatomic,retain) NSArray * movieFileDetectedObjectMetadataConnectionConfigurations;                                    //@synthesize movieFileDetectedObjectMetadataConnectionConfigurations=_movieFileDetectedObjectMetadataConnectionConfigurations - In the implementation block
@property (nonatomic,retain) FigPointCloudDataCaptureConnectionConfiguration * pointCloudDataConnectionConfiguration;              //@synthesize pointCloudDataConnectionConfiguration=_pointCloudDataConnectionConfiguration - In the implementation block
@property (assign,nonatomic) BOOL videoHDRImageStatisticsEnabled;                                                                  //@synthesize videoHDRImageStatisticsEnabled=_videoHDRImageStatisticsEnabled - In the implementation block
@property (assign,nonatomic) float additionalVISOverscanWhenRecording;                                                             //@synthesize additionalVISOverscanWhenRecording=_additionalVISOverscanWhenRecording - In the implementation block
-(void)dealloc;
-(int)depthType;
-(void)setDepthType:(int)arg1 ;
-(void)setMaxExposureDurationClientOverride:(SCD_Struct_BW7)arg1 ;
-(int)motionAttachmentsSource;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(FigCaptureSourceConfiguration *)cameraConfiguration;
-(void)setCameraConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(void)setStillImageConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(int)videoStabilizationType;
-(void)setVideoStabilizationType:(int)arg1 ;
-(BOOL)offlineVISEnabled;
-(void)setOfflineVISEnabled:(BOOL)arg1 ;
-(void)setZeroShutterLagEnabled:(BOOL)arg1 ;
-(BOOL)zeroShutterLagEnabled;
-(FigVideoCaptureConnectionConfiguration *)videoPreviewSinkConnectionConfiguration;
-(NSArray *)previewDerivedConnectionConfigurations;
-(NSArray *)videoCaptureConnectionConfigurations;
-(FigDepthDataCaptureConnectionConfiguration *)depthDataConnectionConfiguration;
-(NSArray *)visionDataConnectionConfigurations;
-(NSArray *)metadataObjectConnectionConfigurations;
-(NSArray *)movieFileDetectedObjectMetadataConnectionConfigurations;
-(FigPointCloudDataCaptureConnectionConfiguration *)pointCloudDataConnectionConfiguration;
-(void)setVideoHDRImageStatisticsEnabled:(BOOL)arg1 ;
-(BOOL)videoHDRImageStatisticsEnabled;
-(SCD_Struct_BW7)maxExposureDurationClientOverride;
-(SCD_Struct_BW7)maxExposureDurationFrameworkOverride;
-(void)setMaxExposureDurationFrameworkOverride:(SCD_Struct_BW7)arg1 ;
-(BOOL)configureForSpatialOverCaptureSupport;
-(BOOL)configureForDigitalFlashSupport;
-(BOOL)forceCNRDisabled;
-(void)setForceCNRDisabled:(BOOL)arg1 ;
-(BOOL)coreMediaFaceTrackingEnabled;
-(void)setCoreMediaFaceTrackingEnabled:(BOOL)arg1 ;
-(BOOL)ispFaceTrackingEnabled;
-(void)setIspFaceTrackingEnabled:(BOOL)arg1 ;
-(BOOL)stillImageGeometricDistortionCorrectionEnabled;
-(void)setStillImageGeometricDistortionCorrectionEnabled:(BOOL)arg1 ;
-(BOOL)streamingGeometricDistortionCorrectionEnabled;
-(void)setStreamingGeometricDistortionCorrectionEnabled:(BOOL)arg1 ;
-(BOOL)fullGeometricDistortionCorrectionRequired;
-(void)setFullGeometricDistortionCorrectionRequired:(BOOL)arg1 ;
-(BOOL)stillImageGeometricDistortionCorrectionExpansionCoversOverscan;
-(void)setStillImageGeometricDistortionCorrectionExpansionCoversOverscan:(BOOL)arg1 ;
-(BOOL)configureForZeroShutterLagSupport;
-(void)setConfigureForZeroShutterLagSupport:(BOOL)arg1 ;
-(BOOL)configureForSIFRStillImageCaptureIfAvailable;
-(void)setConfigureForSIFRStillImageCaptureIfAvailable:(BOOL)arg1 ;
-(BOOL)enableStillImageSensorOverscanIfAvailable;
-(void)setEnableStillImageSensorOverscanIfAvailable:(BOOL)arg1 ;
-(float)overCapturePercentage;
-(void)setOverCapturePercentage:(float)arg1 ;
-(void)setConfigureForSpatialOverCaptureSupport:(BOOL)arg1 ;
-(void)setConfigureForDigitalFlashSupport:(BOOL)arg1 ;
-(BOOL)clockSynchronizationEnabled;
-(void)setClockSynchronizationEnabled:(BOOL)arg1 ;
-(BOOL)depthConversionEnabled;
-(void)setDepthConversionEnabled:(BOOL)arg1 ;
-(int)stillImageFocusPixelDataRetainedBufferCount;
-(void)setStillImageFocusPixelDataRetainedBufferCount:(int)arg1 ;
-(int)stillImageSashimiRawRetainedBufferCount;
-(void)setStillImageSashimiRawRetainedBufferCount:(int)arg1 ;
-(int)stillImageSensorInterfaceRawRetainedBufferCount;
-(void)setStillImageSensorInterfaceRawRetainedBufferCount:(int)arg1 ;
-(int)stillImageOutputRetainedBufferCountOverride;
-(void)setStillImageOutputRetainedBufferCountOverride:(int)arg1 ;
-(BOOL)stillImageOutputSushiRawAttachmentOptionEnabled;
-(void)setStillImageOutputSushiRawAttachmentOptionEnabled:(BOOL)arg1 ;
-(BOOL)streamingForegroundSegmentationEnabled;
-(void)setStreamingForegroundSegmentationEnabled:(BOOL)arg1 ;
-(BOOL)RGBIRStereoFusionEnabled;
-(void)setRGBIRStereoFusionEnabled:(BOOL)arg1 ;
-(BOOL)streamingCameraCalibrationDataDeliveryEnabled;
-(void)setStreamingCameraCalibrationDataDeliveryEnabled:(BOOL)arg1 ;
-(int)autoImageControlMode;
-(void)setAutoImageControlMode:(int)arg1 ;
-(void)setVideoPreviewSinkConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setPreviewDerivedConnectionConfigurations:(NSArray *)arg1 ;
-(void)setVideoCaptureConnectionConfigurations:(NSArray *)arg1 ;
-(void)setDepthDataConnectionConfiguration:(FigDepthDataCaptureConnectionConfiguration *)arg1 ;
-(void)setVisionDataConnectionConfigurations:(NSArray *)arg1 ;
-(void)setMetadataObjectConnectionConfigurations:(NSArray *)arg1 ;
-(void)setMovieFileDetectedObjectMetadataConnectionConfigurations:(NSArray *)arg1 ;
-(void)setPointCloudDataConnectionConfiguration:(FigPointCloudDataCaptureConnectionConfiguration *)arg1 ;
-(float)additionalVISOverscanWhenRecording;
-(void)setAdditionalVISOverscanWhenRecording:(float)arg1 ;
-(int)originalVideoStabilizationTypeForOfflineVIS;
-(void)setOriginalVideoStabilizationTypeForOfflineVIS:(int)arg1 ;
@end

