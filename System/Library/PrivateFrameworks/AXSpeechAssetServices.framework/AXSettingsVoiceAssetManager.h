/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AXSpeechAssetServices.framework/AXSpeechAssetServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXSpeechAssetServices/AXSpeechAssetServices-Structs.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@class NSPointerArray, AVSpeechSynthesizer, NSString;

@interface AXSettingsVoiceAssetManager : NSObject <AVSpeechSynthesizerDelegate> {

	SCNetworkReachabilityRef _reachability;
	NSPointerArray* _delegates;
	AVSpeechSynthesizer* _samplePlayer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2 ;
-(BOOL)inUnitTestMode;
-(id)_mobileAssetDownloadOptions;
-(id)_assetUpdaterClient;
-(id)_allAssetsForVoiceId:(id)arg1 forDeletion:(BOOL)arg2 ;
-(id)_assetTypeForVoiceId:(id)arg1 ;
-(id)_assetForVoiceId:(id)arg1 forDeletion:(BOOL)arg2 ;
-(id)_allInstalledAssetsForVoiceId:(id)arg1 ;
-(void)clientUpdateAvailableSpeechAssets;
-(id)mobileAssetDownloadQueue;
-(void)_startDownloadingAlternateVoice:(id)arg1 ;
-(id)_currentDelegates;
-(id)_cachedAssetForVoiceId:(id)arg1 ;
-(long long)diskSizeForAsset:(id)arg1 ;
-(void)_handleAssetProgress:(id)arg1 voiceId:(id)arg2 diskSize:(long long)arg3 asset:(id)arg4 ;
-(id)mobileAssetWorkQueue;
-(void)_requestVoiceAlternateVoiceDownloadProgress:(id)arg1 ;
-(void)removeSiriVoiceUsage:(id)arg1 ;
-(void)setAssetsForTesting:(id)arg1 ;
-(id)assetsForTesting;
-(void)replaceTestAsset:(id)arg1 withAsset:(id)arg2 ;
-(void)setSelectedIdsForTesting:(id)arg1 ;
-(id)selectedIdsForTesting;
-(id)assetForVoiceId:(id)arg1 ;
-(id)allInstalledAssetsForVoiceId:(id)arg1 ;
-(void)cleanUpExtraInstalledAssetsIfNecessary:(id)arg1 ;
-(void)startDownloadingAlternateVoice:(id)arg1 ;
-(BOOL)_voiceIdIsVocalizerVoice:(id)arg1 ;
-(void)requestVoiceAlternateVoiceDownloadProgress:(id)arg1 ;
-(void)stopDownloadingAlternateVoice:(id)arg1 ;
-(void)deleteDownloadAlternateVoice:(id)arg1 ;
-(void)updateAvailableSpeechAssetsSynchronously;
-(void)_updateAllowedToDownload;
-(BOOL)allowedToDownloadVoiceAssets;
-(void)playSample:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

