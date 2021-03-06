/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class FigCaptureSourceConfiguration, FigVideoCaptureConnectionConfiguration, FigAudioCaptureConnectionConfiguration, FigMetadataItemCaptureConnectionConfiguration, NSArray, NSString;

@interface FigCaptureMovieFileSinkPipelineConfiguration : NSObject {

	FigCaptureSourceConfiguration* _cameraConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoConnectionConfiguration;
	FigAudioCaptureConnectionConfiguration* _audioConnectionConfiguration;
	FigMetadataItemCaptureConnectionConfiguration* _cameraDebugInfoMetadataConnectionConfiguration;
	NSArray* _detectedObjectMetadataConnectionConfigurations;
	FigVideoCaptureConnectionConfiguration* _stillImageConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _sceneClassifierConnectionConfiguration;
	FigCaptureVideoTransform _videoSourceCaptureTransform;
	SCD_Struct_BW2 _visOutputDimensions;
	int _videoStabilizationType;
	BOOL _boxedMetadataPostVISEnabled;
	int _motionAttachmentsSource;
	SCD_Struct_BW53 _smartCameraPipelineVersion;
	BOOL _offlineVISEnabled;
	BOOL _vitalityScoringEnabled;
	BOOL _captureDeviceHasOverCaptureEnabled;
	BOOL _overCaptureEnabled;
	BOOL _frameReconstructionEnabled;
	BOOL _P3ToBT2020ConversionEnabled;
	float _videoStabilizationOverscanOverride;
	NSString* _clientApplicationID;

}

