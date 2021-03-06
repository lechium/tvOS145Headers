/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangePlaybackRateCommand : MPRemoteCommand {

	float _preferredRate;
	NSArray* _supportedPlaybackRates;

}

@property (nonatomic,copy) NSArray * supportedPlaybackRates;              //@synthesize supportedPlaybackRates=_supportedPlaybackRates - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setSupportedPlaybackRates:(NSArray *)arg1 ;
-(float)preferredRate;
-(void)setPreferredRate:(float)arg1 ;
-(id)newCommandEventWithPlaybackRate:(float)arg1 ;
-(NSArray *)supportedPlaybackRates;
@end

