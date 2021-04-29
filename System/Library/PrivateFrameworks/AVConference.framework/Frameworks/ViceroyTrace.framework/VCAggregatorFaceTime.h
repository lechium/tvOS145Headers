/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ViceroyTrace/VCAggregator.h>
#import <libobjc.A.dylib/VCAdaptiveLearningDelegate.h>

@class NSString, CallSegment, VCHistogram, VCAdaptiveLearning;

@interface VCAggregatorFaceTime : VCAggregator <VCAdaptiveLearningDelegate> {

	NSString* _remoteInterfaceType;
	NSString* _currentSegmentKey;
	NSString* _lastSegmentKey;
	NSString* _relayServer;
	int _relayType;
	NSString* _accessToken;
	NSString* _remoteOSBuild;
	CallSegment* _currentSegment;
	unsigned _currentWidth;
	BOOL _currentDegradedVideoState;
	double _degradedVideoStartTime;
	double _degradedVideoDuration;
	BOOL _currentNoRemoteState;
	double _noRemoteStartTime;
	unsigned _vcrcProfileNumber;
	int _callTotalDurationTicks;
	int _callAggregatedDurationTicks;
	double _callAverageAudioErasuresRate;
	double _callAverageTargetBitrate;
	double _callAverageSendBitrate;
	double _callAverageReceiveBitrate;
	int _callMaxAudioErasureCount;
	int _callMaxVideoStallCount;
	double _callAverageJitterBufferDelay;
	int _targetJBSizeChanges;
	int _maxTargetJBSizeChanges;
	int _minVideoFrameRate;
	int _accumVideoFrameErasureCount;
	int _maxVideoFrameErasureCount;
	unsigned _averageJitterQueueSize;
	unsigned _averageJitterQueueSizeChanges;
	unsigned _maxJitterQueueSize;
	double _timeWeightedJitterQueueSize;
	VCHistogram* _WANVJBQSize;
	VCHistogram* _JBQSizeDeltaVidLarger;
	VCHistogram* _JBQSizeDeltaAudLarger;
	double _callAverageTotalVideoSendBitrate;
	double _callAverageVideoMediaSendBitrate;
	double _callAverageVideoHeaderSendBitrate;
	double _callAverageVideoFECSendBitrate;
	double _callAverageTotalVideoRecvBitrate;
	double _callAverageRTT;
	double _callAverageAbnormalRTT;
	unsigned _callAbnormalRTTCount;
	double _callAverageAbnormalPLR;
	unsigned _callAbnormalPLRCount;
	double _callAverageAbnormalBPL;
	unsigned _callAbnormalBPLCount;
	double _callPoorConnectionTotalLength;
	double _callPoorConnectionMaxLength;
	unsigned _callPoorConnectionFrequency;
	double _callTotalVideoStallTime;
	double _callTotalMediaStallTime;
	double _callMaxMediaStallTime;
	double _callMaxVideoStallInterval;
	double _callTotalAudioStallTime;
	double _callMaxAudioStallInterval;
	double _lastReportedAudioStallTime;
	double _lastReportedVideoStallTime;
	double _lastReportedMediaStallTime;
	double _callLastVideoResolutionChangeTime;
	unsigned _noRemoteAtCallEnd;
	unsigned _callTotalMediaStallCount;
	unsigned _remoteNoRemoteAtCallEnd;
	unsigned _totalConnectionTime;
	unsigned _startConnectionTime;
	unsigned _transportConnectionTime;
	unsigned _mediaConnectionTime;
	unsigned _callMode;
	unsigned _callDeviceRole;
	unsigned _callTransportType;
	unsigned _callErrorCode;
	unsigned _callDetailedErrorCode;
	unsigned _numberOfSegments;
	unsigned _REDState;
	unsigned char _wifiAssistState;
	unsigned long long _lastReportedAudioPacketSent;
	unsigned long long _lastReportedVideoPacketSent;
	unsigned _lastReportedAudioPacketRecv;
	unsigned long long _VPLRAccumulator;
	unsigned _initialRampUpTime;
	int _initialBitrateDelta;
	int _initialBitrate;
	unsigned _significantOOOPacketCount;
	unsigned _totalVideoPacketsExpected;
	unsigned _totalFIRDemandCounter;
	unsigned _totalFIRCounter;
	unsigned _videoFrameDecodedButSkippedCounter;
	unsigned _videoFrameIncompleteNextTSCounter;
	unsigned _videoFrameTotalIncompleteCounter;
	unsigned _decodedVideoFrameEnqueueCounter;
	unsigned _videoFrameReceivedCounter;
	unsigned _videoFrameExpectedCounter;
	unsigned _videoFrameNonFECTotalCounter;
	unsigned _videoFrameNonFECCompleteCounter;
	unsigned _encodedVideoFrameCounter;
	unsigned _captureVideoFrameCounter;
	unsigned _overshootSendBitrate;
	unsigned _undershootSendBitrate;
	unsigned _overUtilizedBandwidth;
	unsigned _underUtilizedBandwidth;
	unsigned _negotiatedSwitches;
	unsigned _remoteSwitches;
	unsigned _lastReportedTotalCellDupTxDataBytes;
	unsigned _lastReportedTotalCellDupRxDataBytes;
	unsigned _lastReportedTotalUsedCellBudgetTxDataBytes;
	unsigned _lastReportedTotalUsedCellBudgetRxDataBytes;
	unsigned _lastReportedMBLRampDownCount;
	unsigned _lastReportedSuddenBandwidthDropCount;
	unsigned char _duplicationType;
	unsigned long long _lastReportedTotalCellTxDataBytes;
	unsigned long long _lastReportedTotalCellRxDataBytes;
	unsigned long long _lastReportedTotalWifiTxDataBytes;
	unsigned long long _lastReportedTotalWifiRxDataBytes;
	unsigned _totalDuplicationDuration;
	unsigned _wifiToCellHandoverCount;
	unsigned _cellToWifiHandoverCount;
	BOOL _isDuplicationEnabled;
	BOOL _remoteFaceTimeSwitchesAvailable;
	double _duplicationStartTime;
	unsigned _evictedFramesLikelyRecoverableCount;
	unsigned _evictedFramesTrackedCount;
	unsigned _evictedFramesAnalysisValidIntervals;
	double _evictedFramesAverageLatePacketDelay;
	unsigned _fecProcessingTime;
	VCHistogram* _lossPattern;
	double _primaryConnHealthAllowedDelay;
	unsigned _linkProbingVersion;
	unsigned _remoteLinkProbingVersion;
	unsigned _localAlertStateSwitchCount;
	unsigned _remoteAlertStateSwitchCount;
	double _lastLocalAlertTime;
	double _lastRemoteAlertTime;
	BOOL _localAlertActive;
	BOOL _remoteAlertActive;
	unsigned _dynamicDupeLinkCount;
	double _rttMeanTotalDelta;
	unsigned char _plrTierTotalDelta;
	unsigned _isVPCEnabled;
	double _minVPCProcessingTime;
	double _maxVPCProcessingTime;
	double _averageVPCProcessingTimeSum;
	unsigned _averageVPCProcessingTimeCounter;
	VCHistogram* _callVideoSwitchPeriodHistogram;
	VCAdaptiveLearning* _adaptiveLearning;
	unsigned long long _localWRMDuplicationSwitchCount;
	unsigned long long _remoteWRMDuplicationSwitchCount;

}

