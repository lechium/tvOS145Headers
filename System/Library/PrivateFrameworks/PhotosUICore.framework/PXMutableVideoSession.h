/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXMutableVideoSession <NSObject>
@property (assign,nonatomic) SCD_Struct_PX9 playbackTimeRange; 
@property (assign,nonatomic) BOOL seekToBeginningAtEnd; 
@property (assign,getter=isLoopingEnabled,nonatomic) BOOL loopingEnabled; 
@property (assign,nonatomic) long long desiredPlayState; 
@property (assign,nonatomic) BOOL preventsSleepDuringVideoPlayback; 
@property (assign,nonatomic) BOOL allowsExternalPlayback; 
@property (assign,nonatomic) BOOL shouldDisableAutomaticPixelBufferUpdates; 
@required
-(void)setLoopingEnabled:(BOOL)arg1;
-(void)setAllowsExternalPlayback:(BOOL)arg1;
-(BOOL)allowsExternalPlayback;
-(long long)desiredPlayState;
-(void)setDesiredPlayState:(long long)arg1;
-(void)setAudioSessionCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4;
-(BOOL)shouldDisableAutomaticPixelBufferUpdates;
-(void)setShouldDisableAutomaticPixelBufferUpdates:(BOOL)arg1;
-(void)setVolume:(float)arg1 withFade:(BOOL)arg2;
-(void)setPreventsSleepDuringVideoPlayback:(BOOL)arg1;
-(BOOL)preventsSleepDuringVideoPlayback;
-(BOOL)isLoopingEnabled;
-(SCD_Struct_PX9)playbackTimeRange;
-(void)setPlaybackTimeRange:(SCD_Struct_PX9)arg1;
-(BOOL)seekToBeginningAtEnd;
-(void)setSeekToBeginningAtEnd:(BOOL)arg1;

@end

