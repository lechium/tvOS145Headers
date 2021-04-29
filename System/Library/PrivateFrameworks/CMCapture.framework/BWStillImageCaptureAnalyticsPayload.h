/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSString, NSDictionary;

@interface BWStillImageCaptureAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	NSString* _portType;
	float _accelStandardDeviation;
	float _gyroStandardDeviation;
	NSDictionary* _apsSubjectDistance;
	NSDictionary* _practicalFocalLength;
	NSDictionary* _focusingMethod;
	float _maxSphereTrackingError;
	float _stdSphereTrackingError;
	float _maxAFTrackingError;
	float _stdAFTrackingError;
	float _minDistanceFromSphereEndStop;
	float _spherePowerConsumption;
	float _afPowerConsumption;
	unsigned _cameraPosture;
	NSString* _sphereMode;
	unsigned _apsMode;
	unsigned _timeSinceLastCaptureInSession;
	float _flashBrightnessRatio;
	NSDictionary* _oisRecenteringLoggingData;
	float _effectiveIntegrationTime;
	int _intelligentDistortionCorrectionStatusCode;
	int _intelligentDistortionCorrectionGainMapProcessingStatusCode;
	int _intelligentDistortionCorrectionCorrectionType;
	int _ispMotionHighPassFilterConvergenceFlags;
	NSDictionary* _timeOfFlightAssistedAutoFocusEstimatorData;
	BOOL _afDriverShortOccurred;
	BOOL _livePhotoEnabled;
	BOOL _depthEnabled;
	BOOL _timeLapse;
	BOOL _burst;
	int _activeDeviceMask;
	int _devicePosition;
	int _deviceType;
	int _captureType;
	unsigned _processingFlags;
	int _processingDuration;
	int _streamingTime;
	int _shutterLag;
	float _zoom;
	int _luxLevel;
	float _lensPosition;
	int _sensorTemperature;
	float _exposureDuration;
	float _iso;
	float _normalizedSNR;
	float _SNR;
	int _numberOfFaces;
	NSString* _clientApplicationID;
	unsigned long long _captureFlags;
	unsigned long long _sceneFlags;

}

