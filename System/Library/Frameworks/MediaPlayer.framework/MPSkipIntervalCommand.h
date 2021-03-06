/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPSkipIntervalCommand : MPRemoteCommand {

	NSArray* _preferredIntervals;

}

@property (nonatomic,copy) NSArray * preferredIntervals;              //@synthesize preferredIntervals=_preferredIntervals - In the implementation block
-(id)initWithMediaRemoteCommandType:(unsigned)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(void)setPreferredIntervals:(NSArray *)arg1 ;
-(id)newCommandEventWithInterval:(double)arg1 ;
-(NSArray *)preferredIntervals;
@end

