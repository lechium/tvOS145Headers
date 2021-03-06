/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFileSinkNode.h>

@protocol OS_dispatch_queue;
@class NSArray, FigCaptureMovieFileRecordingSettings, NSObject, BWIrisMovieInfo, NSMutableArray, BWIrisMovieGenerator, BWInferenceResultRingBuffers, BWObjectRingBufferThreadSafe, BWVideoQualityMetrics, BWIrisStillImageMovieMetadataCache, NSDictionary, BWVideoOrientationTimeMachine, BWMovingWindowStats, BWStats, NSString, BWLimitedGMErrorLogger, BWMovieFileOutputAnalyticsPayload, NSMutableDictionary;

@interface BWQuickTimeMovieFileSinkNode : BWFileSinkNode {

	unsigned long long _currFileSize;
	unsigned long long _maxFileSize;
	long long _estimatedMovieSizeOverhead;
	unsigned long long _minFreeDiskSpaceLimit;
	unsigned long long _fileSizeAtPreviousCheck;
	SCD_Struct_BW7 _currFileDuration;
	SCD_Struct_BW7 _checkDiskSpaceAtThisDuration;
	SCD_Struct_BW7 _logStatsAtThisDuration;
	SCD_Struct_BW7 _maxFileDuration;
	SCD_Struct_BW7 _adjustedMaxFileDuration;
	SCD_Struct_BW7 _nextTimeToReturnFileSize;
	int _masterInputTimeScale;
	float _maxVideoFrameRate;
	NSArray* _stagingQueues;
	FigCaptureMovieFileRecordingSettings* _settings;
	char* _parentPath;
	SCD_Struct_BW7 _startingPTS;
	SCD_Struct_BW7* _smallestWrittenPTSs;
	SCD_Struct_BW7* _largestWrittenPTSs;
	SCD_Struct_BW7* _largestWrittenVideoDTSs;
	SCD_Struct_BW7* _secondLargestWrittenAudioVideoPTSs;
	SCD_Struct_BW7* _lastWrittenAudioVideoDurations;
	NSArray* _movieLevelMetadata;
	NSArray* _trackReferenceListForMetadataInputs;
	NSArray* _structuralDependentTrackReferenceListForMetadataInputs;
	unsigned long long _numInputs;
	NSObject*<OS_dispatch_queue> _thumbnailGenerationDispatchQueue;
	IOSurfaceRef _thumbnailSurface;
	int _recordingState;
	OpaqueFigFormatWriterRef _formatWriter;
	OpaqueCMByteStreamRef _byteStream;
	int* _trackIDs;
	BOOL* _expectingToSeeSamplesForInput;
	BOOL* _haveSeenSamplesForTrack;
	BOOL* _finalDurationNeedsToBeWrittenForTrack;
	BWIrisMovieInfo* _firstIrisMovieInfo;
	NSMutableArray* _pendingIrisRefMovieRequests;
	BWIrisMovieGenerator* _irisMovieGenerator;
	NSMutableArray* _flushingIrisMovieGenerators;
	NSObject*<OS_dispatch_queue> _irisMovieGenerationQueue;
	int _irisStillImageTimeTrackID;
	int _irisStillImageTimeTrackTimeScale;
	BOOL _recordingIsForFrontCamera;
	unsigned long long _masterInputIndex;
	BOOL _didBeginSession;
	BOOL _didBeginWriting;
	BOOL _needToDeMoof;
	BOOL _atLeastOneFragmentIsWritten;
	BOOL _vitalInputStreamHasBeenForcedOff;
	int _streamForcedOffErrorCode;
	unsigned long long _numVideoTracks;
	BOOL _ignoreFileSizeLimit;
	BOOL _debugAudio;
	BOOL _haveDebugASBD;
	unsigned long long _numAudioTracks;
	AudioStreamBasicDescription _debugASBD;
	AudioBufferList* _debugABL;
	SCD_Struct_BW7 _debugDurationForFailOfDiskSpaceTest;
	OpaqueFigSimpleMutexRef _propertyMutex;
	BOOL _irisSampleReferenceMoviesEnabled;
	BWInferenceResultRingBuffers* _irisMotionAnalysisRingBuffer;
	BWObjectRingBufferThreadSafe* _overCaptureQualityMetadataRingBuffer;
	BWVideoQualityMetrics* _overCaptureQualityMetrics;
	double _maxTotalZoomFactor;
	double _pointlessOverCaptureMaxZoomThreshold;
	BWIrisStillImageMovieMetadataCache* _irisStillImageMovieMetadataCache;
	SCD_Struct_BW2 _videoDimensions;
	BOOL _irisMovieProcessingSuspended;
	NSDictionary* _temporalScalabilityProperties;
	BWVideoOrientationTimeMachine* _videoOrientationTimeMachine;
	unsigned long long _pipelineIndex;
	int _pipelineTraceID;
	BWMovingWindowStats* _capturePipelineLatencyStats;
	BWStats* _irisVideoLatencyStats;
	BWMovingWindowStats* _recentIrisVideoLatencyStats;
	BWStats* _videoLatencyStats;
	NSString* _gmLoggingPreamble;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;
	NSString* _clientApplicationID;
	long long _numVideoFramesPortTypeFront;
	long long _numVideoFramesPortTypeFrontSuperWide;
	long long _numVideoFramesPortTypeBack;
	long long _numVideoFramesPortTypeTelephoto;
	long long _numVideoFramesPortTypeSuperWide;
	BWMovieFileOutputAnalyticsPayload* _analyticsPayload;
	BWCoreAnalyticsMovieRecordingSphereAFStatistics _sphereAFStatistics;
	NSMutableDictionary* _sphereModeByPortType;
	NSMutableDictionary* _APSModeByPortType;
	BOOL _afDriverShortOccurred;
	NSMutableDictionary* _vfrStatistics;
	NSMutableDictionary* _vfrFrameRateChangeReasonCount;
	int _prevReason;

}