@property (assign,nonatomic) int activeDeviceMask;                                                        //@synthesize activeDeviceMask=_activeDeviceMask - In the implementation block
@property (assign,nonatomic) int devicePosition;                                                          //@synthesize devicePosition=_devicePosition - In the implementation block
@property (assign,nonatomic) int deviceType;                                                              //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) int captureType;                                                             //@synthesize captureType=_captureType - In the implementation block
@property (assign,nonatomic) unsigned long long captureFlags;                                             //@synthesize captureFlags=_captureFlags - In the implementation block
@property (assign,nonatomic) unsigned processingFlags;                                                    //@synthesize processingFlags=_processingFlags - In the implementation block
@property (assign,nonatomic) unsigned long long sceneFlags;                                               //@synthesize sceneFlags=_sceneFlags - In the implementation block
@property (assign,nonatomic) int processingDuration;                                                      //@synthesize processingDuration=_processingDuration - In the implementation block
@property (assign,nonatomic) int streamingTime;                                                           //@synthesize streamingTime=_streamingTime - In the implementation block
@property (assign,nonatomic) int shutterLag;                                                              //@synthesize shutterLag=_shutterLag - In the implementation block
@property (assign,nonatomic) float zoom;                                                                  //@synthesize zoom=_zoom - In the implementation block
@property (assign,nonatomic) int luxLevel;                                                                //@synthesize luxLevel=_luxLevel - In the implementation block
@property (assign,nonatomic) float lensPosition;                                                          //@synthesize lensPosition=_lensPosition - In the implementation block
@property (assign,nonatomic) int sensorTemperature;                                                       //@synthesize sensorTemperature=_sensorTemperature - In the implementation block
@property (assign,nonatomic) float exposureDuration;                                                      //@synthesize exposureDuration=_exposureDuration - In the implementation block
@property (assign,nonatomic) float iso;                                                                   //@synthesize iso=_iso - In the implementation block
@property (assign,nonatomic) float normalizedSNR;                                                         //@synthesize normalizedSNR=_normalizedSNR - In the implementation block
@property (assign,setter=NR,nonatomic) float SNR;                                                         //@synthesize SNR=_SNR - In the implementation block
@property (assign,nonatomic) int numberOfFaces;                                                           //@synthesize numberOfFaces=_numberOfFaces - In the implementation block
@property (nonatomic,copy) NSString * clientApplicationID;                                                //@synthesize clientApplicationID=_clientApplicationID - In the implementation block
@property (assign,nonatomic) BOOL livePhotoEnabled;                                                       //@synthesize livePhotoEnabled=_livePhotoEnabled - In the implementation block
@property (assign,nonatomic) BOOL depthEnabled;                                                           //@synthesize depthEnabled=_depthEnabled - In the implementation block
@property (assign,nonatomic) BOOL timeLapse;                                                              //@synthesize timeLapse=_timeLapse - In the implementation block
@property (assign,nonatomic) BOOL burst;                                                                  //@synthesize burst=_burst - In the implementation block
@property (nonatomic,retain) NSString * portType;                                                         //@synthesize portType=_portType - In the implementation block
@property (assign,nonatomic) float accelStandardDeviation;                                                //@synthesize accelStandardDeviation=_accelStandardDeviation - In the implementation block
@property (assign,nonatomic) float gyroStandardDeviation;                                                 //@synthesize gyroStandardDeviation=_gyroStandardDeviation - In the implementation block
@property (nonatomic,retain) NSDictionary * apsSubjectDistance;                                           //@synthesize apsSubjectDistance=_apsSubjectDistance - In the implementation block
@property (nonatomic,retain) NSDictionary * practicalFocalLength;                                         //@synthesize practicalFocalLength=_practicalFocalLength - In the implementation block
@property (nonatomic,retain) NSDictionary * focusingMethod;                                               //@synthesize focusingMethod=_focusingMethod - In the implementation block
@property (assign,nonatomic) float maxSphereTrackingError;                                                //@synthesize maxSphereTrackingError=_maxSphereTrackingError - In the implementation block
@property (assign,nonatomic) float stdSphereTrackingError;                                                //@synthesize stdSphereTrackingError=_stdSphereTrackingError - In the implementation block
@property (assign,nonatomic) float maxAFTrackingError;                                                    //@synthesize maxAFTrackingError=_maxAFTrackingError - In the implementation block
@property (assign,nonatomic) float stdAFTrackingError;                                                    //@synthesize stdAFTrackingError=_stdAFTrackingError - In the implementation block
@property (assign,nonatomic) float minDistanceFromSphereEndStop;                                          //@synthesize minDistanceFromSphereEndStop=_minDistanceFromSphereEndStop - In the implementation block
@property (assign,nonatomic) float spherePowerConsumption;                                                //@synthesize spherePowerConsumption=_spherePowerConsumption - In the implementation block
@property (assign,nonatomic) float afPowerConsumption;                                                    //@synthesize afPowerConsumption=_afPowerConsumption - In the implementation block
@property (assign,nonatomic) unsigned cameraPosture;                                                      //@synthesize cameraPosture=_cameraPosture - In the implementation block
@property (nonatomic,retain) NSString * sphereMode;                                                       //@synthesize sphereMode=_sphereMode - In the implementation block
@property (assign,nonatomic) unsigned apsMode;                                                            //@synthesize apsMode=_apsMode - In the implementation block
@property (assign,nonatomic) unsigned timeSinceLastCaptureInSession;                                      //@synthesize timeSinceLastCaptureInSession=_timeSinceLastCaptureInSession - In the implementation block
@property (assign,nonatomic) float flashBrightnessRatio;                                                  //@synthesize flashBrightnessRatio=_flashBrightnessRatio - In the implementation block
@property (nonatomic,retain) NSDictionary * oisRecenteringLoggingData;                                    //@synthesize oisRecenteringLoggingData=_oisRecenteringLoggingData - In the implementation block
@property (assign,nonatomic) float effectiveIntegrationTime;                                              //@synthesize effectiveIntegrationTime=_effectiveIntegrationTime - In the implementation block
@property (assign,nonatomic) int intelligentDistortionCorrectionStatusCode;                               //@synthesize intelligentDistortionCorrectionStatusCode=_intelligentDistortionCorrectionStatusCode - In the implementation block
@property (assign,nonatomic) int intelligentDistortionCorrectionGainMapProcessingStatusCode;              //@synthesize intelligentDistortionCorrectionGainMapProcessingStatusCode=_intelligentDistortionCorrectionGainMapProcessingStatusCode - In the implementation block
@property (assign,nonatomic) int intelligentDistortionCorrectionCorrectionType;                           //@synthesize intelligentDistortionCorrectionCorrectionType=_intelligentDistortionCorrectionCorrectionType - In the implementation block
@property (assign,nonatomic) int ispMotionHighPassFilterConvergenceFlags;                                 //@synthesize ispMotionHighPassFilterConvergenceFlags=_ispMotionHighPassFilterConvergenceFlags - In the implementation block
@property (nonatomic,retain) NSDictionary * timeOfFlightAssistedAutoFocusEstimatorData;                   //@synthesize timeOfFlightAssistedAutoFocusEstimatorData=_timeOfFlightAssistedAutoFocusEstimatorData - In the implementation block
@property (assign,nonatomic) BOOL afDriverShortOccurred;                                                  //@synthesize afDriverShortOccurred=_afDriverShortOccurred - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)reset;
-(int)deviceType;
-(void)setDeviceType:(int)arg1 ;
-(void)setSNR:(float)arg1 ;
-(float)zoom;
-(void)setZoom:(float)arg1 ;
-(NSString *)portType;
-(id)eventName;
-(BOOL)depthEnabled;
-(void)setDepthEnabled:(BOOL)arg1 ;
-(void)setIso:(float)arg1 ;
-(unsigned long long)captureFlags;
-(float)iso;
-(void)setCaptureFlags:(unsigned long long)arg1 ;
-(id)eventDictionary;
-(int)numberOfFaces;
-(float)lensPosition;
-(float)exposureDuration;
-(int)captureType;
-(unsigned long long)sceneFlags;
-(void)setSceneFlags:(unsigned long long)arg1 ;
-(unsigned)processingFlags;
-(int)luxLevel;
-(NSDictionary *)focusingMethod;
-(NSString *)clientApplicationID;
-(void)setClientApplicationID:(NSString *)arg1 ;
-(void)setAfDriverShortOccurred:(BOOL)arg1 ;
-(void)setDevicePosition:(int)arg1 ;
-(NSDictionary *)oisRecenteringLoggingData;
-(int)ispMotionHighPassFilterConvergenceFlags;
-(void)setPortType:(NSString *)arg1 ;
-(float)normalizedSNR;
-(float)accelStandardDeviation;
-(void)setAccelStandardDeviation:(float)arg1 ;
-(float)gyroStandardDeviation;
-(void)setGyroStandardDeviation:(float)arg1 ;
-(NSDictionary *)apsSubjectDistance;
-(void)setApsSubjectDistance:(NSDictionary *)arg1 ;
-(NSDictionary *)practicalFocalLength;
-(void)setPracticalFocalLength:(NSDictionary *)arg1 ;
-(void)setFocusingMethod:(NSDictionary *)arg1 ;
-(float)maxSphereTrackingError;
-(void)setMaxSphereTrackingError:(float)arg1 ;
-(float)stdSphereTrackingError;
-(void)setStdSphereTrackingError:(float)arg1 ;
-(float)maxAFTrackingError;
-(void)setMaxAFTrackingError:(float)arg1 ;
-(float)stdAFTrackingError;
-(void)setStdAFTrackingError:(float)arg1 ;
-(float)minDistanceFromSphereEndStop;
-(void)setMinDistanceFromSphereEndStop:(float)arg1 ;
-(float)spherePowerConsumption;
-(void)setSpherePowerConsumption:(float)arg1 ;
-(float)afPowerConsumption;
-(void)setAfPowerConsumption:(float)arg1 ;
-(NSString *)sphereMode;
-(void)setSphereMode:(NSString *)arg1 ;
-(unsigned)timeSinceLastCaptureInSession;
-(void)setTimeSinceLastCaptureInSession:(unsigned)arg1 ;
-(float)flashBrightnessRatio;
-(void)setFlashBrightnessRatio:(float)arg1 ;
-(void)setOisRecenteringLoggingData:(NSDictionary *)arg1 ;
-(float)effectiveIntegrationTime;
-(void)setEffectiveIntegrationTime:(float)arg1 ;
-(int)intelligentDistortionCorrectionStatusCode;
-(void)setIntelligentDistortionCorrectionStatusCode:(int)arg1 ;
-(int)intelligentDistortionCorrectionGainMapProcessingStatusCode;
-(void)setIntelligentDistortionCorrectionGainMapProcessingStatusCode:(int)arg1 ;
-(int)intelligentDistortionCorrectionCorrectionType;
-(void)setIntelligentDistortionCorrectionCorrectionType:(int)arg1 ;
-(void)setIspMotionHighPassFilterConvergenceFlags:(int)arg1 ;
-(NSDictionary *)timeOfFlightAssistedAutoFocusEstimatorData;
-(void)setTimeOfFlightAssistedAutoFocusEstimatorData:(NSDictionary *)arg1 ;
-(BOOL)afDriverShortOccurred;
-(int)activeDeviceMask;
-(void)setActiveDeviceMask:(int)arg1 ;
-(int)devicePosition;
-(void)setCaptureType:(int)arg1 ;
-(void)setProcessingFlags:(unsigned)arg1 ;
-(int)processingDuration;
-(void)setProcessingDuration:(int)arg1 ;
-(int)streamingTime;
-(void)setStreamingTime:(int)arg1 ;
-(int)shutterLag;
-(void)setShutterLag:(int)arg1 ;
-(void)setLuxLevel:(int)arg1 ;
-(void)setLensPosition:(float)arg1 ;
-(int)sensorTemperature;
-(void)setSensorTemperature:(int)arg1 ;
-(void)setExposureDuration:(float)arg1 ;
-(void)setNormalizedSNR:(float)arg1 ;
-(float)SNR;
-(void)setNumberOfFaces:(int)arg1 ;
-(BOOL)livePhotoEnabled;
-(void)setLivePhotoEnabled:(BOOL)arg1 ;
-(BOOL)timeLapse;
-(void)setTimeLapse:(BOOL)arg1 ;
-(BOOL)burst;
-(void)setBurst:(BOOL)arg1 ;
-(unsigned)cameraPosture;
-(void)setCameraPosture:(unsigned)arg1 ;
-(unsigned)apsMode;
-(void)setApsMode:(unsigned)arg1 ;
@end

