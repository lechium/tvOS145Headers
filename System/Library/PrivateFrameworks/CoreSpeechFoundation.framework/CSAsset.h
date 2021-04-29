/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString, NSArray;

@interface CSAsset : NSObject {

	NSDictionary* _decodedInfo;
	NSString* _path;
	NSString* _resourcePath;
	NSString* _configVersion;
	unsigned long long _assetProvider;

}

@property (nonatomic,readonly) unsigned long long SSVNoiseLevelChannelBitset; 
@property (nonatomic,readonly) unsigned long long SSVLKFSChannelBitset; 
@property (nonatomic,readonly) unsigned long long SSVDistanceChannelBitset; 
@property (nonatomic,readonly) unsigned SSVEnergyBufferSize; 
@property (nonatomic,readonly) unsigned SSVNoiseLowerPercentile; 
@property (nonatomic,readonly) unsigned SSVNoiseUpperPercentile; 
@property (nonatomic,readonly) unsigned SSVLKFSLowerPercentile; 
@property (nonatomic,readonly) unsigned SSVLKFSUpperPercentile; 
@property (nonatomic,readonly) float SSVNoiseTimeConstant; 
@property (nonatomic,readonly) float SSVNoiseMicSensitivityOffset; 
@property (nonatomic,readonly) float SSVNoiseMicSensitivityOffsetDeviceSimple; 
@property (nonatomic,readonly) float SSVLKFSTimeConstant; 
@property (nonatomic,readonly) float SSVLKFSMicSensitivityOffset; 
@property (nonatomic,readonly) float SSVNoiseTTSMappingInputRangeLow; 
@property (nonatomic,readonly) float SSVNoiseTTSMappingInputRangeHigh; 
@property (nonatomic,readonly) float SSVNoiseTTSMappingOutputRangeLow; 
@property (nonatomic,readonly) float SSVNoiseTTSMappingOutputRangeHigh; 
@property (nonatomic,readonly) float SSVLKFSTTSMappingInputRangeLow; 
@property (nonatomic,readonly) float SSVLKFSTTSMappingInputRangeHigh; 
@property (nonatomic,readonly) float SSVLKFSTTSMappingOutputRangeLow; 
@property (nonatomic,readonly) float SSVLKFSTTSMappingOutputRangeHigh; 
@property (nonatomic,readonly) float SSVUserOffsetInputRangeLow; 
@property (nonatomic,readonly) float SSVUserOffsetInputRangeHigh; 
@property (nonatomic,readonly) float SSVUserOffsetOutputRangeLow; 
@property (nonatomic,readonly) float SSVUserOffsetOutputRangeHigh; 
@property (nonatomic,readonly) float SSVTTSVolumeLowerLimitDB; 
@property (nonatomic,readonly) float SSVTTSVolumeUpperLimitDB; 
@property (nonatomic,readonly) float SSVNoiseWeight; 
@property (nonatomic,readonly) NSDictionary * SSVParameterDirectionary; 
@property (nonatomic,readonly) NSString * VTFirstPassConfigPathNDAPI; 
@property (nonatomic,readonly) float VTFirstPassThreshold; 
@property (nonatomic,readonly) float VTFirstPassDelaySecondsForChannelSelection; 
@property (nonatomic,readonly) float VTFirstPassMasterChannelScoreBoost; 
@property (nonatomic,readonly) float VTFirstPassProcessingChunkSeconds; 
@property (nonatomic,readonly) unsigned long long VTFirstPassProcessingChannelsBitset; 
@property (nonatomic,readonly) BOOL containsSpeakerRecognitionCategory; 
@property (nonatomic,readonly) float satScoreThreshold; 
@property (nonatomic,readonly) long long multiUserLowScoreThreshold; 
@property (nonatomic,readonly) long long multiUserHighScoreThreshold; 
@property (nonatomic,readonly) long long multiUserConfidentScoreThreshold; 
@property (nonatomic,readonly) long long multiUserDeltaScoreThreshold; 
@property (nonatomic,readonly) float psrCombinationWeight; 
@property (nonatomic,readonly) float satImplicitProfileThreshold; 
@property (nonatomic,readonly) float satImplicitProfileDeltaThreshold; 
@property (nonatomic,readonly) float satVTImplicitThreshold; 
@property (nonatomic,readonly) BOOL satImplicitTrainingEnabled; 
@property (nonatomic,readonly) float pruningExplicitUttThresholdSAT; 
@property (nonatomic,readonly) float pruningExplicitUttThresholdPSR; 
@property (nonatomic,readonly) float pruningThresholdSAT; 
@property (nonatomic,readonly) float pruningThresholdPSR; 
@property (nonatomic,readonly) unsigned long long pruningNumRetentionUtterance; 
@property (nonatomic,readonly) unsigned long long maxAllowedEnrollmentUtterances; 
@property (nonatomic,readonly) NSString * voiceProfilePruningCookie; 
@property (nonatomic,readonly) NSString * keywordDetectorNDAPIConfigFilePath; 
@property (nonatomic,readonly) NSString * keywordDetectorQuasarConfigFilePath; 
@property (nonatomic,readonly) NSString * keywordDetectorConfigPathRecognizer; 
@property (nonatomic,readonly) float keywordDetectorThreshold; 
@property (nonatomic,readonly) float keywordDetectorWaitTimeSinceVT; 
@property (nonatomic,readonly) NSString * progCheckerConfigFile; 
@property (nonatomic,readonly) unsigned long long supportedInputOrigins; 
@property (nonatomic,readonly) NSArray * checkerThresholds; 
@property (nonatomic,readonly) BOOL progCheckerShadowMode; 
@property (nonatomic,readonly) NSArray * languageDetectorSupportedLocale; 
@property (nonatomic,readonly) NSString * languageDetectorConfigFile; 
@property (nonatomic,readonly) NSString * startOfSpeechDetectorConfigFile; 
@property (nonatomic,readonly) NSString * spgConfigFile; 
@property (nonatomic,readonly) NSString * CVTConfigPathNDAPI; 
@property (nonatomic,readonly) float CVTThreshold; 
@property (nonatomic,readonly) float CVTTwoShotThreshold; 
@property (nonatomic,readonly) float CVTTwoShotDecisionWaitTime; 
@property (nonatomic,readonly) NSString * path;                                                     //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSString * resourcePath;                                             //@synthesize resourcePath=_resourcePath - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (nonatomic,readonly) NSString * hashFromResourcePath; 
@property (nonatomic,readonly) NSString * configVersion;                                            //@synthesize configVersion=_configVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long assetProvider;                                    //@synthesize assetProvider=_assetProvider - In the implementation block
+(unsigned)SSVDefaultNoiseChannelCount;
+(unsigned)SSVDefaultLKFSChannelCount;
+(unsigned)SSVDefaultDistanceChannelCount;
+(unsigned long long)getSSVDeviceType;
+(id)defaultFallBackAssetForVoiceTrigger;
+(id)assetForAssetType:(unsigned long long)arg1 resourcePath:(id)arg2 configVersion:(id)arg3 ;
+(id)decodeJson:(id)arg1 ;
+(id)fallBackAssetResourcePath;
+(id)defaultFallBackAssetForAdBlocker;
+(id)assetForAssetType:(unsigned long long)arg1 resourcePath:(id)arg2 configVersion:(id)arg3 assetProvider:(unsigned long long)arg4 ;
+(id)hybridEndpointerAssetFilename;
+(id)getConfigFileNameForAssetType:(unsigned long long)arg1 ;
+(id)defaultFallBackAssetForSmartSiriVolume;
+(id)defaultFallBackAssetForHearst;
+(unsigned long long)parseCompatibilityFromConfigVersion:(id)arg1 ;
+(BOOL)isLeftConfigVersion:(id)arg1 newerThanRightConfigVersion:(id)arg2 ;
-(id)RTModelWithFallbackLanguage:(id)arg1 ;
-(NSString *)VTFirstPassConfigPathNDAPI;
-(unsigned long long)SSVNoiseLevelChannelBitset;
-(unsigned long long)SSVLKFSChannelBitset;
-(unsigned)SSVEnergyBufferSize;
-(unsigned)SSVNoiseLowerPercentile;
-(unsigned)SSVNoiseUpperPercentile;
-(unsigned)SSVLKFSLowerPercentile;
-(unsigned)SSVLKFSUpperPercentile;
-(float)SSVNoiseTimeConstant;
-(float)SSVNoiseMicSensitivityOffset;
-(float)SSVLKFSTimeConstant;
-(float)SSVLKFSMicSensitivityOffset;
-(float)SSVNoiseTTSMappingInputRangeLow;
-(float)SSVNoiseTTSMappingInputRangeHigh;
-(float)SSVNoiseTTSMappingOutputRangeLow;
-(float)SSVNoiseTTSMappingOutputRangeHigh;
-(float)SSVLKFSTTSMappingInputRangeLow;
-(float)SSVLKFSTTSMappingInputRangeHigh;
-(float)SSVLKFSTTSMappingOutputRangeLow;
-(float)SSVLKFSTTSMappingOutputRangeHigh;
-(float)SSVUserOffsetInputRangeLow;
-(float)SSVUserOffsetInputRangeHigh;
-(float)SSVUserOffsetOutputRangeLow;
-(float)SSVUserOffsetOutputRangeHigh;
-(float)SSVTTSVolumeLowerLimitDB;
-(float)SSVTTSVolumeUpperLimitDB;
-(float)SSVNoiseWeight;
-(unsigned long long)SSVDistanceChannelBitset;
-(float)SSVNoiseMicSensitivityOffsetDeviceSimple;
-(NSDictionary *)SSVParameterDirectionary;
-(NSString *)CVTConfigPathNDAPI;
-(float)CVTThreshold;
-(float)CVTTwoShotDecisionWaitTime;
-(float)CVTTwoShotThreshold;
-(id)VTSecondPassCategoryForFirstPassSource:(unsigned long long)arg1 ;
-(float)VTSecondPassRemoteVADThresholdFrom:(id)arg1 ;
-(float)VTSecondPassRemoteVADMyriadThresholdFrom:(id)arg1 ;
-(float)VTSecondPassMinimumPhraseLengthForVADGating:(id)arg1 ;
-(NSArray *)languageDetectorSupportedLocale;
-(id)configFilepathForDictationOrigin:(unsigned long long)arg1 ;
-(id)_getCategoryKey;
-(float)VTFirstPassThreshold;
-(float)VTFirstPassDelaySecondsForChannelSelection;
-(float)VTFirstPassMasterChannelScoreBoost;
-(float)VTFirstPassProcessingChunkSeconds;
-(unsigned long long)VTFirstPassProcessingChannelsBitset;
-(id)createRTModelWithLocale:(id)arg1 ;
-(id)hearstRTModelWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 locale:(id)arg3 ;
-(id)_sha1:(id)arg1 ;
-(id)_sha256:(id)arg1 ;
-(id)rtModelWithAccessoryRTModelType:(long long)arg1 majorVersion:(unsigned long long)arg2 minorVersion:(unsigned long long)arg3 locale:(id)arg4 ;
-(id)localeMapWithName:(id)arg1 ;
-(id)hearstRTModelLocaleMap;
-(id)latestHearstRTModelForLocale:(id)arg1 ;
-(id)jarvisRTModelLocaleMap;
-(id)rtModelLocaleMapWithModelType:(long long)arg1 ;
-(id)VTSecondPassConfigPathNDAPIFrom:(id)arg1 ;
-(float)VTSecondPassThresholdFrom:(id)arg1 ;
-(float)VTSecondPass2ndChanceThresholdFrom:(id)arg1 ;
-(float)VTSecondPassLoggingThresholdFrom:(id)arg1 ;
-(float)VTSecondPassPreTriggerAudioTimeFrom:(id)arg1 ;
-(float)VTSecondPassAnalyzerPrependingAudioTimeFrom:(id)arg1 ;
-(float)VTSecondPassAnalyzerTrailingAudioTimeFrom:(id)arg1 ;
-(BOOL)VTSecondPassConfigPathRecognizerExistFrom:(id)arg1 ;
-(id)VTSecondPassConfigPathRecognizerFrom:(id)arg1 ;
-(BOOL)VTSecondPassUseKeywordSpottingFrom:(id)arg1 ;
-(float)VTSecondPassRecognizerThresholdOffsetFrom:(id)arg1 ;
-(float)VTSecondPassRecognizerScoreScaleFactorFrom:(id)arg1 ;
-(id)VTSecondPassRecognizerTokenFrom:(id)arg1 ;
-(float)VTSecondPassTwoShotFeedbackDelayFrom:(id)arg1 ;
-(float)VTSecondPassShadowMicScoreThresholdForVADGating:(id)arg1 ;
-(float)VTSecondPassRejectLoggingThresholdFrom:(id)arg1 ;
-(BOOL)assetsRequireSecondPass;
-(float)VTSecondPassPHSRejectLoggingThresholdFrom:(id)arg1 ;
-(float)VTSecondPassPHSThresholdFrom:(id)arg1 ;
-(id)supportedVTPhrasesInfoForCategory:(id)arg1 ;
-(id)ctcKwdToPhraseIdMapForCategory:(id)arg1 ;
-(NSString *)progCheckerConfigFile;
-(unsigned long long)supportedInputOrigins;
-(NSArray *)checkerThresholds;
-(BOOL)progCheckerShadowMode;
-(float)satScoreThreshold;
-(BOOL)containsSpeakerRecognitionCategory;
-(long long)multiUserLowScoreThreshold;
-(long long)multiUserHighScoreThreshold;
-(long long)multiUserConfidentScoreThreshold;
-(long long)multiUserDeltaScoreThreshold;
-(float)psrCombinationWeight;
-(float)satImplicitProfileThreshold;
-(float)satImplicitProfileDeltaThreshold;
-(float)satVTImplicitThreshold;
-(float)pruningExplicitUttThresholdSAT;
-(float)pruningExplicitUttThresholdPSR;
-(float)pruningThresholdSAT;
-(float)pruningThresholdPSR;
-(unsigned long long)pruningNumRetentionUtterance;
-(unsigned long long)maxAllowedEnrollmentUtterances;
-(NSString *)voiceProfilePruningCookie;
-(NSString *)keywordDetectorQuasarConfigFilePath;
-(NSString *)keywordDetectorNDAPIConfigFilePath;
-(BOOL)satImplicitTrainingEnabled;
-(float)keywordDetectorThreshold;
-(NSString *)keywordDetectorConfigPathRecognizer;
-(float)keywordDetectorWaitTimeSinceVT;
-(unsigned long long)_mapInputOriginFromAssetToCSAudioRecordType:(id)arg1 ;
-(NSString *)languageDetectorConfigFile;
-(NSString *)startOfSpeechDetectorConfigFile;
-(NSString *)spgConfigFile;
-(id)_getContinuousVoiceTriggerAssetCategory;
-(NSString *)CVTConfigPathNDAPI;
-(float)CVTThreshold;
-(float)CVTTwoShotDecisionWaitTime;
-(float)CVTTwoShotThreshold;
-(id)VTSecondPassCategoryForFirstPassSource:(unsigned long long)arg1 ;
-(float)VTSecondPassRemoteVADThresholdFrom:(id)arg1 ;
-(float)VTSecondPassRemoteVADMyriadThresholdFrom:(id)arg1 ;
-(float)VTSecondPassMinimumPhraseLengthForVADGating:(id)arg1 ;
-(id)VTSecondPassConfigPathNDAPIFrom:(id)arg1 ;
-(float)VTSecondPassThresholdFrom:(id)arg1 ;
-(float)VTSecondPass2ndChanceThresholdFrom:(id)arg1 ;
-(float)VTSecondPassLoggingThresholdFrom:(id)arg1 ;
-(float)VTSecondPassPreTriggerAudioTimeFrom:(id)arg1 ;
-(float)VTSecondPassAnalyzerPrependingAudioTimeFrom:(id)arg1 ;
-(float)VTSecondPassAnalyzerTrailingAudioTimeFrom:(id)arg1 ;
-(BOOL)VTSecondPassConfigPathRecognizerExistFrom:(id)arg1 ;
-(id)VTSecondPassConfigPathRecognizerFrom:(id)arg1 ;
-(BOOL)VTSecondPassUseKeywordSpottingFrom:(id)arg1 ;
-(float)VTSecondPassRecognizerThresholdOffsetFrom:(id)arg1 ;
-(float)VTSecondPassRecognizerScoreScaleFactorFrom:(id)arg1 ;
-(id)VTSecondPassRecognizerTokenFrom:(id)arg1 ;
-(float)VTSecondPassTwoShotFeedbackDelayFrom:(id)arg1 ;
-(float)VTSecondPassShadowMicScoreThresholdForVADGating:(id)arg1 ;
-(float)VTSecondPassRejectLoggingThresholdFrom:(id)arg1 ;
-(BOOL)assetsRequireSecondPass;
-(float)VTSecondPassPHSRejectLoggingThresholdFrom:(id)arg1 ;
-(float)VTSecondPassPHSThresholdFrom:(id)arg1 ;
-(id)supportedVTPhrasesInfoForCategory:(id)arg1 ;
-(id)ctcKwdToPhraseIdMapForCategory:(id)arg1 ;
-(float)satScoreThreshold;
-(BOOL)containsSpeakerRecognitionCategory;
-(long long)multiUserLowScoreThreshold;
-(long long)multiUserHighScoreThreshold;
-(long long)multiUserConfidentScoreThreshold;
-(long long)multiUserDeltaScoreThreshold;
-(float)psrCombinationWeight;
-(float)satImplicitProfileThreshold;
-(float)satImplicitProfileDeltaThreshold;
-(float)satVTImplicitThreshold;
-(float)pruningExplicitUttThresholdSAT;
-(float)pruningExplicitUttThresholdPSR;
-(float)pruningThresholdSAT;
-(float)pruningThresholdPSR;
-(unsigned long long)pruningNumRetentionUtterance;
-(unsigned long long)maxAllowedEnrollmentUtterances;
-(NSString *)voiceProfilePruningCookie;
-(NSString *)keywordDetectorQuasarConfigFilePath;
-(NSString *)keywordDetectorNDAPIConfigFilePath;
-(BOOL)satImplicitTrainingEnabled;
-(id)_getContinuousVoiceTriggerAssetCategory;
-(id)description;
-(NSDictionary *)dictionary;
-(NSString *)path;
-(NSString *)resourcePath;
-(NSString *)configVersion;
-(id)getNumberForKey:(id)arg1 category:(id)arg2 default:(id)arg3 ;
-(id)getStringForKey:(id)arg1 category:(id)arg2 default:(id)arg3 ;
-(id)assetHashInResourcePath:(id)arg1 ;
-(BOOL)containsCategory:(id)arg1 ;
-(BOOL)containsKey:(id)arg1 category:(id)arg2 ;
-(BOOL)isEqualAsset:(id)arg1 ;
-(BOOL)getBoolForKey:(id)arg1 category:(id)arg2 default:(BOOL)arg3 ;
-(NSString *)hashFromResourcePath;
-(unsigned long long)assetProvider;
-(id)initWithResourcePath:(id)arg1 configFile:(id)arg2 configVersion:(id)arg3 assetProvderType:(unsigned long long)arg4 ;
-(id)stringForCurrentAssetProviderType;
@end

