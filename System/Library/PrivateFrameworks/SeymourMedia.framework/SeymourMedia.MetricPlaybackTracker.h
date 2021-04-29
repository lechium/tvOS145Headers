/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourMedia.framework/SeymourMedia
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SeymourMedia.MetricPlaybackTracker : _UKNOWN_SUPERCLASS_ {

	 eventHub;
	 subscriptionToken;
	 networkEvaluator;
	 assetClient;
	 platform;
	 delegatedPlayback;
	 expectedWorkoutPlaybackPause;
	 musicIDStartPlaybackInfoMap;
	 seeking;
	 seekBeganOverallPosition;
	 seekBeganMusicTrackPosition;
	 seekBeganTimestamp;
	 onInvalidTransition;

}
-(void)handleAppWillResign;
-(void)handlePlaybackInterrupted;
@end
