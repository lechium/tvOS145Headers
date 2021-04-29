/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SoundScapesKit.framework/SoundScapesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface SSPlayStateManager : NSObject {

	NSObject*<OS_dispatch_queue> _MRQueue;
	NSMutableSet* _playStateDelegates;
	BOOL _nowPlayingApplication;
	unsigned long long _playbackState;

}

@property (assign,getter=getCurrentPlaybackState,nonatomic) unsigned long long playbackState;              //@synthesize playbackState=_playbackState - In the implementation block
@property (getter=isNowPlayingApplication,nonatomic,readonly) BOOL nowPlayingApplication;                  //@synthesize nowPlayingApplication=_nowPlayingApplication - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setPlaybackState:(unsigned long long)arg1 ;
-(void)_nowPlayingApplicationDidChange:(id)arg1 ;
-(BOOL)isNowPlayingApplication;
-(void)registerPlaybackStateChangedDelegate:(id)arg1 ;
-(void)unregisterPlaybackStateChangedDelegate:(id)arg1 ;
-(unsigned long long)getCurrentPlaybackState;
-(id)contentPlaybackStateToString:(unsigned long long)arg1 ;
@end
