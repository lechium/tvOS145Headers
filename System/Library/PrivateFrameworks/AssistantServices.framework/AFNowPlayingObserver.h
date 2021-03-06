/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MRNowPlayingControllerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSHashTable, AFInstanceContext, MRNowPlayingController, NSString;

@interface AFNowPlayingObserver : NSObject <MRNowPlayingControllerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _playbackStateGroup;
	long long _playbackStateGroupDepth;
	long long _playbackState;
	NSHashTable* _listeners;
	AFInstanceContext* _instanceContext;
	MRNowPlayingController* _nowPlayingController;
	BOOL _isObserving;

}

@property (nonatomic,readonly) long long playbackState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultObserver;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(long long)playbackState;
-(void)controller:(id)arg1 didLoadResponse:(id)arg2 ;
-(void)controller:(id)arg1 playbackStateDidChangeFrom:(unsigned)arg2 to:(unsigned)arg3 ;
-(void)controller:(id)arg1 didFailWithError:(id)arg2 ;
-(void)controllerWillReloadForInvalidation:(id)arg1 ;
-(void)_beginGroup;
-(void)_startObservingNowPlayingAppPlaybackState;
-(void)_endGroup;
-(void)_fetchNowPlayingAppPlaybackStateForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithQueue:(id)arg1 instanceContext:(id)arg2 ;
-(void)_stopObservingNowPlayingAppPlaybackState;
-(void)_handleNowPlayingApplicationPlaybackStateChange:(long long)arg1 ;
-(void)nowPlayingApplicationPlaybackStateChanged:(id)arg1 ;
-(void)nowPlayingInfoDidChange:(id)arg1 ;
-(void)getPlaybackStateWithCompletion:(/*^block*/id)arg1 ;
-(void)getNowPlayingInfoWithCompletion:(/*^block*/id)arg1 ;
@end

