/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableDictionary;

@interface MultiwayCall : NSObject {

	NSString* _remoteParticipantID;
	NSMutableDictionary* _streams;
	BOOL _isAudioEnabled;
	BOOL _isVideoEnabled;
	BOOL _live;
	BOOL _isFullSize;
	int _duration;
	int _adjustedDuration;
	int _interval;
	int _frequency;
	unsigned long long _downlinkRateSum;
	unsigned _downlinkRateUpdateCounter;
	unsigned long long _actualBitrateSum;
	unsigned _actualBitrateUpdateCounter;
	unsigned _videoStreamSwitchCount;
	unsigned _audioStreamSwitchCount;
	unsigned _downlinkTargetBitrateSwitchCount;
	unsigned _timeToSeeFirstRemoteVideoFrame;
	unsigned _timeToHearFirstRemoteAudioFrame;
	unsigned _averageReceiveFramerate;
	unsigned _averageJitterbufferLength;
	double _connectionTime;
	unsigned _firstVideoFrameReceivedDelta;
	unsigned _firstMKIReceivedDelta;
	unsigned _firstDecodableVideoFrameDelta;
	BOOL _isVideoDegraded;
	unsigned _videoDegradedTotalCounter;
	double _videoDegradedTotalTime;
	double _videoDegradedStartTime;
	unsigned _decryptionTimeoutCount;
	double _videoDegradedMaxLength;

}

