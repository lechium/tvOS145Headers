/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/VSAudioPlaybackServiceProtocol.h>
#import <libobjc.A.dylib/AFAudioPowerProviding.h>

@protocol OS_dispatch_queue;
@class NSString, NSError, AVSampleBufferAudioRenderer, AVSampleBufferRenderSynchronizer, NSObject, VSMappedData, NSMutableArray;

@interface VSAudioPlaybackServiceAVSBAR : NSObject <VSAudioPlaybackServiceProtocol, AFAudioPowerProviding> {

	BOOL _discontinuedDuringPlayback;
	BOOL _startedProvidingData;
	unsigned _sessionID;
	NSString* _outputRoute;
	NSError* _error;
	AVSampleBufferAudioRenderer* _renderer;
	AVSampleBufferRenderSynchronizer* _synchronizer;
	NSObject*<OS_dispatch_queue> _dataQueue;
	long long _state;
	double _rendererEnqueuedAudioDuration;
	VSMappedData* _mappedData;
	NSMutableArray* _enqueuedMappedAudioInfo;
	SCD_Struct_VS2 _mappedAudioQueuedTimeStamp;
	AudioStreamBasicDescription _asbd;
	opaque_pthread_mutex_t _audioQueueBufferLock;

}

@property (assign,nonatomic) opaque_pthread_mutex_t audioQueueBufferLock;                  //@synthesize audioQueueBufferLock=_audioQueueBufferLock - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription asbd;                             //@synthesize asbd=_asbd - In the implementation block
@property (nonatomic,retain) AVSampleBufferAudioRenderer * renderer;                       //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) AVSampleBufferRenderSynchronizer * synchronizer;              //@synthesize synchronizer=_synchronizer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataQueue;                       //@synthesize dataQueue=_dataQueue - In the implementation block
@property (assign,nonatomic) long long state;                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) SCD_Struct_VS2 mappedAudioQueuedTimeStamp;                    //@synthesize mappedAudioQueuedTimeStamp=_mappedAudioQueuedTimeStamp - In the implementation block
@property (assign,nonatomic) double rendererEnqueuedAudioDuration;                         //@synthesize rendererEnqueuedAudioDuration=_rendererEnqueuedAudioDuration - In the implementation block
@property (nonatomic,retain) NSString * outputRoute;                                       //@synthesize outputRoute=_outputRoute - In the implementation block
@property (nonatomic,retain) VSMappedData * mappedData;                                    //@synthesize mappedData=_mappedData - In the implementation block
@property (nonatomic,retain) NSMutableArray * enqueuedMappedAudioInfo;                     //@synthesize enqueuedMappedAudioInfo=_enqueuedMappedAudioInfo - In the implementation block
@property (assign,nonatomic) BOOL startedProvidingData;                                    //@synthesize startedProvidingData=_startedProvidingData - In the implementation block
@property (assign,nonatomic) unsigned sessionID;                                           //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) BOOL discontinuedDuringPlayback;                            //@synthesize discontinuedDuringPlayback=_discontinuedDuringPlayback - In the implementation block
@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
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
-(AVSampleBufferAudioRenderer *)renderer;
-(void)setRenderer:(AVSampleBufferAudioRenderer *)arg1 ;
-(void)setDataQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dataQueue;
-(AudioStreamBasicDescription)asbd;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(void)willBeginAccessPower;
-(BOOL)getAveragePower:(float*)arg1 andPeakPower:(float*)arg2 ;
-(void)didEndAccessPower;
-(void)_play;
-(AVSampleBufferRenderSynchronizer *)synchronizer;
-(VSMappedData *)mappedData;
-(id)initWithAudioSessionID:(unsigned)arg1 asbd:(AudioStreamBasicDescription)arg2 ;
-(NSString *)outputRoute;
-(void)flushAndStop;
-(void)enqueue:(id)arg1 packetCount:(long long)arg2 packetDescriptions:(id)arg3 ;
-(void)handleMediaServerReset;
-(BOOL)discontinuedDuringPlayback;
-(id)audioPowerProvider;
-(double)duration:(id)arg1 ;
-(opaqueCMSampleBufferRef)createSampleBuffer:(id)arg1 ;
-(void)_startProvidingData;
-(void)provideMoreData;
-(opaqueCMSampleBufferRef)createSilenceBuffer;
-(void)addEndOfDataAttachment;
-(void)setOutputRoute:(NSString *)arg1 ;
-(opaque_pthread_mutex_t)audioQueueBufferLock;
-(void)setAudioQueueBufferLock:(opaque_pthread_mutex_t)arg1 ;
-(void)setSynchronizer:(AVSampleBufferRenderSynchronizer *)arg1 ;
-(SCD_Struct_VS2)mappedAudioQueuedTimeStamp;
-(void)setMappedAudioQueuedTimeStamp:(SCD_Struct_VS2)arg1 ;
-(double)rendererEnqueuedAudioDuration;
-(void)setRendererEnqueuedAudioDuration:(double)arg1 ;
-(void)setMappedData:(VSMappedData *)arg1 ;
-(NSMutableArray *)enqueuedMappedAudioInfo;
-(void)setEnqueuedMappedAudioInfo:(NSMutableArray *)arg1 ;
-(BOOL)startedProvidingData;
-(void)setStartedProvidingData:(BOOL)arg1 ;
@end

