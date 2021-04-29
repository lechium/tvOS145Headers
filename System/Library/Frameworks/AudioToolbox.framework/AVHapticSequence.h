/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVHapticPlayer;

@interface AVHapticSequence : NSObject {

	AVHapticPlayer* _player;
	unsigned long long _seqID;
	double _lastStartTime;
	unsigned long long _eventBehavior;
	BOOL _loopIsEnabled;
	float _loopLength;
	float _playbackRate;
	double _duration;
	unsigned long long _channelCount;
	unsigned long long _activeChannel;

}

@property (__weak) AVHapticPlayer * player;                        //@synthesize player=_player - In the implementation block
@property (assign) unsigned long long seqID;                       //@synthesize seqID=_seqID - In the implementation block
@property (assign) double duration;                                //@synthesize duration=_duration - In the implementation block
@property (assign) double lastStartTime;                           //@synthesize lastStartTime=_lastStartTime - In the implementation block
@property (assign) unsigned long long activeChannel;               //@synthesize activeChannel=_activeChannel - In the implementation block
@property (assign) unsigned long long eventBehavior; 
@property (assign) BOOL loopingEnabled; 
@property (assign) float playbackRate; 
@property (readonly) unsigned long long channelCount;              //@synthesize channelCount=_channelCount - In the implementation block
@property (copy) id completionHandler; 
-(id)init;
-(void)dealloc;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(unsigned long long)eventBehavior;
-(void)setEventBehavior:(unsigned long long)arg1 ;
-(AVHapticPlayer *)player;
-(unsigned long long)seqID;
-(double)lastStartTime;
-(unsigned long long)activeChannel;
-(BOOL)loopingEnabled;
-(float)playbackRate;
-(unsigned long long)channelCount;
-(id)initWithData:(id)arg1 player:(id)arg2 error:(id*)arg3 ;
-(id)initWithEvents:(id)arg1 player:(id)arg2 error:(id*)arg3 ;
-(id)initWithDictionary:(id)arg1 player:(id)arg2 error:(id*)arg3 ;
-(BOOL)setLoopingEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(unsigned long long)getChannelCount;
-(void)setLoopingEnabled:(BOOL)arg1 ;
-(BOOL)setLoopLength:(float)arg1 error:(id*)arg2 ;
-(void)setPlaybackRate:(float)arg1 ;
-(BOOL)prepareToPlayAndReturnError:(id*)arg1 ;
-(BOOL)playAtTime:(double)arg1 offset:(double)arg2 error:(id*)arg3 ;
-(BOOL)stopAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)pauseAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)resumeAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)seekToTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)setParameter:(unsigned long long)arg1 value:(float)arg2 channel:(unsigned long long)arg3 atTime:(double)arg4 error:(id*)arg5 ;
-(BOOL)cancelAndReturnError:(id*)arg1 ;
-(BOOL)activateChannelByIndex:(unsigned long long)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(BOOL)setVolume:(float)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(void)setPlayer:(AVHapticPlayer *)arg1 ;
-(void)setSeqID:(unsigned long long)arg1 ;
-(void)setLastStartTime:(double)arg1 ;
-(void)setActiveChannel:(unsigned long long)arg1 ;
@end
