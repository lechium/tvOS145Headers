/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PBSSystemService : NSObject
+(id)sharedInstance;
-(void)reboot;
-(void)deactivateApplication;
-(void)setAirPlayActive:(BOOL)arg1 ;
-(void)noteHintShown:(unsigned long long)arg1 ;
-(void)presentShareAudioUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentSystemRoutingUIWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)wakeSystemForReason:(id)arg1 ;
-(void)sleepSystemForReason:(id)arg1 ;
-(void)registerServiceProviderEndpoint:(id)arg1 forProviderType:(id)arg2 ;
-(void)endpointForProviderType:(id)arg1 withIdentifier:(id)arg2 responseBlock:(/*^block*/id)arg3 ;
-(void)fetchHintStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)launchKioskApp;
-(void)relaunchBackboardd;
-(void)relaunch;
-(void)activateScreenSaver;
-(void)deactivateScreenSaver;
-(void)launchCRDApp;
-(void)presentShareAudioUI;
-(void)presentAudioUpsellWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentNowPlayingWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSleepTimeout:(double)arg1 ;
-(void)setNextVoiceRecognitionAudioInputPaths:(id)arg1 ;
-(void)setNextAssistantRecognitionStrings:(id)arg1 ;
-(void)sendMenuButtonEvent;
-(void)sendEventData:(id)arg1 ;
-(void)systemAppearanceWithReply:(/*^block*/id)arg1 ;
-(void)setSystemAppearance:(long long)arg1 ;
-(void)setKioskAppBundleIdentifier:(id)arg1 ;
-(void)setControlCenterFullScreenOverlayActive:(BOOL)arg1 ;
-(void)handleShowHomeIntentWithFilters:(id)arg1 time:(id)arg2 ;
-(void)presentAirDropPromptForDiagnosticFileWithOptions:(id)arg1 ;
-(void)fetchUserPreferenceForFirmwareUpdatesForAccessoryID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setMinimumBackgroundFetchInterval:(double)arg1 ;
-(void)setWantsPlayPauseButtonEvents:(BOOL)arg1 ;
-(void)setWantsVolumeButtonEvents:(BOOL)arg1 ;
-(void)setShouldSuppressSystemVolumeHUD:(BOOL)arg1 ;
-(void)showVolumeHUDForRouteType:(long long)arg1 withLevel:(id)arg2 ;
-(void)showVolumeHUDWithImageName:(id)arg1 level:(id)arg2 ;
-(void)listen;
-(void)fetchHintStatusWithCompletion_SYNC:(/*^block*/id)arg1 ;
-(void)sleepTimeoutWithCompletion:(/*^block*/id)arg1 ;
-(void)presentSystemRoutingUI:(/*^block*/id)arg1 ;
-(void)recentApplicationBundleIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)topActiveOrActivatingApplicationIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)performScreenActionWithName:(id)arg1 forItemIdentifier:(id)arg2 parameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)kioskAppBundleIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)takeScreenshotWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchPairedAppleRemoteStateWithCompletion:(/*^block*/id)arg1 ;
-(void)pairAppleRemote:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)infoForProvidersWithType:(id)arg1 ;
@end

