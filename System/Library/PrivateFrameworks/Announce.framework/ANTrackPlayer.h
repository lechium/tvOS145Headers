/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ANTrackPlayerDelegate, OS_dispatch_queue, OS_dispatch_group, OS_os_log;
@class NSObject, AVQueuePlayer, NSURL, AVAudioSession, NSMutableArray, NSUUID, ANAudioSessionManager, NSString;

@interface ANTrackPlayer : NSObject {

	BOOL _readyToPlay;
	id<ANTrackPlayerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _workQueue;
	unsigned long long _playbackState;
	AVQueuePlayer* _queuePlayer;
	NSObject*<OS_dispatch_group> _playerStartGroup;
	double _silenceBetweenEachTrack;
	NSURL* _audioFileAtStart;
	double _trimStartTone;
	NSURL* _audioFileTransition;
	double _trimTransitionTone;
	double _previousSkipGoesToPreviousTrackDelta;
	AVAudioSession* _audioSession;
	NSMutableArray* _playerItems;
	NSUUID* _endpointUUID;
	NSObject*<OS_os_log> _log;
	double _interruptionStart;
	unsigned long long _options;
	ANAudioSessionManager* _audioSessionManager;

}

@property (assign) unsigned long long playbackState;                                     //@synthesize playbackState=_playbackState - In the implementation block
@property (assign) double interruptionStart;                                             //@synthesize interruptionStart=_interruptionStart - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                               //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) ANAudioSessionManager * audioSessionManager;              //@synthesize audioSessionManager=_audioSessionManager - In the implementation block
@property (assign,nonatomic) BOOL readyToPlay;                                           //@synthesize readyToPlay=_readyToPlay - In the implementation block
@property (nonatomic,readonly) int numberActiveTracks; 
@property (__weak) id<ANTrackPlayerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (__weak) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                             //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSString * whatIsPlaying; 
@property (nonatomic,retain) AVQueuePlayer * queuePlayer;                                //@synthesize queuePlayer=_queuePlayer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> playerStartGroup;              //@synthesize playerStartGroup=_playerStartGroup - In the implementation block
@property (assign) double silenceBetweenEachTrack;                                       //@synthesize silenceBetweenEachTrack=_silenceBetweenEachTrack - In the implementation block
@property (nonatomic,retain) NSURL * audioFileAtStart;                                   //@synthesize audioFileAtStart=_audioFileAtStart - In the implementation block
@property (assign) double trimStartTone;                                                 //@synthesize trimStartTone=_trimStartTone - In the implementation block
@property (nonatomic,retain) NSURL * audioFileTransition;                                //@synthesize audioFileTransition=_audioFileTransition - In the implementation block
@property (assign) double trimTransitionTone;                                            //@synthesize trimTransitionTone=_trimTransitionTone - In the implementation block
@property (assign) double previousSkipGoesToPreviousTrackDelta;                          //@synthesize previousSkipGoesToPreviousTrackDelta=_previousSkipGoesToPreviousTrackDelta - In the implementation block
@property (nonatomic,readonly) AVAudioSession * audioSession;                            //@synthesize audioSession=_audioSession - In the implementation block
@property (nonatomic,readonly) NSMutableArray * playerItems;                             //@synthesize playerItems=_playerItems - In the implementation block
@property (nonatomic,readonly) NSUUID * endpointUUID;                                    //@synthesize endpointUUID=_endpointUUID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> log;                                 //@synthesize log=_log - In the implementation block
+(double)machTimeToSeconds:(unsigned long long)arg1 ;
+(unsigned long long)secondsToMachTime:(double)arg1 ;
-(void)dealloc;
-(id<ANTrackPlayerDelegate>)delegate;
-(void)setDelegate:(id<ANTrackPlayerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)stop;
-(unsigned long long)options;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)next;
-(void)previous;
-(void)end;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)_callDelegateWithBlock:(/*^block*/id)arg1 ;
-(id)prepareToPlay;
-(void)playWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)playbackState;
-(void)setPlaybackState:(unsigned long long)arg1 ;
-(AVAudioSession *)audioSession;
-(void)_configureAudioSession;
-(AVQueuePlayer *)queuePlayer;
-(void)setQueuePlayer:(AVQueuePlayer *)arg1 ;
-(BOOL)readyToPlay;
-(NSUUID *)endpointUUID;
-(NSMutableArray *)playerItems;
-(double)previousSkipGoesToPreviousTrackDelta;
-(BOOL)playInternalSync;
-(NSString *)whatIsPlaying;
-(void)nextInternalSync;
-(void)previousInternalSync;
-(void)handleInterruptionDelay:(double)arg1 ;
-(NSObject*<OS_dispatch_group>)playerStartGroup;
-(void)_deregisterForNotificationsWithAudioSession:(id)arg1 ;
-(void)_registerForNotificationsWithAudioSession:(id)arg1 ;
-(void)audioSessionInterruptionHandler:(id)arg1 ;
-(int)numberActiveTracks;
-(id)initWithOptions:(unsigned long long)arg1 endpointUUID:(id)arg2 ;
-(void)setSilenceBetweenEachTrack:(double)arg1 ;
-(void)setAudioFileAtStart:(NSURL *)arg1 ;
-(void)setTrimStartTone:(double)arg1 ;
-(void)setAudioFileTransition:(NSURL *)arg1 ;
-(void)setTrimTransitionTone:(double)arg1 ;
-(void)setPreviousSkipGoesToPreviousTrackDelta:(double)arg1 ;
-(BOOL)add:(id)arg1 announcementID:(id)arg2 ;
-(BOOL)_insertAudioBetween;
-(BOOL)_add:(id)arg1 announcementID:(id)arg2 trackType:(long long)arg3 ;
-(BOOL)_addURL:(id)arg1 announcementID:(id)arg2 trackType:(long long)arg3 ;
-(NSURL *)audioFileAtStart;
-(NSURL *)audioFileTransition;
-(ANAudioSessionManager *)audioSessionManager;
-(void)setReadyToPlay:(BOOL)arg1 ;
-(BOOL)_playSync;
-(void)_stopSync;
-(void)stopInternalSync;
-(void)audioSessionMediaServicesLostHandler:(id)arg1 ;
-(void)audioSessionMediaServicesResetHandler:(id)arg1 ;
-(void)playerItemPlayedToEndHandler:(id)arg1 ;
-(void)setInterruptionStart:(double)arg1 ;
-(double)interruptionStart;
-(void)_resumePlaybackAfterInterruptionAtTimeInterval:(double)arg1 ;
-(void)setPlayerStartGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(double)silenceBetweenEachTrack;
-(double)trimStartTone;
-(double)trimTransitionTone;
@end

