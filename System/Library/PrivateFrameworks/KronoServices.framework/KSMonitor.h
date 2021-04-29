/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/KronoServices.framework/KronoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, KSMonitorDelegate, OS_dispatch_source;
@class HHEndpoint, NSObject;

@interface KSMonitor : NSObject {

	HHEndpoint* _endpoint;
	NSObject*<OS_dispatch_queue> _queue;
	id<KSMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_source> _inactiveTimerCleanupTimer;
	NSObject*<OS_dispatch_source> _stoppedTimerCleanupTimer;
	NSObject*<OS_dispatch_source> _playbackTimeoutTimer;
	NSObject*<OS_dispatch_source> _musicAlarmDismissTimer;
	NSObject*<OS_dispatch_source> _musicAlarmPlaybackStartedTimeoutTimer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> inactiveTimerCleanupTimer;                          //@synthesize inactiveTimerCleanupTimer=_inactiveTimerCleanupTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> stoppedTimerCleanupTimer;                           //@synthesize stoppedTimerCleanupTimer=_stoppedTimerCleanupTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> playbackTimeoutTimer;                               //@synthesize playbackTimeoutTimer=_playbackTimeoutTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> musicAlarmDismissTimer;                             //@synthesize musicAlarmDismissTimer=_musicAlarmDismissTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> musicAlarmPlaybackStartedTimeoutTimer;              //@synthesize musicAlarmPlaybackStartedTimeoutTimer=_musicAlarmPlaybackStartedTimeoutTimer - In the implementation block
@property (nonatomic,readonly) HHEndpoint * endpoint;                                                          //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,__weak,readonly) id<KSMonitorDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
+(id)monitorWithEndpoint:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(id<KSMonitorDelegate>)delegate;
-(HHEndpoint *)endpoint;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithEndpoint:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)itemDismissed:(id)arg1 ;
-(void)informDelegateCleanupInactiveTimers;
-(NSObject*<OS_dispatch_source>)stoppedTimerCleanupTimer;
-(void)setStoppedTimerCleanupTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)informDelegateCleanupStoppedTimers;
-(NSObject*<OS_dispatch_source>)playbackTimeoutTimer;
-(void)setPlaybackTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)informDelegatePlaybackTimeout;
-(void)touchStoppedTimerCleanupTimer;
-(void)touchPlaybackTimeoutTimer;
-(NSObject*<OS_dispatch_source>)musicAlarmPlaybackStartedTimeoutTimer;
-(void)setMusicAlarmPlaybackStartedTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)stopMonitoringForMusicAlarmOnQueue;
-(void)setMusicAlarmDismissTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)informDelegateDimissCurrentMusicAlarm;
-(void)informDelegateCurrentMusicAlarmShouldFallbackToTone;
-(void)dismissMusicAlarmPlaybackTimeoutTimer;
-(void)_addMRNotificationHandler;
-(NSObject*<OS_dispatch_source>)musicAlarmDismissTimer;
-(void)_removeMRNotificationHandler;
-(void)startMonitoringForMusicAlarmOnQueue;
-(void)_nowPlayingIsPlayingChanged:(id)arg1 ;
-(void)toneItemFired:(id)arg1 ;
-(void)musicAlarmFired;
-(void)musicAlarmDidFallbackToTone;
-(void)musicAlarmSnoozed;
-(NSObject*<OS_dispatch_source>)inactiveTimerCleanupTimer;
-(void)setInactiveTimerCleanupTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

