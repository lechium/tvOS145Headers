/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUserDefaults, NSString;

@interface VSSpeechInternalSettings : NSObject {

	NSUserDefaults* _internalDefaults;

}

@property (nonatomic,retain) NSUserDefaults * internalDefaults;              //@synthesize internalDefaults=_internalDefaults - In the implementation block
@property (assign,nonatomic) BOOL enableAudioDump; 
@property (assign,nonatomic) BOOL logSensitiveText; 
@property (assign,nonatomic) BOOL disableCache; 
@property (assign,nonatomic) BOOL disableAssetCleaning; 
@property (assign,nonatomic) BOOL allowAnyAssetSubscriber; 
@property (assign,nonatomic) BOOL enableLocalVoices; 
@property (assign,nonatomic) float defaultVolume; 
@property (assign,nonatomic) BOOL whisper; 
@property (assign,nonatomic) float serverTTSTimeout; 
@property (assign,nonatomic) BOOL disableDeviceRacing; 
@property (assign,nonatomic) BOOL forceServerTTS; 
@property (assign,nonatomic) BOOL disableServerTTS; 
@property (assign,nonatomic) BOOL disableInlineStreamTTS; 
@property (assign,nonatomic) BOOL disableOspreyStreaming; 
@property (assign,nonatomic) float streamBufferDuration; 
@property (assign,nonatomic) BOOL useBetaVoice; 
@property (nonatomic,copy) NSString * ospreyEndpointURL; 
@property (assign,nonatomic) BOOL simulateNetworkStall; 
@property (assign,nonatomic) BOOL disableDeviceNeuralTTS; 
@property (nonatomic,readonly) BOOL useSSMLInput; 
@property (nonatomic,readonly) BOOL disableMobileAssetURLReset; 
@property (assign,nonatomic) BOOL ignorePowerAndThermalState; 
+(id)standardInstance;
-(id)init;
-(BOOL)disableAssetCleaning;
-(BOOL)enableLocalVoices;
-(BOOL)useBetaVoice;
-(BOOL)disableDeviceNeuralTTS;
-(BOOL)enableAudioDump;
-(void)setEnableAudioDump:(BOOL)arg1 ;
-(BOOL)logSensitiveText;
-(void)setLogSensitiveText:(BOOL)arg1 ;
-(BOOL)disableCache;
-(void)setDisableCache:(BOOL)arg1 ;
-(void)setDisableAssetCleaning:(BOOL)arg1 ;
-(BOOL)allowAnyAssetSubscriber;
-(void)setAllowAnyAssetSubscriber:(BOOL)arg1 ;
-(void)setEnableLocalVoices:(BOOL)arg1 ;
-(BOOL)whisper;
-(void)setWhisper:(BOOL)arg1 ;
-(float)serverTTSTimeout;
-(void)setServerTTSTimeout:(float)arg1 ;
-(float)defaultVolume;
-(void)setDefaultVolume:(float)arg1 ;
-(BOOL)forceServerTTS;
-(void)setForceServerTTS:(BOOL)arg1 ;
-(BOOL)disableServerTTS;
-(void)setDisableServerTTS:(BOOL)arg1 ;
-(BOOL)disableInlineStreamTTS;
-(void)setDisableInlineStreamTTS:(BOOL)arg1 ;
-(BOOL)disableDeviceRacing;
-(void)setDisableDeviceRacing:(BOOL)arg1 ;
-(BOOL)disableOspreyStreaming;
-(void)setDisableOspreyStreaming:(BOOL)arg1 ;
-(float)streamBufferDuration;
-(void)setStreamBufferDuration:(float)arg1 ;
-(void)setUseBetaVoice:(BOOL)arg1 ;
-(NSString *)ospreyEndpointURL;
-(void)setOspreyEndpointURL:(NSString *)arg1 ;
-(BOOL)simulateNetworkStall;
-(void)setSimulateNetworkStall:(BOOL)arg1 ;
-(void)setDisableDeviceNeuralTTS:(BOOL)arg1 ;
-(BOOL)useSSMLInput;
-(BOOL)disableMobileAssetURLReset;
-(BOOL)ignorePowerAndThermalState;
-(void)setIgnorePowerAndThermalState:(BOOL)arg1 ;
-(NSUserDefaults *)internalDefaults;
-(void)setInternalDefaults:(NSUserDefaults *)arg1 ;
@end

