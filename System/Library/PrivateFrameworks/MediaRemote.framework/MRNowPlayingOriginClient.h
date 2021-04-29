/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, MRApplicationActivity, MRDeviceInfo, MRClient, MROrigin, NSArray;

@interface MRNowPlayingOriginClient : NSObject <MRNowPlayingClientState> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _canBeNowPlayingApp;
	double _canBeNowPlayingAppTimestamp;
	BOOL _isOverrideApp;
	unsigned _routeDiscoveryMode;
	NSMutableArray* _applicationPickedRoutes;
	unsigned _inputMode;
	float _volume;
	unsigned _volumeCapabilities;
	MRApplicationActivity* _activity;
	MRDeviceInfo* _deviceInfo;
	/*^block*/id _playbackQueueCallback;
	/*^block*/id _playbackQueueTransactionCallback;
	/*^block*/id _capabilitiesCallback;
	/*^block*/id _commandCallback;
	/*^block*/id _beginLyricsEventCallback;
	/*^block*/id _endLyricsEventCallback;
	/*^block*/id _playbackSessionCallback;
	/*^block*/id _playbackSessionMigrateBeginCallback;
	/*^block*/id _playbackSessionMigrateEndCallback;
	/*^block*/id _playbackSessionMigrateRequestCallback;
	/*^block*/id _clientMessageCallback;
	NSMutableArray* _nowPlayingClients;
	unsigned _hardwareRemoteBehavior;
	MRClient* _activeNowPlayingClient;
	MROrigin* _origin;

}

@property (nonatomic,readonly) MROrigin * origin;                                 //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) BOOL canBeNowPlayingApp; 
@property (assign,nonatomic) BOOL isOverrideApp; 
@property (assign,nonatomic) unsigned hardwareRemoteBehavior;                     //@synthesize hardwareRemoteBehavior=_hardwareRemoteBehavior - In the implementation block
@property (assign,nonatomic) unsigned routeDiscoveryMode; 
@property (nonatomic,copy) NSArray * applicationPickedRoutes; 
@property (assign,nonatomic) unsigned inputMode; 
@property (assign,nonatomic) unsigned volumeCapabilities; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,retain) MRApplicationActivity * activity; 
@property (nonatomic,retain) MRDeviceInfo * deviceInfo; 
@property (nonatomic,copy) id playbackQueueCallback; 
@property (nonatomic,copy) id playbackQueueTransactionCallback; 
@property (nonatomic,copy) id commandCallback; 
@property (nonatomic,copy) id playbackSessionCallback; 
@property (nonatomic,copy) id playbackSessionMigrateBeginCallback; 
@property (nonatomic,copy) id playbackSessionMigrateEndCallback; 
@property (nonatomic,copy) id playbackSessionMigrateRequestCallback; 
@property (nonatomic,copy) id beginLyricsEventCallback; 
@property (nonatomic,copy) id endLyricsEventCallback; 
@property (nonatomic,copy) id clientMessageCallback; 
@property (nonatomic,retain) MRClient * activeNowPlayingClient;                   //@synthesize activeNowPlayingClient=_activeNowPlayingClient - In the implementation block
@property (nonatomic,readonly) NSArray * nowPlayingClients; 
-(id)description;
-(id)debugDescription;
-(void)dealloc;
-(MRApplicationActivity *)activity;
-(void)setActivity:(MRApplicationActivity *)arg1 ;
-(MROrigin *)origin;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(unsigned)inputMode;
-(void)setInputMode:(unsigned)arg1 ;
-(id)initWithOrigin:(id)arg1 ;
-(MRDeviceInfo *)deviceInfo;
-(void)setDeviceInfo:(MRDeviceInfo *)arg1 ;
-(void)setPlaybackSessionCallback:(id)arg1 ;
-(void)setPlaybackSessionMigrateBeginCallback:(id)arg1 ;
-(void)setPlaybackSessionMigrateEndCallback:(id)arg1 ;
-(void)setCanBeNowPlayingApp:(BOOL)arg1 ;
-(BOOL)isOverrideApp;
-(void)setIsOverrideApp:(BOOL)arg1 ;
-(void)setActiveNowPlayingClient:(MRClient *)arg1 ;
-(NSArray *)nowPlayingClients;
-(unsigned)volumeCapabilities;
-(void)setVolumeCapabilities:(unsigned)arg1 ;
-(void)setHardwareRemoteBehavior:(unsigned)arg1 ;
-(void)setCommandCallback:(id)arg1 ;
-(BOOL)canBeNowPlayingApp;
-(void)setPlaybackSessionMigrateRequestCallback:(id)arg1 ;
-(void)setClientMessageCallback:(id)arg1 ;
-(void)restoreNowPlayingClientState;
-(void)removeClient:(id)arg1 ;
-(void)setPlaybackQueueCallback:(id)arg1 ;
-(void)setPlaybackQueueTransactionCallback:(id)arg1 ;
-(id)playbackSessionCallback;
-(id)playbackSessionMigrateBeginCallback;
-(id)playbackSessionMigrateEndCallback;
-(id)playbackSessionMigrateRequestCallback;
-(id)clientMessageCallback;
-(id)endLyricsEventCallback;
-(id)beginLyricsEventCallback;
-(id)commandCallback;
-(id)playbackQueueTransactionCallback;
-(id)playbackQueueCallback;
-(void)setBeginLyricsEventCallback:(id)arg1 ;
-(void)setEndLyricsEventCallback:(id)arg1 ;
-(void)_registerMediaServerNotifications;
-(void)_unregisterMediaServerNotifications;
-(void)_avSessionMediaServicesResetNotification:(id)arg1 ;
-(NSArray *)applicationPickedRoutes;
-(void)setApplicationPickedRoutes:(NSArray *)arg1 ;
-(void)setRouteDiscoveryMode:(unsigned)arg1 ;
-(unsigned)routeDiscoveryMode;
-(MRClient *)activeNowPlayingClient;
-(id)existingNowPlayingClientForPlayerPath:(id)arg1 ;
-(id)nowPlayingClientForPlayerPath:(id)arg1 ;
-(unsigned)hardwareRemoteBehavior;
@end

