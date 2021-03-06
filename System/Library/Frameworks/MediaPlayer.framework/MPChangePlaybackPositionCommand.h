/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPChangePlaybackPositionCommand : MPRemoteCommand {

	BOOL _canBeControlledByScrubbing;

}

@property (assign,nonatomic) BOOL canBeControlledByScrubbing;              //@synthesize canBeControlledByScrubbing=_canBeControlledByScrubbing - In the implementation block
-(id)initWithMediaRemoteCommandType:(unsigned)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(void)setCanBeControlledByScrubbing:(BOOL)arg1 ;
-(id)newCommandEventWithPositionTime:(double)arg1 ;
-(BOOL)canBeControlledByScrubbing;
@end

