/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol MPVolumeControllerDataSource <NSObject>
@property (assign,nonatomic,__weak) id<MPVolumeControllerDataSourceDelegate> delegate; 
@property (nonatomic,readonly) BOOL applicationShouldOverrideHardwareVolumeBehavior; 
@property (nonatomic,copy,readonly) NSString * volumeControlLabel; 
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable; 
@property (assign,nonatomic) float volume; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (nonatomic,readonly) BOOL volumeWarningEnabled; 
@property (nonatomic,readonly) long long volumeWarningState; 
@property (nonatomic,readonly) float EUVolumeLimit; 
@optional
-(void)beginIncreasingRelativeVolume;
-(void)endIncreasingRelativeVolume;
-(void)beginDecreasingRelativeVolume;
-(void)endDecreasingRelativeVolume;
-(void)reloadWarning;

@required
-(id<MPVolumeControllerDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)reload;
-(float)volume;
-(void)setVolume:(float)arg1;
-(void)setMuted:(BOOL)arg1;
-(BOOL)isMuted;
-(BOOL)isVolumeControlAvailable;
-(NSString *)volumeControlLabel;
-(void)adjustVolumeValue:(float)arg1;
-(void)getVolumeValueWithCompletion:(/*^block*/id)arg1;
-(BOOL)volumeWarningEnabled;
-(long long)volumeWarningState;
-(float)EUVolumeLimit;
-(void)initializeVolume;
-(BOOL)applicationShouldOverrideHardwareVolumeBehavior;

@end

