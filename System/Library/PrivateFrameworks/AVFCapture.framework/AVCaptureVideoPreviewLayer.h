/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCapture/AVFCapture-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVCaptureVideoPreviewLayerInternal, AVCaptureSession, AVCaptureConnection, NSString;

@interface AVCaptureVideoPreviewLayer : CALayer {

	AVCaptureVideoPreviewLayerInternal* _internal;
	BOOL _orientationSupported;
	BOOL _mirroringSupported;
	BOOL _automaticallyAdjustsMirroring;
	BOOL _mirrored;
	long long _orientation;

}

@property (nonatomic,retain) AVCaptureSession * session; 
@property (nonatomic,readonly) AVCaptureConnection * connection; 
@property (copy) NSString * videoGravity; 
@property (getter=isPreviewing,nonatomic,readonly) BOOL previewing; 
@property (getter=isOrientationSupported,nonatomic,readonly) BOOL orientationSupported;              //@synthesize orientationSupported=_orientationSupported - In the implementation block
@property (assign,nonatomic) long long orientation;                                                  //@synthesize orientation=_orientation - In the implementation block
@property (getter=isMirroringSupported,nonatomic,readonly) BOOL mirroringSupported;                  //@synthesize mirroringSupported=_mirroringSupported - In the implementation block
@property (assign,nonatomic) BOOL automaticallyAdjustsMirroring;                                     //@synthesize automaticallyAdjustsMirroring=_automaticallyAdjustsMirroring - In the implementation block
@property (assign,getter=isMirrored,nonatomic) BOOL mirrored;                                        //@synthesize mirrored=_mirrored - In the implementation block
+(void)initialize;
+(id)layerWithSession:(id)arg1 ;
+(id)layerWithSessionWithNoConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(AVCaptureSession *)session;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isPaused;
-(AVCaptureConnection *)connection;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(id)_input;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(long long)_orientation;
-(void)setPaused:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(void)setVideoGravity:(NSString *)arg1 ;
-(BOOL)isMirrored;
-(id)initWithSession:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(NSString *)videoGravity;
-(id)weakReference;
-(void)setMirrored:(BOOL)arg1 ;
-(id)sinkID;
-(void)performFigCaptureSessionOperationSafelyUsingBlock:(/*^block*/id)arg1 ;
-(void)bumpChangeSeed;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(BOOL)isDepthDataDeliveryEnabled;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(id)_initWithSession:(id)arg1 makeConnection:(BOOL)arg2 ;
-(void)setCaptureDeviceTransformNeedsUpdate;
-(CGAffineTransform)captureDeviceTransformForSensorSize:(CGSize)arg1 previewSize:(CGSize)arg2 sensorToPreviewVTScalingMode:(id)arg3 ;
-(void)didUpdatePreviewImageQueueSlot:(unsigned)arg1 imageQueue:(id)arg2 rotationDegrees:(double)arg3 size:(CGSize)arg4 ;
-(int)changeSeed;
-(void)setSinkID:(id)arg1 ;
-(void)attachToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(CGRect)metadataOutputRectOfInterestForRect:(CGRect)arg1 ;
-(CGRect)rectForMetadataOutputRectOfInterest:(CGRect)arg1 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)isFilterRenderingEnabled;
-(void)setFilterRenderingEnabled:(BOOL)arg1 ;
-(id)videoPreviewFilters;
-(unsigned)imageQueueSlot;
-(double)previewRotationDegrees;
-(BOOL)isPreviewing;
-(BOOL)automaticallyAdjustsMirroring;
-(id)initWithSessionWithNoConnection:(id)arg1 ;
-(void)centerSublayer:(long long)arg1 ;
-(void)setSessionWithNoConnection:(id)arg1 ;
-(BOOL)_automaticallyAdjustsMirroring;
-(BOOL)_isMirrored;
-(BOOL)isDepthDataDeliverySupported;
-(BOOL)isUnoptimizedFilterRenderingEnabled;
-(void)_updatePreviewTransforms;
-(void)_updateDepthDataDeliverySupported;
-(BOOL)isChromaNoiseReductionSupported;
-(BOOL)_setVideoPreviewFilters:(id)arg1 checkForExceptionalInput:(BOOL)arg2 exceptionReason:(id*)arg3 ;
-(BOOL)_filtersAreOptimized:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)_setSensorAndEstimatedPreviewSizes;
-(void)_updateCaptureDeviceTransform;
-(void)didUpdatePreviewFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)isChromaNoiseReductionEnabled;
-(void)setChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setVideoPreviewFilters:(id)arg1 ;
-(void)setUnoptimizedFilterRenderingEnabled:(BOOL)arg1 ;
-(CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)arg1 ;
-(CGPoint)pointForCaptureDevicePointOfInterest:(CGPoint)arg1 ;
-(id)transformedMetadataObjectForMetadataObject:(id)arg1 ;
-(BOOL)isOrientationSupported;
-(BOOL)isMirroringSupported;
-(void)setAutomaticallyAdjustsMirroring:(BOOL)arg1 ;
@end

