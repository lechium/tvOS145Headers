/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class MPCPlaybackEngine, MPAVItem, MPQueuePlayer;


@protocol MPCPlaybackEngineImplementation <NSObject>
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine; 
@property (nonatomic,retain) id<MPAVQueueController> queueController; 
@property (nonatomic,readonly) MPAVItem * currentItem; 
@property (nonatomic,readonly) MPQueuePlayer * queuePlayer; 
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) float currentRate; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) long long stateBeforeInterruption; 
@property (assign,nonatomic) BOOL hasPlayedSuccessfully; 
@property (assign,nonatomic) BOOL autoPlayWhenLikelyToKeepUp; 
@property (assign,nonatomic) long long actionAtQueueEnd; 
@property (getter=isReloadingPlaybackContext,nonatomic,readonly) BOOL reloadingPlaybackContext; 
@optional
-(void)pause;
-(void)setCurrentTime:(double)arg1;
-(void)play;
-(void)endSeek;
-(void)beginSeek:(int)arg1;
-(BOOL)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 force:(BOOL)arg4 error:(id*)arg5;
-(void)endPlayback;
-(void)pauseWithFadeout:(float)arg1;
-(void)playWithOptions:(unsigned long long)arg1;
-(void)togglePlayback;
-(BOOL)setRate:(float)arg1 completion:(/*^block*/id)arg2;
-(void)setQueueWithPlaybackContext:(id)arg1 identifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)skipWithDirection:(long long)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)endPlaybackWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)playWithRate:(float)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)pauseWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)beginScanningWithDirection:(long long)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)endScanningWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setRate:(float)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)beginUsingVideoLayer;
-(void)endUsingVideoLayer;
-(void)pauseWithFadeout:(double)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)togglePlaybackWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)skipWithDirectionShouldJumpToItemStart:(long long)arg1;
-(void)jumpToTime:(double)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(long long)state;
-(MPAVItem *)currentItem;
-(double)currentTime;
-(void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1;
-(BOOL)autoPlayWhenLikelyToKeepUp;
-(BOOL)becomeActiveWithError:(id*)arg1;
-(void)loadSessionWithQueueController:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(MPQueuePlayer *)queuePlayer;
-(id<MPAVQueueController>)queueController;
-(long long)stateBeforeInterruption;
-(MPCPlaybackEngine *)playbackEngine;
-(void)updateAudioSession;
-(id)initWithPlaybackEngine:(id)arg1;
-(void)reloadWithPlaybackContext:(id)arg1 identifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)replaceCurrentItemWithPlaybackContext:(id)arg1 identifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setQueueController:(id)arg1;
-(float)currentRate;
-(BOOL)hasPlayedSuccessfully;
-(void)setHasPlayedSuccessfully:(BOOL)arg1;
-(long long)actionAtQueueEnd;
-(void)setActionAtQueueEnd:(long long)arg1;
-(BOOL)isReloadingPlaybackContext;

@end

