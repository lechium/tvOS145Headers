/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class NSArray, NSData, NSMutableArray;

@interface FigIrisAutoTrimmer : NSObject {

	BOOL _motionAvailable;
	SCD_Struct_BW86 _captureMotionDelta;
	double _captureMotionDeltaPeriod;
	BOOL _haveCaptureMotionDelta;
	SCD_Struct_BW86 _lastAttitude;
	SCD_Struct_BW86 _lastDelta;
	double _lastCheckedTimestamp;
	int _lastStatus;
	int _svmKernelType;
	int _svmVectorCount;
	int _svmParamCount;
	float _svmRBFRho;
	float _svmRBFGamma;
	NSArray* _svmKeys;
	NSData* _svmNormalization;
	NSData* _svmVectors;
	NSMutableArray* _motionSamples;
	unsigned long long _estimatedIntermediatesCount;
	BOOL _intermediateLoggingEnabled;
	SCD_Struct_BW7 _maxHoldDuration;
	long long _maxHoldFrames;
	double _bufferHistorySeconds;
	double _motionSampleRate;
	unsigned long long _nominalHistorySize;
	BOOL _vitalityScoringEnabled;
	float _vitalityDocumentThreshold;
	unsigned _vitalityScoringVersion;
	SCD_Struct_BW53 _vitalityScoringSmartCameraPipelineVersion;

}

@property (nonatomic,readonly) BOOL trimmingActive; 
@property (nonatomic,readonly) unsigned vitalityScoringVersion; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(double)videoFrameRate;
-(void)setVideoFrameRate:(double)arg1 ;
-(unsigned)vitalityScoringVersion;
-(BOOL)vitalityScoringEnabled;
-(void)setVitalityScoringEnabled:(BOOL)arg1 ;
-(void)setVitalityScoringSmartCameraPipelineVersion:(SCD_Struct_BW53)arg1 ;
-(void)setBufferHistorySeconds:(double)arg1 ;
-(void)setMaxHoldDuration:(SCD_Struct_BW7)arg1 ;
-(void)startMotionProcessing;
-(void)stopMotionProcessing;
-(float)computeVitalityScoreForStillImageHostPTS:(SCD_Struct_BW7)arg1 movieRange:(SCD_Struct_BW35)arg2 ;
-(int)emissionStatusForHostPTS:(SCD_Struct_BW7)arg1 ;
-(SCD_Struct_BW7)beginTrimmingForStillImageHostPTS:(SCD_Struct_BW7)arg1 minimumPTS:(SCD_Struct_BW7)arg2 ;
-(void)processISPMotionData:(id)arg1 forHostTime:(SCD_Struct_BW7)arg2 ;
-(void)processCountOfVisibleVitalityObjects:(int)arg1 forHostTime:(SCD_Struct_BW7)arg2 ;
-(void)processInferences:(id)arg1 forHostTime:(SCD_Struct_BW7)arg2 ;
-(SCD_Struct_BW53)vitalityScoringSmartCameraPipelineVersion;
-(void)_initSVM:(id)arg1 fromFile:(id)arg2 ;
-(void)_processMotionSample:(const SCD_Struct_BW86*)arg1 gravity:(const SCD_Struct_Fi116*)arg2 motionTimestamp:(double)arg3 frameTimestamp:(SCD_Struct_BW7)arg4 metadata:(id)arg5 ;
-(BOOL)_checkSamplesContainHostTime:(SCD_Struct_BW7)arg1 ;
-(long long)_findClosestIndexToHostTime:(SCD_Struct_BW7)arg1 fromIndex:(long long)arg2 limitIndex:(long long)arg3 ;
-(double)_timeoutThreshold;
-(long long)_findClosestIndexToOffset:(double)arg1 atLeastOneFromIndex:(long long)arg2 limitIndex:(long long)arg3 ;
-(BOOL)_shouldCut:(id)arg1 withLookahead:(id)arg2 withLookback:(id)arg3 ;
-(float)_computeVitalityFrom:(long long)arg1 to:(long long)arg2 ;
-(long long)_findClosestIndexToTimestamp:(double)arg1 fromIndex:(long long)arg2 limitIndex:(long long)arg3 ;
-(double)_directionalWeightForSample:(id)arg1 ;
-(BOOL)_isUnstable:(id)arg1 withLookback:(id)arg2 ;
-(BOOL)_shouldCutUnstable:(id)arg1 withLookahead:(id)arg2 ;
-(BOOL)_shouldCutSVM:(id)arg1 ;
-(void)_updateStorageStats;
-(double)_getHostTime;
-(BOOL)trimmingActive;
-(SCD_Struct_BW7)maxHoldDuration;
-(double)bufferHistorySeconds;
-(BOOL)intermediateLoggingEnabled;
-(void)setIntermediateLoggingEnabled:(BOOL)arg1 ;
-(id)exportMotionSamples;
@end

