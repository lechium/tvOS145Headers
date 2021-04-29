/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSDictionary, NSObject, BWLimitedGMErrorLogger;

@interface BWVideoCompressorNode : BWNode {

	NSDictionary* _compressionSettings;
	NSDictionary* _compressionSettingsPreparedFor;
	BOOL _nextFrameEncodeAsKeyFrame;
	BOOL _prioritizeEncodingSpeedOverQuality;
	int _pipelineTraceID;
	OpaqueVTCompressionSessionRef _compressionSession;
	BOOL _didPrepareToEncode;
	BOOL _sourceIsHDResolution;
	unsigned _sourcePixelFormatType;
	NSObject*<OS_dispatch_queue> _emitterQueue;
	NSObject*<OS_dispatch_queue> _compressionSessionStateQueue;
	NSObject*<OS_dispatch_source> _reapCompressionSessionTimer;
	double _reapCompressionSessionTimerDurationInSeconds;
	BOOL _compressionSessionReuseEnabled;
	BOOL _compressionSessionCanBeReused;
	BOOL _resetCodec;
	BOOL _emittedFirstVideoBuffer;
	NSObject*<OS_dispatch_queue> _thermalAndPowerNotificationQueue;
	double _bFrameEncodingAllowedAtHigherPressureTimeLimit;
	double _bFrameEncodingAllowedAtHigherPressureStopTime;
	int _nonBFrameAverageBitRate;
	int _thermalPressureNotificationToken;
	int _thermalPressureLevel;
	int _powerPressureNotificationToken;
	int _powerPressureLevel;
	BOOL _bFrameEncodingRequested;
	BOOL _bFrameEncodingAllowed;
	BOOL _propagateStabilizedFacesToAVE;
	BOOL _overCaptureEnabled;
	BOOL _shouldAttachDebugSEI;
	BOOL _shouldPassSerializedDepthImageBuffers;
	BOOL _flushRequestReceived;
	float _maxVideoFrameRate;
	BOOL _attachThumbnailSourcePixelBuffer;
	CVBufferRef _thumbnailSourcePixelBuffer;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;
	BOOL _delayedCompressorCleanupEnabled;

}
+(void)initialize;
+(id)_formatRequirementsForCompressionSettings:(id)arg1 maxVideoFrameRate:(float)arg2 retainedBufferCountHint:(int*)arg3 ;
-(void)dealloc;
-(id)nodeType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)makeCurrentConfigurationLive;
-(id)initWithCompressionSettings:(id)arg1 overCaptureEnabled:(BOOL)arg2 maxVideoFrameRate:(float)arg3 delayedCompressorCleanupEnabled:(BOOL)arg4 ;
-(void)setPipelineTraceID:(int)arg1 ;
-(void)setPrioritizeEncodingSpeedOverQuality:(BOOL)arg1 ;
-(int)pipelineTraceID;
-(void)_releaseCompressionSession;
-(void)_cleanCompressor:(BOOL)arg1 ;
-(void)_registerForThermalAndPowerNotifications;
-(void)_prepareForVideoCompression;
-(id)_HDRImageStatisticsDictFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 metadata:(id)arg2 ;
-(void)_validateBFrameEncodingAbility;
-(void)_createCompressionSession;
-(OpaqueVTCompressionSessionRef)_createEncoderSessionWithWidth:(int)arg1 height:(int)arg2 inputPixelFormat:(unsigned)arg3 isHDResolution:(unsigned char)arg4 videoCodec:(unsigned)arg5 encoderSpecification:(id)arg6 compressionProperties:(id)arg7 compressorNodeRef:(void*)arg8 ;
-(void)_updateThermalPressureLevel;
-(void)_updatePowerPressureLevel;
-(int)_setEncoderCompressionPropertiesWithCompressionSession:(OpaqueVTCompressionSessionRef)arg1 compressionProperties:(id)arg2 sourcePixelType:(unsigned)arg3 isHDResolution:(unsigned char)arg4 ;
-(void)insertKeyFrame;
-(BOOL)prioritizeEncodingSpeedOverQuality;
-(OpaqueVTCompressionSessionRef)_compresessionSession;
-(void)setReapCompressionSessionTimerDurationInSeconds:(double)arg1 ;
@end

