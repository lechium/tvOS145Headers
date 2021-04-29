/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ANLocalPlaybackSessionDelegate <ANAnnounceClientDelegate>
@optional
-(void)sessionInterrupted:(id)arg1;
-(void)sessionInvalidated:(id)arg1;
-(void)session:(id)arg1 willStartPlayingAtMachTime:(unsigned long long)arg2;
-(void)session:(id)arg1 didUpdatePlaybackState:(unsigned long long)arg2;
-(void)session:(id)arg1 didReceiveAnnouncement:(id)arg2;
-(void)announcementsWillStartPlaying:(unsigned long long)arg1;
-(void)announcementsStateUpdate:(unsigned long long)arg1;

@end
