/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/VSAudioPlaybackServiceProtocol.h>
#import <libobjc.A.dylib/AFAudioPowerProviding.h>

@class NSString, NSError, NSDate, VSMappedData, NSMutableArray, NSCondition;

@interface VSAudioPlaybackServiceAT : NSObject <VSAudioPlaybackServiceProtocol, AFAudioPowerProviding> {

	BOOL _discontinuedDuringPlayback;
	unsigned _sessionID;
	OpaqueAudioQueueRef _audioQueue;
	NSString* _outputRoute;
	NSError* _error;
	long long _state;
	double _enqueuedSampleCount;
	NSDate* _audioQueueStartDate;
	NSDate* _audioQueueFutureEndDate;
	VSMappedData* _mappedData;
	NSMutableArray* _enqueuedMappedAudioInfo;
	unsigned long long _playingBufferCount;
	NSCondition* _dequeueCondition;
	AudioStreamBasicDescription _asbd;
	opaque_pthread_cond_t _stateChangeCondition;
	opaque_pthread_mutex_t _waitForStateChangeMutex;
	AudioTimeStamp _audioStartTimeStamp;

}

@property (assign,nonatomic) AudioStreamBasicDescription asbd;                            //@synthesize asbd=_asbd - In the implementation block
@property (assign,nonatomic) OpaqueAudioQueueRef audioQueue;                              //@synthesize audioQueue=_audioQueue - In the implementation block
@property (assign,nonatomic) long long state;                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) opaque_pthread_mutex_t waitForStateChangeMutex;              //@synthesize waitForStateChangeMutex=_waitForStateChangeMutex - In the implementation block
@property (assign,nonatomic) opaque_pthread_cond_t stateChangeCondition;                  //@synthesize stateChangeCondition=_stateChangeCondition - In the implementation block
@property (assign,nonatomic) double enqueuedSampleCount;                                  //@synthesize enqueuedSampleCount=_enqueuedSampleCount - In the implementation block
@property (assign,nonatomic) AudioTimeStamp audioStartTimeStamp;                          //@synthesize audioStartTimeStamp=_audioStartTimeStamp - In the implementation block
@property (nonatomic,retain) NSDate * audioQueueStartDate;                                //@synthesize audioQueueStartDate=_audioQueueStartDate - In the implementation block
@property (nonatomic,retain) NSDate * audioQueueFutureEndDate;                            //@synthesize audioQueueFutureEndDate=_audioQueueFutureEndDate - In the implementation block
@property (nonatomic,retain) NSString * outputRoute;                                      //@synthesize outputRoute=_outputRoute - In the implementation block
@property (nonatomic,retain) VSMappedData * mappedData;                                   //@synthesize mappedData=_mappedData - In the implementation block
@property (nonatomic,retain) NSMutableArray * enqueuedMappedAudioInfo;                    //@synthesize enqueuedMappedAudioInfo=_enqueuedMappedAudioInfo - In the implementation block
@property (assign,nonatomic) unsigned long long playingBufferCount;                       //@synthesize playingBufferCount=_playingBufferCount - In the implementation block
@property (nonatomic,retain) NSCondition * dequeueCondition;                              //@synthesize dequeueCondition=_dequeueCondition - In the implementation block
@property (assign,nonatomic) unsigned sessionID;                                          //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) BOOL discontinuedDuringPlayback;                           //@synthesize discontinuedDuringPlayback=_discontinuedDuringPlayback - In the implementation block
@property (nonatomic,retain) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSError *)error;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(id)start;
-(void)stop;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(void)pause;
-(void)reset;
-(AudioStreamBasicDescription)asbd;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(void)willBeginAccessPower;
-(BOOL)getAveragePower:(float*)arg1 andPeakPower:(float*)arg2 ;
-(void)didEndAccessPower;
-(OpaqueAudioQueueRef)audioQueue;
-(VSMappedData *)mappedData;
-(id)initWithAudioSessionID:(unsigned)arg1 asbd:(AudioStreamBasicDescription)arg2 ;
-(NSString *)outputRoute;
-(void)flushAndStop;
-(void)waitForAudioQueueStop;
-(void)enqueue:(id)arg1 packetCount:(long long)arg2 packetDescriptions:(id)arg3 ;
-(void)handleMediaServerReset;
-(BOOL)isAudioQueueRunning;
-(void)signalQueueRunningStateChange;
-(BOOL)discontinuedDuringPlayback;
-(id)audioPowerProvider;
-(void)setOutputRoute:(NSString *)arg1 ;
-(void)setMappedData:(VSMappedData *)arg1 ;
-(NSMutableArray *)enqueuedMappedAudioInfo;
-(void)setEnqueuedMappedAudioInfo:(NSMutableArray *)arg1 ;
-(void)dequeueAvailableMappedAudio;
-(id)_enqueueAudioBytesLength:(unsigned)arg1 audioBytes:(const void*)arg2 packetCount:(long long)arg3 packetDescriptions:(const void*)arg4 ;
-(BOOL)isAudioQueueStalled;
-(void)setAudioQueue:(OpaqueAudioQueueRef)arg1 ;
-(opaque_pthread_mutex_t)waitForStateChangeMutex;
-(void)setWaitForStateChangeMutex:(opaque_pthread_mutex_t)arg1 ;
-(opaque_pthread_cond_t)stateChangeCondition;
-(void)setStateChangeCondition:(opaque_pthread_cond_t)arg1 ;
-(double)enqueuedSampleCount;
-(void)setEnqueuedSampleCount:(double)arg1 ;
-(AudioTimeStamp)audioStartTimeStamp;
-(void)setAudioStartTimeStamp:(AudioTimeStamp)arg1 ;
-(NSDate *)audioQueueStartDate;
-(void)setAudioQueueStartDate:(NSDate *)arg1 ;
-(NSDate *)audioQueueFutureEndDate;
-(void)setAudioQueueFutureEndDate:(NSDate *)arg1 ;
-(unsigned long long)playingBufferCount;
-(void)setPlayingBufferCount:(unsigned long long)arg1 ;
-(NSCondition *)dequeueCondition;
-(void)setDequeueCondition:(NSCondition *)arg1 ;
@end
