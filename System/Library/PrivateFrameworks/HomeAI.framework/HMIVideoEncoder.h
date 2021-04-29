/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoProcessingNode.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIVideoEncoderDelegate;
@class NSString;

@interface HMIVideoEncoder : HMIVideoProcessingNode <HMFLogging> {

	OpaqueVTCompressionSessionRef _session;
	BOOL _forceKeyFrameOnNextEncodedFrame;
	SCD_Struct_HM19 _dimensions;
	unsigned _codecType;
	BOOL _realTime;
	long long _maxKeyFrameIntervalDuration;
	long long _averageBitRate;
	id<HMIVideoEncoderDelegate> _delegate;
	long long _expectedFrameRate;
	double _expectedDuration;
	unsigned long long _numberOfDroppedFrames;
	HMIVideoEncoderDataRate _dataRateLimit;

}

@property (__weak) id<HMIVideoEncoderDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long averageBitRate;                           //@synthesize averageBitRate=_averageBitRate - In the implementation block
@property (assign,nonatomic) long long maxKeyFrameIntervalDuration;              //@synthesize maxKeyFrameIntervalDuration=_maxKeyFrameIntervalDuration - In the implementation block
@property (assign,nonatomic) HMIVideoEncoderDataRate dataRateLimit;              //@synthesize dataRateLimit=_dataRateLimit - In the implementation block
@property (assign,nonatomic) long long expectedFrameRate;                        //@synthesize expectedFrameRate=_expectedFrameRate - In the implementation block
@property (assign,nonatomic) double expectedDuration;                            //@synthesize expectedDuration=_expectedDuration - In the implementation block
@property (readonly) unsigned long long numberOfDroppedFrames;                   //@synthesize numberOfDroppedFrames=_numberOfDroppedFrames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id<HMIVideoEncoderDelegate>)delegate;
-(void)setDelegate:(id<HMIVideoEncoderDelegate>)arg1 ;
-(void)flush;
-(double)expectedDuration;
-(void)setExpectedDuration:(double)arg1 ;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithDimensions:(SCD_Struct_HM19)arg1 codecType:(unsigned)arg2 realTime:(BOOL)arg3 error:(id*)arg4 ;
-(void)setExpectedFrameRate:(long long)arg1 ;
-(void)setAverageBitRate:(long long)arg1 ;
-(void)setDataRateLimit:(HMIVideoEncoderDataRate)arg1 ;
-(long long)averageBitRate;
-(BOOL)_initSessionWithError:(id*)arg1 ;
-(void)setMaxKeyFrameIntervalDuration:(long long)arg1 ;
-(void)_invalidateSession;
-(BOOL)_encodeSampleBuffer:(opaqueCMSampleBufferRef)arg1 attemptRecovery:(BOOL)arg2 ;
-(long long)maxKeyFrameIntervalDuration;
-(HMIVideoEncoderDataRate)dataRateLimit;
-(long long)expectedFrameRate;
-(unsigned long long)numberOfDroppedFrames;
@end

