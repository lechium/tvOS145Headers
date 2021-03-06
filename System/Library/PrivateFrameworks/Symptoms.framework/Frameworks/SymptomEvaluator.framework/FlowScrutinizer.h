/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableArray, FlowOracle;

@interface FlowScrutinizer : NSObject {

	long long _numNotedAsFGAudioVideoTC;
	long long _totalRxIfTypeBytes;
	long long _totalTxIfTypeBytes;
	long long _lastSampledRxIfTypeBytes;
	long long _lastSampledTxIfTypeBytes;
	double _lastSampleTimeIntervalSinceReferenceDate;
	long long _totalAudioVideoRxIfTypeBytes;
	long long _totalAudioVideoTxIfTypeBytes;
	long long _lastSampledAudioVideoRxIfTypeBytes;
	long long _lastSampledAudioVideoTxIfTypeBytes;
	double _lastAudioVideoSampleTimeIntervalSinceReferenceDate;
	double _minCoreMediaAssetDownloadEstimatedDuration;
	double _transferSizeFlowFailedThresholdQuarantineTime;
	double _maxFlowIdleTimeWhileMarkedWithTransferSize;
	double _lastInterfaceTrafficTimestamp;
	unsigned long long _numFlowsScrutinized;
	unsigned long long _numExpectedTransferSymptoms;
	unsigned long long _numMatchedExpectedTransferSymptoms;
	unsigned long long _numDelayedMatchExpectedTransferSymptoms;
	unsigned long long _numDupDelayedMatchExpectedTransferSymptoms;
	unsigned long long _numClosedFlowsForExpectedTransferSymptoms;
	unsigned long long _maxContinuouslyActiveSamples;
	unsigned long long _maxAlternatingIdleNonIdleSamples;
	double _idleDurationStopNonCoreMediaThroughputReporting;
	NSMutableDictionary* _originLedgers;
	NSMutableDictionary* _transferSizeFlows;
	NSMutableArray* _interfaceSamples;
	NSMutableArray* _audioVideoSamples;
	long long _flavor;
	FlowOracle* _oracle;

}

@property (nonatomic,retain) NSMutableDictionary * transferSizeFlows;              //@synthesize transferSizeFlows=_transferSizeFlows - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * originLedgers;                  //@synthesize originLedgers=_originLedgers - In the implementation block
@property (nonatomic,retain) NSMutableArray * interfaceSamples;                    //@synthesize interfaceSamples=_interfaceSamples - In the implementation block
@property (nonatomic,retain) NSMutableArray * audioVideoSamples;                   //@synthesize audioVideoSamples=_audioVideoSamples - In the implementation block
@property (assign,nonatomic) long long flavor;                                     //@synthesize flavor=_flavor - In the implementation block
@property (nonatomic,retain) FlowOracle * oracle;                                  //@synthesize oracle=_oracle - In the implementation block
@property (nonatomic,readonly) BOOL hasForegroundAVTrafficClassFlows; 
@property (nonatomic,readonly) BOOL hasForegroundLikelyAVFlows; 
@property (nonatomic,readonly) BOOL pendingInterfaceSampleIsIdle; 
@property (nonatomic,readonly) double lastInterfaceTrafficTimestamp; 
+(id)sharedInstanceForInterfaceType:(long long)arg1 ;
-(id)init;
-(int)setConfiguration:(id)arg1 ;
-(long long)flavor;
-(void)setFlavor:(long long)arg1 ;
-(void)restoreDefaults;
-(NSMutableArray *)interfaceSamples;
-(void)scrutinizeFlow:(id)arg1 withClassification:(id)arg2 scrutinizedAsSignificantChange:(BOOL*)arg3 ;
-(void)noteCoreMediaAssetDownloadEvent:(unsigned long long)arg1 downloadUUID:(id)arg2 onBehalfOf:(id)arg3 duration:(double)arg4 ;
-(void)noteExpectedTransfer:(unsigned long long)arg1 inbound:(BOOL)arg2 upperThreshold:(BOOL)arg3 flowUUID:(id)arg4 at:(double)arg5 scrutinizedAsSignificantChange:(BOOL*)arg6 ;
-(id)getState:(BOOL)arg1 ;
-(void)setOracle:(FlowOracle *)arg1 ;
-(void)coreMediaAssetDownloadCompletion:(id)arg1 for:(id)arg2 at:(double)arg3 ;
-(void)handleFlowDeltas:(id)arg1 snapshot:(id)arg2 ;
-(void)addStateForOrigin:(id)arg1 named:(id)arg2 array:(id)arg3 isDelegate:(BOOL)arg4 ;
-(BOOL)hasForegroundAVTrafficClassFlows;
-(BOOL)hasForegroundLikelyAVFlows;
-(BOOL)pendingInterfaceSampleIsIdle;
-(double)lastInterfaceTrafficTimestamp;
-(void)noteInterfaceTraffic:(id)arg1 ;
-(void)updateInterfaceSamplesWithTime:(double)arg1 bumpSamples:(BOOL)arg2 ;
-(void)updateAudioVideoSamplesWithTime:(double)arg1 bumpSamples:(BOOL)arg2 ;
-(void)updateTransferSizeFlowsWithTime:(double)arg1 ;
-(NSMutableDictionary *)originLedgers;
-(void)setOriginLedgers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)transferSizeFlows;
-(void)setTransferSizeFlows:(NSMutableDictionary *)arg1 ;
-(void)setInterfaceSamples:(NSMutableArray *)arg1 ;
-(NSMutableArray *)audioVideoSamples;
-(void)setAudioVideoSamples:(NSMutableArray *)arg1 ;
-(FlowOracle *)oracle;
@end

