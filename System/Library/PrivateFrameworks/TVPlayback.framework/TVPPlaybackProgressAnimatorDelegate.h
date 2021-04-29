/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVPPlaybackProgressAnimatorDelegate <NSObject>
@optional
-(void)playbackProgressAnimator:(id)arg1 didPresentElapsedTime:(double)arg2;
-(void)playbackProgressAnimator:(id)arg1 didFinishAnimatingToElapsedTime:(double)arg2;
-(double)currentElapsedTimeForPlaybackProgressAnimator:(id)arg1;

@required
-(void)playbackProgressAnimator:(id)arg1 updateTitlesForElapsedTime:(double)arg2 withPlaybackDuration:(double)arg3;

@end

