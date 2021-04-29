/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/KronoServices.framework/KronoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, KSMediaControllerDelegate;
@class NSObject, HHEndpoint;

@interface KSMediaController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	HHEndpoint* _endpoint;
	id<KSMediaControllerDelegate> _delegate;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) HHEndpoint * endpoint;                                      //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,__weak,readonly) id<KSMediaControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<KSMediaControllerDelegate>)delegate;
-(HHEndpoint *)endpoint;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithEndpoint:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)stopMediaWithFade:(BOOL)arg1 ;
-(void)startMediaForItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pauseMedia;
-(void)_startMediaForItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_pauseMedia;
-(void)_stopMediaWithFade:(BOOL)arg1 ;
-(void)_mediaRemotePause;
-(void)_setVolumeForItem:(id)arg1 ;
-(void)_mediaRemotePlay:(/*^block*/id)arg1 ;
-(void)_mpc_sendPlaybackArchive:(id)arg1 toDestination:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_mediaRemoteRouting_resolveDestination:(/*^block*/id)arg1 ;
-(void)_mediaRemoteIsPlaying:(/*^block*/id)arg1 ;
-(void)_delegateRequestVolumeCategory:(id)arg1 level:(id)arg2 ;
-(void)_mediaRemoteStop;
-(id)_mediaRemoteCommandOptions;
-(void)_mediaRemoteRouting_localReceiverPairingIdentity:(/*^block*/id)arg1 ;
-(BOOL)_mpc_isValidMPCStatus:(id)arg1 ;
@end