@property (nonatomic,retain) FigCaptureSourceConfiguration * cameraConfiguration;                                                         //@synthesize cameraConfiguration=_cameraConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoConnectionConfiguration;                                       //@synthesize videoConnectionConfiguration=_videoConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigAudioCaptureConnectionConfiguration * audioConnectionConfiguration;                                       //@synthesize audioConnectionConfiguration=_audioConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigMetadataItemCaptureConnectionConfiguration * cameraDebugInfoMetadataConnectionConfiguration;              //@synthesize cameraDebugInfoMetadataConnectionConfiguration=_cameraDebugInfoMetadataConnectionConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * detectedObjectMetadataConnectionConfigurations;                                                    //@synthesize detectedObjectMetadataConnectionConfigurations=_detectedObjectMetadataConnectionConfigurations - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * stillImageConnectionConfiguration;                                  //@synthesize stillImageConnectionConfiguration=_stillImageConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * sceneClassifierConnectionConfiguration;                             //@synthesize sceneClassifierConnectionConfiguration=_sceneClassifierConnectionConfiguration - In the implementation block
@property (assign,nonatomic) FigCaptureVideoTransform videoSourceCaptureTransform;                                                        //@synthesize videoSourceCaptureTransform=_videoSourceCaptureTransform - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 visOutputDimensions;                                                                          //@synthesize visOutputDimensions=_visOutputDimensions - In the implementation block
@property (assign,nonatomic) int videoStabilizationType;                                                                                  //@synthesize videoStabilizationType=_videoStabilizationType - In the implementation block
@property (assign,nonatomic) BOOL boxedMetadataPostVISEnabled;                                                                            //@synthesize boxedMetadataPostVISEnabled=_boxedMetadataPostVISEnabled - In the implementation block
@property (assign,nonatomic) int motionAttachmentsSource;                                                                                 //@synthesize motionAttachmentsSource=_motionAttachmentsSource - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW53 smartCameraPipelineVersion;                                                                  //@synthesize smartCameraPipelineVersion=_smartCameraPipelineVersion - In the implementation block
@property (assign,nonatomic) BOOL offlineVISEnabled;                                                                                      //@synthesize offlineVISEnabled=_offlineVISEnabled - In the implementation block
@property (assign,nonatomic) BOOL vitalityScoringEnabled;                                                                                 //@synthesize vitalityScoringEnabled=_vitalityScoringEnabled - In the implementation block
@property (assign,nonatomic) BOOL captureDeviceHasOverCaptureEnabled;                                                                     //@synthesize captureDeviceHasOverCaptureEnabled=_captureDeviceHasOverCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL overCaptureEnabled;                                                                                     //@synthesize overCaptureEnabled=_overCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL frameReconstructionEnabled;                                                                             //@synthesize frameReconstructionEnabled=_frameReconstructionEnabled - In the implementation block
@property (assign,nonatomic) float videoStabilizationOverscanOverride;                                                                    //@synthesize videoStabilizationOverscanOverride=_videoStabilizationOverscanOverride - In the implementation block
@property (nonatomic,retain) NSString * clientApplicationID;                                                                              //@synthesize clientApplicationID=_clientApplicationID - In the implementation block
@property (assign,nonatomic) BOOL P3ToBT2020ConversionEnabled;                                                                            //@synthesize P3ToBT2020ConversionEnabled=_P3ToBT2020ConversionEnabled - In the implementation block
-(void)dealloc;
-(int)motionAttachmentsSource;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(FigCaptureSourceConfiguration *)cameraConfiguration;
-(void)setCameraConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(FigVideoCaptureConnectionConfiguration *)videoConnectionConfiguration;
-(void)setVideoConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(FigAudioCaptureConnectionConfiguration *)audioConnectionConfiguration;
-(void)setAudioConnectionConfiguration:(FigAudioCaptureConnectionConfiguration *)arg1 ;
-(FigMetadataItemCaptureConnectionConfiguration *)cameraDebugInfoMetadataConnectionConfiguration;
-(void)setCameraDebugInfoMetadataConnectionConfiguration:(FigMetadataItemCaptureConnectionConfiguration *)arg1 ;
-(NSArray *)detectedObjectMetadataConnectionConfigurations;
-(void)setDetectedObjectMetadataConnectionConfigurations:(NSArray *)arg1 ;
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(void)setStillImageConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(FigVideoCaptureConnectionConfiguration *)sceneClassifierConnectionConfiguration;
-(void)setSceneClassifierConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(FigCaptureVideoTransform)videoSourceCaptureTransform;
-(void)setVideoSourceCaptureTransform:(FigCaptureVideoTransform)arg1 ;
-(SCD_Struct_BW2)visOutputDimensions;
-(void)setVisOutputDimensions:(SCD_Struct_BW2)arg1 ;
-(int)videoStabilizationType;
-(void)setVideoStabilizationType:(int)arg1 ;
-(BOOL)boxedMetadataPostVISEnabled;
-(void)setBoxedMetadataPostVISEnabled:(BOOL)arg1 ;
-(SCD_Struct_BW53)smartCameraPipelineVersion;
-(void)setSmartCameraPipelineVersion:(SCD_Struct_BW53)arg1 ;
-(BOOL)offlineVISEnabled;
-(void)setOfflineVISEnabled:(BOOL)arg1 ;
-(BOOL)P3ToBT2020ConversionEnabled;
-(void)setP3ToBT2020ConversionEnabled:(BOOL)arg1 ;
-(BOOL)vitalityScoringEnabled;
-(void)setVitalityScoringEnabled:(BOOL)arg1 ;
-(BOOL)captureDeviceHasOverCaptureEnabled;
-(void)setCaptureDeviceHasOverCaptureEnabled:(BOOL)arg1 ;
-(BOOL)overCaptureEnabled;
-(void)setOverCaptureEnabled:(BOOL)arg1 ;
-(BOOL)frameReconstructionEnabled;
-(void)setFrameReconstructionEnabled:(BOOL)arg1 ;
-(float)videoStabilizationOverscanOverride;
-(void)setVideoStabilizationOverscanOverride:(float)arg1 ;
-(NSString *)clientApplicationID;
-(void)setClientApplicationID:(NSString *)arg1 ;
@end

