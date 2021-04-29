/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVPMusicNowPlayingViewDelegate <NSObject>
@required
-(void)nowPlayingView:(id)arg1 playlistWillBecomeVisibleWithExecutionBlock:(/*^block*/id)arg2;
-(void)nowPlayingView:(id)arg1 playlistWillBecomeHiddenWithExecutionBlock:(/*^block*/id)arg2;
-(void)nowPlayingViewPlaylistDidBecomeHidden:(id)arg1;
-(void)nowPlayingViewDidSelectRepeat:(id)arg1;
-(void)nowPlayingViewDidSelectShuffle:(id)arg1;
-(BOOL)nowPlayingViewShouldHandlePressPlayPause:(id)arg1;
-(void)nowPlayingViewDidPressPlayPause:(id)arg1;
-(id)nothingPlayingArtworkForNowPlayingView:(id)arg1;
-(id)focusIndexPathForNowPlayingView:(id)arg1;

@end
