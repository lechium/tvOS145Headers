/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVAudioDeviceList;

@interface AVAudioClient : NSObject {

	AVAudioDeviceList* deviceList;

}

@property (nonatomic,retain) AVAudioDeviceList * deviceList; 
@property (assign,nonatomic) id changeListener; 
+(id)currentInputDevice;
+(id)currentOutputDevice;
+(BOOL)hasActiveAudioSession;
+(BOOL)isMicrophoneMuted;
+(void)setMicrophoneMuted:(BOOL)arg1 ;
+(void)stopAudioSession;
+(void)setAudioSessionProperties:(id)arg1 ;
+(void)startAudioSession;
+(void)startAudioSessionWithCompletionHandler:(/*^block*/id)arg1 ;
+(BOOL)setInputDevice:(id)arg1 ;
+(BOOL)setOutputDevice:(id)arg1 ;
+(void)registerBlocksForNotifications;
+(id)defaultInputDevice;
+(id)defaultOutputDevice;
+(void)initializeAudioSessionQ;
+(void)resetAudioSessionOutputPortOverride;
+(void)registerSecureMicrophoneEngagedHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)devices;
-(id)outputDevices;
-(id)inputDevices;
-(AVAudioDeviceList *)deviceList;
-(void)setChangeListener:(id)arg1 ;
-(id)changeListener;
-(void)setDeviceList:(AVAudioDeviceList *)arg1 ;
@end

