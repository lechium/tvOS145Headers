/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SoundScapesKit.framework/SoundScapesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, AVQueuePlayer, AVPlayerItem, AVPlayerLooper, NSArray;

@interface SSPlaybackEngine : NSObject {

	NSString* _lastPlayedAsset;
	AVQueuePlayer* _audioScapesPlayer;
	AVPlayerItem* _playerItem;
	AVPlayerLooper* _avPlayerLooper;
	NSArray* _songs;

}

@property (retain) AVQueuePlayer * audioScapesPlayer;               //@synthesize audioScapesPlayer=_audioScapesPlayer - In the implementation block
@property (retain) AVPlayerItem * playerItem;                       //@synthesize playerItem=_playerItem - In the implementation block
@property (retain) AVPlayerLooper * avPlayerLooper;                 //@synthesize avPlayerLooper=_avPlayerLooper - In the implementation block
@property (retain) NSArray * songs;                                 //@synthesize songs=_songs - In the implementation block
@property (nonatomic,copy) NSString * lastPlayedAsset;              //@synthesize lastPlayedAsset=_lastPlayedAsset - In the implementation block
-(id)description;
-(id)init;
-(void)resume;
-(void)stop;
-(void)pause;
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(void)play:(id)arg1 ;
-(NSArray *)songs;
-(void)setSongs:(NSArray *)arg1 ;
-(NSString *)lastPlayedAsset;
-(void)setLastPlayedAsset:(NSString *)arg1 ;
-(AVQueuePlayer *)audioScapesPlayer;
-(void)setAudioScapesPlayer:(AVQueuePlayer *)arg1 ;
-(AVPlayerLooper *)avPlayerLooper;
-(void)setAvPlayerLooper:(AVPlayerLooper *)arg1 ;
@end

