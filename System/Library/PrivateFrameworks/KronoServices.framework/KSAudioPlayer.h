/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/KronoServices.framework/KronoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, KSAudioPlayerDelegate;
@class NSObject, HHEndpoint, KSAssetProvider, NSMutableArray, NSOperationQueue, AVAudioSession, AVQueuePlayer, AVPlayerItem, KSSiriTTSAnnouncer;

@interface KSAudioPlayer : NSObject {

	BOOL _playing;
	BOOL _audioSessionActive;
	BOOL _tonePlayerQueuedSiriTTS;
	NSObject*<OS_dispatch_queue> _queue;
	HHEndpoint* _endpoint;
	id<KSAudioPlayerDelegate> _delegate;
	unsigned long long _mode;
	unsigned long long _currentMediaType;
	unsigned long long _nextMediaType;
	KSAssetProvider* _assetProvider;
	NSMutableArray* _observers;
	NSOperationQueue* _observerQueue;
	AVAudioSession* _audioSession;
	AVQueuePlayer* _tonePlayer;
	AVPlayerItem* _tonePlayerItem;
	unsigned long long _tonePlaybackCount;
	KSSiriTTSAnnouncer* _siriTTS;

}

@property (assign,nonatomic) unsigned long long currentMediaType;                              //@synthesize currentMediaType=_currentMediaType - In the implementation block
@property (assign,nonatomic) unsigned long long nextMediaType;                                 //@synthesize nextMediaType=_nextMediaType - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                                    //@synthesize playing=_playing - In the implementation block
@property (assign,getter=isAudioSessionActive,nonatomic) BOOL audioSessionActive;              //@synthesize audioSessionActive=_audioSessionActive - In the implementation block
@property (nonatomic,readonly) KSAssetProvider * assetProvider;                                //@synthesize assetProvider=_assetProvider - In the implementation block
@property (nonatomic,readonly) NSMutableArray * observers;                                     //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * observerQueue;                               //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,retain) AVAudioSession * audioSession;                                    //@synthesize audioSession=_audioSession - In the implementation block
@property (nonatomic,retain) AVQueuePlayer * tonePlayer;                                       //@synthesize tonePlayer=_tonePlayer - In the implementation block
@property (nonatomic,retain) AVPlayerItem * tonePlayerItem;                                    //@synthesize tonePlayerItem=_tonePlayerItem - In the implementation block
@property (assign,nonatomic) unsigned long long tonePlaybackCount;                             //@synthesize tonePlaybackCount=_tonePlaybackCount - In the implementation block
@property (assign,nonatomic) BOOL tonePlayerQueuedSiriTTS;                                     //@synthesize tonePlayerQueuedSiriTTS=_tonePlayerQueuedSiriTTS - In the implementation block
@property (nonatomic,readonly) KSSiriTTSAnnouncer * siriTTS;                                   //@synthesize siriTTS=_siriTTS - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) HHEndpoint * endpoint;                                          //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,__weak,readonly) id<KSAudioPlayerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                          //@synthesize mode=_mode - In the implementation block
-(void)dealloc;
-(id<KSAudioPlayerDelegate>)delegate;
-(void)setMode:(unsigned long long)arg1 ;
-(void)start;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(HHEndpoint *)endpoint;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned long long)mode;
-(NSMutableArray *)observers;
-(BOOL)isPlaying;
-(BOOL)isAudioSessionActive;
-(AVAudioSession *)audioSession;
-(void)setAudioSession:(AVAudioSession *)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(NSOperationQueue *)observerQueue;
-(KSAssetProvider *)assetProvider;
-(id)initWithEndpoint:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(unsigned long long)currentMediaType;
-(void)_delegateRequestVolumeCategory:(id)arg1 level:(id)arg2 ;
-(void)_audioSessionInit;
-(void)_observersRegister;
-(void)_observersUnregister;
-(void)_playerStart;
-(void)_playerStop;
-(void)_playerUpdateMode:(unsigned long long)arg1 ;
-(BOOL)_modeRequiresAudioSessionActivation;
-(void)_audioSessionActivate;
-(void)_playerStartInternal;
-(void)_delegateCommitMediaTypeUpdate;
-(void)_playerStopInternal;
-(void)_audioSessionDeactivate;
-(BOOL)_modeRequiresTonePlayer;
-(void)_tonePlayerSetVolume;
-(void)_tonePlayerStart;
-(void)_tonePlayerStop;
-(void)_siriTTSStop;
-(void)_tonePlayerUnconfigure;
-(void)_tonePlayerConfigure;
-(void)setAudioSessionActive:(BOOL)arg1 ;
-(void)_audioSessionConfigure;
-(void)setTonePlaybackCount:(unsigned long long)arg1 ;
-(void)setTonePlayerQueuedSiriTTS:(BOOL)arg1 ;
-(id)_tonePlayerAsset;
-(void)setTonePlayerItem:(AVPlayerItem *)arg1 ;
-(AVQueuePlayer *)tonePlayer;
-(AVPlayerItem *)tonePlayerItem;
-(void)_tonePlayerAppendToneToQueue;
-(void)_tonePlayerEventOccurred;
-(unsigned long long)nextMediaType;
-(void)setNextMediaType:(unsigned long long)arg1 ;
-(void)_tonePlayerReset;
-(BOOL)tonePlayerQueuedSiriTTS;
-(void)_siriTTSStart;
-(unsigned long long)tonePlaybackCount;
-(BOOL)_siriTTSNeeded;
-(KSSiriTTSAnnouncer *)siriTTS;
-(void)_siriTTSFinished;
-(void)_observerFiredMediaServicesReset;
-(void)setCurrentMediaType:(unsigned long long)arg1 ;
-(void)setTonePlayer:(AVQueuePlayer *)arg1 ;
@end

