/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ANPlaybackManagerDelegate <NSObject>
@required
-(void)playbackManager:(id)arg1 didUpdatePlaybackState:(unsigned long long)arg2;
-(void)playbackManager:(id)arg1 didStartPlayingAnnouncementsAtMachAbsoluteTime:(unsigned long long)arg2;
-(void)playbackManagerDidFinishPlayingAnnouncements:(id)arg1;
-(void)playbackManager:(id)arg1 didStartPlayingAnnouncement:(id)arg2;
-(void)playbackManager:(id)arg1 didFinishPlayingAnnouncement:(id)arg2 withOptions:(unsigned long long)arg3;

@end

