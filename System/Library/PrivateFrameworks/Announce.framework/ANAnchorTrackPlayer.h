/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Announce/Announce-Structs.h>
#import <Announce/ANTrackPlayer.h>

@interface ANAnchorTrackPlayer : ANTrackPlayer {

	SCD_Struct_AN0 _startTime;

}

@property (assign,nonatomic) SCD_Struct_AN0 startTime;              //@synthesize startTime=_startTime - In the implementation block
-(SCD_Struct_AN0)startTime;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setStartTime:(SCD_Struct_AN0)arg1 ;
-(BOOL)playInternalSync;
-(id)whatIsPlaying;
-(void)nextInternalSync;
-(void)previousInternalSync;
-(void)handleInterruptionDelay:(double)arg1 ;
@end

