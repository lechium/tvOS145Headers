/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreSpeechFoundation/CoreSpeechFoundation-Structs.h>
@interface CSFPreferences : NSObject
+(id)sharedPreferences;
-(BOOL)voiceTriggerEnabled;
-(double)audioSessionActivationDelay;
-(BOOL)fileLoggingIsEnabled;
-(void)setFileLoggingIsEnabled:(BOOL)arg1 ;
-(BOOL)isMultiPhraseVTEnabled;
-(BOOL)_storeModeEnabled;
-(void)setFileLoggingLevel:(id)arg1 ;
-(id)fileLoggingLevel;
-(BOOL)phraseSpotterEnabled;
-(BOOL)secondPassAudioLoggingEnabled;
-(id)audioInjectionFilePath;
-(BOOL)useSiriActivationSPIForwatchOS;
-(id)assistantAudioFileLogDirectory;
-(BOOL)isAdBlockerAudioLoggingEnabled;
-(id)voiceTriggerAudioLogDirectory;
-(unsigned long long)maxNumGradingFiles;
-(unsigned long long)maxNumLoggingFiles;
-(BOOL)isAttentiveSiriAudioLoggingEnabled;
-(id)assistantLogDirectory;
-(BOOL)shouldOverwriteRemoteVADScore;
-(float)overwritingRemoteVADScore;
-(BOOL)opportuneSpeakListenerBypassEnabled;
-(BOOL)jarvisAudioLoggingEnabled;
-(id)myriadHashFilePath;
-(BOOL)programmableAudioInjectionEnabled;
-(BOOL)twoShotNotificationEnabled;
-(id)baseDir;
-(BOOL)isPHSSupported;
-(BOOL)isAttentiveSiriEnabled;
-(id)getStartOfSpeechAudioLogFilePath;
-(void)setAudioInjectionFilePath:(id)arg1 ;
-(BOOL)enableAudioInjection:(BOOL)arg1 ;
-(BOOL)useSiriActivationSPIForHomePod;
-(id)trialBaseAssetDirectory;
-(BOOL)smartSiriVolumeContextAwareEnabled;
-(BOOL)isSelfTriggerFileLoggingEnabled;
-(BOOL)forceVoiceTriggerAPMode;
-(BOOL)myriadFileLoggingEnabled;
-(BOOL)companionSyncVoiceTriggerUtterancesEnabled;
-(BOOL)smartSiriVolumeSoftVolumeEnabled;
-(BOOL)smartSiriVolumeContextAwareLoggingEnabled;
-(id)getSSVLogFilePathWithSessionIdentifier:(id)arg1 ;
-(id)ssvLogDirectory;
-(BOOL)bypassPersonalizedHeySiri;
-(void)setHearstFirstPassModelVersion:(id)arg1 ;
-(void)setHearstSecondPassModelVersion:(id)arg1 ;
-(id)fakeHearstModelPath;
-(BOOL)audioInjectionEnabled;
-(BOOL)isStaggeredCATDownloadEnabled;
-(BOOL)enableProgrammableAudioInjection:(BOOL)arg1 ;
-(id)myriadHashDirectory;
-(id)interstitialRelativeDirForLevel:(long long)arg1 ;
-(BOOL)enableAudioInjection:(BOOL)arg1 withKey:(CFStringRef)arg2 ;
-(BOOL)audioInjectionEnabledWithKey:(CFStringRef)arg1 ;
-(id)getCatAdBlockerAssetUpdateDirectory;
-(BOOL)speakerRecognitionAudioLoggingEnabled;
-(void)setJarvisTriggerMode:(long long)arg1 ;
-(long long)getJarvisTriggerMode;
-(BOOL)startOfSpeechAudioLoggingEnabled;
-(BOOL)forceVoiceTriggerAOPMode;
-(BOOL)_isDirectory:(id)arg1 ;
-(double)remoteVoiceTriggerDelayTime;
-(double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)arg1 ;
-(id)interstitialAbsoluteDirForLevel:(long long)arg1 ;
-(BOOL)_isRemoteVoiceTriggerAvailable;
-(BOOL)isSpeakerRecognitionAvailable;
-(unsigned long long)speakerIdScoreReportingType;
-(BOOL)isMultiChannelAudioLoggingEnabled;
@end

