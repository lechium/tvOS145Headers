/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDMediaProfile.h>

@interface HMDHAPMediaProfile : HMDMediaProfile
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)registerForNotifications;
-(unsigned long long)capability;
-(void)handleAccessoryConnected:(id)arg1 ;
-(BOOL)_updatePlayback:(id)arg1 ;
-(BOOL)_updateRefreshPlayback:(id)arg1 ;
-(void)handleCharacteristicsUpdated:(id)arg1 ;
-(void)_handleCharacteristicChanges:(id)arg1 ;
-(BOOL)_updateAudioControl:(id)arg1 ;
-(void)handleHomeCharacteristicValuesChanged:(id)arg1 ;
-(id)_smartSpeakerService;
-(id)_smartSpeakerTargetMediaStateWriteRequestWithPlaybackState:(id)arg1 ;
-(id)_smartSpeakerTargetMediaStateCharacteristic;
-(id)_smartSpeakerCurrentMediaStateCharacteristic;
-(id)_smartSpeakerVolumeCharacteristic;
-(id)_smartSpeakerVolumeWriteRequestWithVolumePercentage:(id)arg1 ;
-(id)_smartSpeakerMutedCharacteristic;
-(id)_smartSpeakerCurrentMediaStateReadRequest;
-(id)_smartSpeakerVolumeReadRequest;
-(id)_smartSpeakerMutedReadRequest;
-(void)_updateCurrentMediaState:(id)arg1 volumePercentage:(id)arg2 muted:(id)arg3 enable:(id)arg4 message:(id)arg5 ;
-(void)_updateCharacteristicChanges;
-(id)_smartSpeakerMutedWriteRequestWithMuted:(id)arg1 ;
-(id)_mediaSessionStateFromProfile;
-(id)initWithMediaServices:(id)arg1 ;
-(id)playStateWriteRequestWithPlaybackState:(long long)arg1 ;
-(id)volumeWriteRequestWithVolumePercentage:(id)arg1 ;
@end

