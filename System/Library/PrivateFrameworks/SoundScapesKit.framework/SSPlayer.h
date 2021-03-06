/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SoundScapesKit.framework/SoundScapesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoundScapesKit/SoundScapesProtocol.h>
#import <libobjc.A.dylib/SSPlaybackStateChanged.h>
#import <libobjc.A.dylib/SSMediaRemoteCommandHandlerDelegate.h>

@protocol OS_os_transaction, OS_dispatch_queue;
@class SSPlaybackEngine, SoundScapesXPCListener, NSObject, NSString, SSRemoteSetQueueManager, SSMediaRemoteManager, SSNowPlayingInfoManager, SSAssetLookup;

@interface SSPlayer : NSObject <SoundScapesProtocol, SSPlaybackStateChanged, SSMediaRemoteCommandHandlerDelegate> {

	SSPlaybackEngine* _audioSoundscapesPlayer;
	SoundScapesXPCListener* _xpcListener;
	NSObject*<OS_os_transaction> _transaction;
	NSObject*<OS_dispatch_queue> _MRQueue;
	BOOL _didReturnToStart;
	NSString* _startedSSWithTrack;
	SSRemoteSetQueueManager* _remoteSetQueueManager;
	SSMediaRemoteManager* _mrManager;
	SSNowPlayingInfoManager* _infoManager;
	SSAssetLookup* _assetLookup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_pause;
-(void)stopPlayback;
-(void)_handleLanguageChanged;
-(void)_setupNotificationHandlers;
-(void)_handleMediaServicesDied:(id)arg1 ;
-(void)_handleMediaServicesRestarted:(id)arg1 ;
-(void)_handleAudioSessionInterruption:(id)arg1 ;
-(void)nowPlayingApplicationChanged:(BOOL)arg1 ;
-(void)_initializeSoundScapesPlayerAndPlay;
-(void)handlePlayCommand;
-(void)playSoundScapesIntent:(id)arg1 ;
-(void)_setUpBeforePlay:(id)arg1 ;
-(void)handleStopCommand;
-(void)playAsset:(id)arg1 ;
-(void)handleNextTrackCommand;
-(void)handlePauseCommand;
-(void)_cleanupAudioObjects;
-(void)playSample;
-(void)playSynth;
-(void)sendPlaybackQueueWithMediaItem:(id)arg1 andPlaybackContext:(id)arg2 ;
-(void)queryDeviceAssetStatus:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setBinIntensityPlayInterval:(unsigned long long)arg1 ;
-(void)enableSynthDelay:(BOOL)arg1 ;
-(void)updateMediaAffinity:(id)arg1 withPlaybackContext:(id)arg2 ;
-(void)handleTogglePlayPauseCommand;
-(void)handlePreviousTrackCommand;
-(void)handleSetPlaybackQueueCommand:(id)arg1 ;
@end