@property (readonly) NSString * remoteParticipantID;                       //@synthesize remoteParticipantID=_remoteParticipantID - In the implementation block
@property (getter=isLive,readonly) BOOL live;                              //@synthesize live=_live - In the implementation block
@property (assign) BOOL isAudioEnabled;                                    //@synthesize isAudioEnabled=_isAudioEnabled - In the implementation block
@property (assign) BOOL isVideoEnabled;                                    //@synthesize isVideoEnabled=_isVideoEnabled - In the implementation block
@property (assign) BOOL isFullSize;                                        //@synthesize isFullSize=_isFullSize - In the implementation block
@property (assign) int duration;                                           //@synthesize duration=_duration - In the implementation block
@property (assign) int adjustedDuration;                                   //@synthesize adjustedDuration=_adjustedDuration - In the implementation block
@property (readonly) NSMutableDictionary * streams;                        //@synthesize streams=_streams - In the implementation block
@property (assign) unsigned videoStreamSwitchCount;                        //@synthesize videoStreamSwitchCount=_videoStreamSwitchCount - In the implementation block
@property (assign) unsigned audioStreamSwitchCount;                        //@synthesize audioStreamSwitchCount=_audioStreamSwitchCount - In the implementation block
@property (assign) unsigned downlinkTargetBitrateSwitchCount;              //@synthesize downlinkTargetBitrateSwitchCount=_downlinkTargetBitrateSwitchCount - In the implementation block
@property (assign) unsigned timeToSeeFirstRemoteVideoFrame;                //@synthesize timeToSeeFirstRemoteVideoFrame=_timeToSeeFirstRemoteVideoFrame - In the implementation block
@property (assign) unsigned timeToHearFirstRemoteAudioFrame;               //@synthesize timeToHearFirstRemoteAudioFrame=_timeToHearFirstRemoteAudioFrame - In the implementation block
@property (assign) unsigned averageJitterbufferLength;                     //@synthesize averageJitterbufferLength=_averageJitterbufferLength - In the implementation block
@property (assign) double connectionTime;                                  //@synthesize connectionTime=_connectionTime - In the implementation block
@property (assign) unsigned firstVideoFrameReceivedDelta;                  //@synthesize firstVideoFrameReceivedDelta=_firstVideoFrameReceivedDelta - In the implementation block
@property (assign) unsigned firstMKIReceivedDelta;                         //@synthesize firstMKIReceivedDelta=_firstMKIReceivedDelta - In the implementation block
@property (assign) unsigned firstDecodableVideoFrameDelta;                 //@synthesize firstDecodableVideoFrameDelta=_firstDecodableVideoFrameDelta - In the implementation block
@property (assign) double videoDegradedStartTime;                          //@synthesize videoDegradedStartTime=_videoDegradedStartTime - In the implementation block
@property (assign) BOOL isVideoDegraded;                                   //@synthesize isVideoDegraded=_isVideoDegraded - In the implementation block
@property (assign) unsigned videoDegradedTotalCounter;                     //@synthesize videoDegradedTotalCounter=_videoDegradedTotalCounter - In the implementation block
@property (assign) double videoDegradedTotalTime;                          //@synthesize videoDegradedTotalTime=_videoDegradedTotalTime - In the implementation block
@property (assign) double videoDegradedMaxLength;                          //@synthesize videoDegradedMaxLength=_videoDegradedMaxLength - In the implementation block
@property (assign) unsigned decryptionTimeoutCount;                        //@synthesize decryptionTimeoutCount=_decryptionTimeoutCount - In the implementation block
-(void)dealloc;
-(int)duration;
-(void)setDuration:(int)arg1 ;
-(void)setIsAudioEnabled:(BOOL)arg1 ;
-(BOOL)isAudioEnabled;
-(NSString *)remoteParticipantID;
-(BOOL)isLive;
-(BOOL)isVideoEnabled;
-(BOOL)isVideoDegraded;
-(unsigned)RTPeriod;
-(int)adjustedDuration;
-(void)setAdjustedDuration:(int)arg1 ;
-(unsigned short)significantVideoStallCount;
-(unsigned short)audioErasureCount;
-(double)audioErasureTotalTime;
-(unsigned short)maxAudioErasureCount;
-(unsigned short)maxVideoStallCount;
-(unsigned short)maxJBTargetSizeChanges;
-(unsigned short)minVideoFrameRate;
-(id)initCallWithRemoteParticipantID:(id)arg1 ;
-(void)processDownlinkRateChange:(unsigned)arg1 ;
-(void)processActualBitrateRateChange:(unsigned)arg1 ;
-(unsigned long long)downlinkRateSum;
-(unsigned)downlinkRateUpdateCounter;
-(unsigned long long)actualBitrateSum;
-(unsigned)actualBitrateUpdateCounter;
-(double)significantVideoStallTotalTime;
-(double)avgJBDelay;
-(double)avgJBTargetSizeChanges;
-(void)processVideoDegraded:(BOOL)arg1 ;
-(void)setIsVideoEnabled:(BOOL)arg1 ;
-(BOOL)isFullSize;
-(void)setIsFullSize:(BOOL)arg1 ;
-(NSMutableDictionary *)streams;
-(unsigned)videoStreamSwitchCount;
-(void)setVideoStreamSwitchCount:(unsigned)arg1 ;
-(unsigned)audioStreamSwitchCount;
-(void)setAudioStreamSwitchCount:(unsigned)arg1 ;
-(unsigned)downlinkTargetBitrateSwitchCount;
-(void)setDownlinkTargetBitrateSwitchCount:(unsigned)arg1 ;
-(unsigned)timeToSeeFirstRemoteVideoFrame;
-(void)setTimeToSeeFirstRemoteVideoFrame:(unsigned)arg1 ;
-(unsigned)timeToHearFirstRemoteAudioFrame;
-(void)setTimeToHearFirstRemoteAudioFrame:(unsigned)arg1 ;
-(unsigned)averageJitterbufferLength;
-(void)setAverageJitterbufferLength:(unsigned)arg1 ;
-(double)connectionTime;
-(void)setConnectionTime:(double)arg1 ;
-(unsigned)firstVideoFrameReceivedDelta;
-(void)setFirstVideoFrameReceivedDelta:(unsigned)arg1 ;
-(unsigned)firstMKIReceivedDelta;
-(void)setFirstMKIReceivedDelta:(unsigned)arg1 ;
-(unsigned)firstDecodableVideoFrameDelta;
-(void)setFirstDecodableVideoFrameDelta:(unsigned)arg1 ;
-(double)videoDegradedTotalTime;
-(void)setVideoDegradedTotalTime:(double)arg1 ;
-(double)videoDegradedStartTime;
-(void)setVideoDegradedStartTime:(double)arg1 ;
-(void)setIsVideoDegraded:(BOOL)arg1 ;
-(unsigned)videoDegradedTotalCounter;
-(void)setVideoDegradedTotalCounter:(unsigned)arg1 ;
-(double)videoDegradedMaxLength;
-(void)setVideoDegradedMaxLength:(double)arg1 ;
-(unsigned)decryptionTimeoutCount;
-(void)setDecryptionTimeoutCount:(unsigned)arg1 ;
@end

