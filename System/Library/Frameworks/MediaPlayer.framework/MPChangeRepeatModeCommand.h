/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangeRepeatModeCommand : MPRemoteCommand {

	NSArray* _supportedRepeatTypes;
	long long _currentRepeatType;

}

@property (assign,nonatomic) long long currentRepeatType;              //@synthesize currentRepeatType=_currentRepeatType - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setCurrentRepeatType:(long long)arg1 ;
-(void)setSupportedRepeatTypes:(id)arg1 ;
-(id)newCommandEventWithType:(long long)arg1 ;
-(id)newCommandEventWithType:(long long)arg1 preservesRepeatMode:(BOOL)arg2 ;
-(long long)currentRepeatType;
@end

