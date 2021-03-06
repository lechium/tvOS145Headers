/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID, AVPlayer, AVAudioSession, AVPlayerItem;

@interface ANTonePlayer : NSObject {

	NSUUID* _endpointUUID;
	AVPlayer* _player;
	AVAudioSession* _audioSession;
	/*^block*/id _handler;
	AVPlayerItem* _playerItem;

}

@property (nonatomic,readonly) NSUUID * endpointUUID;                    //@synthesize endpointUUID=_endpointUUID - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                          //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVAudioSession * audioSession;              //@synthesize audioSession=_audioSession - In the implementation block
@property (nonatomic,copy) id handler;                                   //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                  //@synthesize playerItem=_playerItem - In the implementation block
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)_deactivateAudioSession;
-(AVAudioSession *)audioSession;
-(void)setAudioSession:(AVAudioSession *)arg1 ;
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(NSUUID *)endpointUUID;
-(id)initWithEndpointUUID:(id)arg1 ;
-(void)playFileURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_callHandler:(id)arg1 ;
-(void)_deregisterForNotificationsWithAudioSession:(id)arg1 ;
-(void)_playFileURL:(id)arg1 ;
-(BOOL)_activateAudioSessionForPlayer:(id)arg1 error:(id*)arg2 ;
-(void)_registerForNotificationsWithAudioSession:(id)arg1 ;
-(void)audioSessionInterruptionHandler:(id)arg1 ;
-(void)_handleFailure;
-(void)_handlePlayerItemPlayedToEnd:(id)arg1 ;
-(void)_handlePlayerItemFailedToPlayToEnd:(id)arg1 ;
-(void)_playSystemSoundWithFileURL:(id)arg1 ;
@end

