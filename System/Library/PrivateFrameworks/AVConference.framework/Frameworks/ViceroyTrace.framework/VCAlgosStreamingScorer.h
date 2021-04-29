/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ViceroyTrace/ViceroyTrace-Structs.h>
@class AlgosStreamScore, NSDictionary;

@interface VCAlgosStreamingScorer : NSObject {

	AlgosStreamScore* _algosScore;
	double _launchTime;
	double _score;
	os_unfair_lock_s _blockAlgosScoreLock;
	BOOL _didStartStream;
	BOOL _didEndStream;
	int _maxTargetBitrate;
	int _avgReceivingBitrate;
	double _resolutionPredictedMOS;
	double _frameratePredictedMOS;
	int _pendingScoringEventCount;
	NSDictionary* _algosScoreDictionary;
	double _lastStreamTierSwitch;

}

@property (nonatomic,readonly) double resolutionPredictedMOS;                    //@synthesize resolutionPredictedMOS=_resolutionPredictedMOS - In the implementation block
@property (nonatomic,readonly) double frameratePredictedMOS;                     //@synthesize frameratePredictedMOS=_frameratePredictedMOS - In the implementation block
@property (nonatomic,readonly) double score;                                     //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) int maxTargetBitrate;                               //@synthesize maxTargetBitrate=_maxTargetBitrate - In the implementation block
@property (assign,nonatomic) int avgReceivingBitrate;                            //@synthesize avgReceivingBitrate=_avgReceivingBitrate - In the implementation block
@property (nonatomic,readonly) NSDictionary * algosScoreDictionary;              //@synthesize algosScoreDictionary=_algosScoreDictionary - In the implementation block
-(void)dealloc;
-(double)score;
-(double)streamQuality;
-(void)addStreamTierSwitchWithTime:(double)arg1 ;
-(id)initWithLaunchTime:(double)arg1 ;
-(void)startWithTime:(double)arg1 streamType:(int)arg2 ;
-(void)endWithTime:(double)arg1 streamType:(int)arg2 ;
-(void)addVideoStallWithStartTime:(double)arg1 endStallTime:(double)arg2 ;
-(void)addCallFailureWithTime:(double)arg1 detailedErrorCode:(int)arg2 ;
-(void)addLargeGapErasureWithTime:(double)arg1 largeGapErasureRate:(double)arg2 ;
-(double)scoreStreaming;
-(void)setVideoResolutionWithTime:(double)arg1 width:(int)arg2 height:(int)arg3 ;
-(void)setVideoFramerate:(double)arg1 ;
-(int)maxTargetBitrate;
-(void)setMaxTargetBitrate:(int)arg1 ;
-(int)avgReceivingBitrate;
-(void)setAvgReceivingBitrate:(int)arg1 ;
-(double)resolutionPredictedMOS;
-(double)frameratePredictedMOS;
-(NSDictionary *)algosScoreDictionary;
@end