@property (readonly) VCHistogram * WANVJBQSize;                        //@synthesize WANVJBQSize=_WANVJBQSize - In the implementation block
@property (readonly) VCHistogram * JBQSizeDeltaVidLarger;              //@synthesize JBQSizeDeltaVidLarger=_JBQSizeDeltaVidLarger - In the implementation block
@property (readonly) VCHistogram * JBQSizeDeltaAudLarger;              //@synthesize JBQSizeDeltaAudLarger=_JBQSizeDeltaAudLarger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reset;
-(id)initWithDelegate:(id)arg1 ;
-(void)startNewSegment;
-(void)flushCurrentSegment;
-(void)processEventWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 ;
-(id)aggregatedSegmentReport:(int)arg1 ;
-(void)updateVideoFECStats:(id)arg1 ;
-(VCHistogram *)WANVJBQSize;
-(VCHistogram *)JBQSizeDeltaVidLarger;
-(VCHistogram *)JBQSizeDeltaAudLarger;
-(int)initialSettledBitrate;
-(int)previousISBRForSegment:(id)arg1 ;
-(int)adaptiveLearningState;
-(void)updateSegment:(id)arg1 TBR:(int)arg2 ISBTR:(int)arg3 SATXBR:(int)arg4 SARBR:(int)arg5 BWE:(int)arg6 ;
-(int)shortTermAverageTBRForSegment:(id)arg1 ;
-(int)longTermAverageTBRForSegment:(id)arg1 ;
-(int)longTermAverageISBRForSegment:(id)arg1 ;
-(int)shortTermAverageISBRForSegment:(id)arg1 ;
-(int)longTermAverageSATXBRForSegment:(id)arg1 ;
-(int)shortTermAverageSATXBRForSegment:(id)arg1 ;
-(int)longTermAverageSARBRForSegment:(id)arg1 ;
-(int)shortTermAverageSARBRForSegment:(id)arg1 ;
-(int)longTermAverageBWEForSegment:(id)arg1 ;
-(int)shortTermAverageBWEForSegment:(id)arg1 ;
-(void)saveCallSegmentHistory;
-(int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2 ;
-(void)addVPCTelemetry:(id)arg1 ;
-(id)aggregatedSegmentQRReport;
-(id)duplicationIndicator;
-(BOOL)isLocalInterfaceTypeForSegment:(id)arg1 equalTo:(id)arg2 ;
-(void)updateVPCStats:(id)arg1 ;
-(void)updateVPCStatus:(id)arg1 ;
-(void)updateRelayInfo:(id)arg1 ;
-(void)updateCellTech:(id)arg1 ;
-(BOOL)isDuplicationChangedForEventType:(unsigned short)arg1 ;
-(void)updateBitrateCap:(id)arg1 ;
-(void)updateRTStats:(id)arg1 ;
-(void)updateVideoResolution:(id)arg1 ;
-(void)updatePauseVideo:(BOOL)arg1 ;
-(void)updateRoleModeTransport:(unsigned short)arg1 deviceRole:(unsigned short)arg2 transportType:(unsigned short)arg3 ;
-(void)updateErrorCode:(id)arg1 ;
-(void)updateConnectionTelemetry:(id)arg1 ;
-(void)updateNoRemoteState:(BOOL)arg1 ;
-(void)updateConnectionTimes:(id)arg1 ;
-(void)updateVideoQualityWithPayload:(id)arg1 ;
-(void)updateVideoSwitchTimes;
-(void)updateAdaptiveLearningStats:(unsigned)arg1 payload:(id)arg2 ;
-(void)updateSwitchConfiguration:(unsigned)arg1 payload:(id)arg2 ;
-(void)updateVCRCProfileNumber:(unsigned)arg1 ;
-(void)updatePrimaryConnHealthAllowedDelay:(double)arg1 ;
-(void)updateLinkProbingStats:(unsigned)arg1 payload:(id)arg2 ;
-(void)updateWRMMetrics:(unsigned)arg1 payload:(id)arg2 ;
-(void)updateAlgoMetrics:(unsigned)arg1 ;
-(void)updateNetworkStats:(unsigned)arg1 payload:(id)arg2 ;
-(void)initAdaptiveLearningWithParameters:(id)arg1 ;
-(id)aggregatedCallReports;
-(id)aggregatedSessionReport;
@end