@property (nonatomic,copy) NSArray * movieLevelMetadata; 
@property (nonatomic,copy) NSArray * trackReferenceListForMetadataInputs; 
@property (nonatomic,copy) NSArray * structuralDependentTrackReferenceListForMetadataInputs; 
@property (assign,nonatomic) BOOL irisMovieProcessingSuspended; 
+(void)initialize;
-(void)dealloc;
-(void)setMovieLevelMetadata:(NSArray *)arg1 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(NSArray *)movieLevelMetadata;
-(void)_setRecordingState:(int)arg1 ;
-(id)initWithSinkID:(id)arg1 ;
-(id)clientApplicationID;
-(void)setClientApplicationID:(id)arg1 ;
-(void)setPipelineTraceID:(int)arg1 ;
-(id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAuxiliaryPictureInputs:(unsigned long long)arg2 numberOfAudioInputs:(unsigned long long)arg3 numberOfMetadataInputs:(unsigned long long)arg4 cameraInfoByPortType:(id)arg5 pipelineIndex:(unsigned long long)arg6 sinkID:(id)arg7 ;
-(void)setIrisMotionAnalysisRingBuffer:(id)arg1 ;
-(void)setupOverCaptureQualityMetricsForLivePhotoHistory:(int)arg1 ;
-(void)setIrisSampleReferenceMoviesEnabled:(BOOL)arg1 ;
-(id)videoOrientationTimeMachine;
-(void)setVideoOrientationTimeMachine:(id)arg1 ;
-(void)setTrackReferenceListForMetadataInputs:(NSArray *)arg1 ;
-(void)setStructuralDependentTrackReferenceListForMetadataInputs:(NSArray *)arg1 ;
-(void)setIrisStillImageMovieMetadataCache:(id)arg1 ;
-(void)_doEndRecordingAtTime:(SCD_Struct_BW7)arg1 earlyTerminationErrCode:(int)arg2 ;
-(void)_finishIrisMovieGeneration;
-(int)pipelineTraceID;
-(BOOL)_driveStateMachineWithBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg3 ;
-(void)_handleIrisMovieRequest:(id)arg1 ;
-(void)_handleStreamForcedOffMarkerBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_writeBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 ;
-(void)_processIrisRequest:(id)arg1 ;
-(void)_determineWhichInputsWeExpectToSeeSamplesFor;
-(NSArray *)trackReferenceListForMetadataInputs;
-(NSArray *)structuralDependentTrackReferenceListForMetadataInputs;
-(id)_validTrackReferencesForReferenceInputIndexes:(id)arg1 ;
-(int)_startUpFormatWriterAtTime:(SCD_Struct_BW7)arg1 withSettings:(id)arg2 ;
-(void)_buildIrisRefMovieGeneratorAndWriteFirstIrisAsRefMovie;
-(void)_writeIrisRefMovieWithInfo:(id)arg1 ;
-(int)_writeStillImageTimeMetadataSampleForCaptureTime:(SCD_Struct_BW7)arg1 stillImageTransformData:(id)arg2 referenceDimensions:(SCD_Struct_BW2)arg3 toTrackWithID:(int)arg4 usingTrackTimeScale:(int)arg5 ;
-(SCD_Struct_BW7)_finalizeAudioVideoDurationsAndFindWrittenEndingPTSFromEndingPTS:(SCD_Struct_BW7)arg1 ;
-(SCD_Struct_BW7)_validatedEndingPTSFromEndingPTS:(SCD_Struct_BW7)arg1 ;
-(SCD_Struct_BW7)_endingPTSForTrack:(unsigned long long)arg1 endingPTS:(SCD_Struct_BW7)arg2 writtenEndingPTS:(SCD_Struct_BW7)arg3 validatedEndingPTS:(SCD_Struct_BW7)arg4 isIrisMasterMovie:(BOOL)arg5 ;
-(unsigned long long)_getCurrentFileSize:(BOOL)arg1 currentHostTime:(SCD_Struct_BW7)arg2 ;
-(SCD_Struct_BW7)_findWrittenStartingPTS;
-(void)_fixVitalityScoreWithMotionAnalysis:(id)arg1 ;
-(int)_verifyMovieTiming:(id)arg1 ;
-(void)_moveOrDeleteTemporaryIrisMovie:(id)arg1 recordingSucceeded:(BOOL)arg2 ;
-(void)_generateThumbnailSurfaceFromPixelBuffer:(CVBufferRef)arg1 physicallyMirroredHorizontallyUpstream:(BOOL)arg2 ;
-(long long)_adjustedMinFreeDiskSpaceLimitForEstimatedMovieSizeOverhead:(long long)arg1 ;
-(void)_preprocessingForFirstVideoBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 ;
-(void)_preprocessingForFirstAudioBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 ;
-(void)_preprocessingForFirstMetadataBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 ;
-(int)_adjustMaxFileDurationForMovieTimeScale:(int)arg1 ;
-(void)_printBufferEvent:(opaqueCMSampleBufferRef)arg1 forNodeInputIndex:(unsigned long long)arg2 eventName:(id)arg3 ;
-(void)_collectCoreAnalyticsData:(opaqueCMSampleBufferRef)arg1 ;
-(int)_checkFreeSpaceForEstimatedMovieSizeOverhead:(long long)arg1 ;
-(void)_forceEarlyTerminationWithErrorCode:(int)arg1 ;
-(void)_debugAudioUsingSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)_driveStateMachineWithStartMarkerBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 inputStagingQueue:(id)arg3 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg4 ;
-(BOOL)_driveStateMachineWithStopOrFlushMarkerBuffer:(opaqueCMSampleBufferRef)arg1 requiredAction:(CFStringRef)arg2 forInputIndex:(unsigned long long)arg3 inputStagingQueue:(id)arg4 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg5 ;
-(BOOL)_driveStateMachineWithPauseMarkerBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 inputStagingQueue:(id)arg3 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg4 ;
-(BOOL)_driveStateMachineWithResumeMarkerBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 inputStagingQueue:(id)arg3 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg4 ;
-(void)_driveStateMachineWithMediaBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 inputStagingQueue:(id)arg3 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg4 ;
-(SCD_Struct_BW7)_findStartMarkersWithMatchedStagedSetting:(id*)arg1 sensorVideoPort:(const _CFString*)arg2 ;
-(int)_doStartRecordingAtTime:(SCD_Struct_BW7)arg1 withSettings:(id)arg2 sensorVideoPort:(CFStringRef)arg3 ;
-(SCD_Struct_BW7)_findMarkers:(CFStringRef)arg1 ;
-(BOOL)_irisIsExpected:(id)arg1 ;
-(BOOL)irisSampleReferenceMoviesEnabled;
-(id)irisMotionAnalysisRingBuffer;
-(id)irisStillImageMovieMetadataCache;
-(unsigned long long)lastFileSize;
-(SCD_Struct_BW7)lastFileDuration;
-(BOOL)irisMovieProcessingSuspended;
-(void)setIrisMovieProcessingSuspended:(BOOL)arg1 ;
-(void)_handleFormatWriterErrorOccurredCallback:(id)arg1 userInfo:(id)arg2 ;
-(void)_handleFormatWriterDidWriteFragmentNotification;
@end

