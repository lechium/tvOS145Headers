/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVPlayer, CADisplayLink;

@interface HBUIPlayerVolumeAnimator : NSObject {

	float _startVolume;
	float _endVolume;
	AVPlayer* _player;
	CADisplayLink* _displayLink;
	double _startTime;
	double _duration;

}

@property (nonatomic,readonly) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,readonly) double startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) float startVolume;                        //@synthesize startVolume=_startVolume - In the implementation block
@property (nonatomic,readonly) float endVolume;                          //@synthesize endVolume=_endVolume - In the implementation block
@property (nonatomic,readonly) double duration;                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) AVPlayer * player;                        //@synthesize player=_player - In the implementation block
-(void)invalidate;
-(double)startTime;
-(double)duration;
-(AVPlayer *)player;
-(id)initWithPlayer:(id)arg1 ;
-(void)setVolume:(float)arg1 ;
-(CADisplayLink *)displayLink;
-(void)_handleDisplayLink:(id)arg1 ;
-(void)setVolume:(float)arg1 animated:(BOOL)arg2 ;
-(float)startVolume;
-(float)endVolume;
@end

