/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Podcasts/Podcasts-Structs.h>
#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@interface MTMPCAssistantGenericPlaybackQueue : MPCAssistantPlaybackQueue {

	MRSystemAppPlaybackQueueRef _playbackQueueRef;

}

@property (assign,nonatomic) MRSystemAppPlaybackQueueRef playbackQueueRef;              //@synthesize playbackQueueRef=_playbackQueueRef - In the implementation block
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 playbackQueueRef:(MRSystemAppPlaybackQueueRef)arg2 ;
-(id)initWithPlaybackQueueRef:(MRSystemAppPlaybackQueueRef)arg1 ;
-(MRSystemAppPlaybackQueueRef)playbackQueueRef;
-(void)setPlaybackQueueRef:(MRSystemAppPlaybackQueueRef)arg1 ;
@end
