//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSystemServiceInterface-Protocol.h"

@class NSString, NSXPCConnection, PBAirPlayService, PBAppInfoService, PBBulletinService, PBDisplayManagerService, PBEARCConfiguratorService, PBOSUpdateService, PBOverlayLayoutService, PBPictureInPictureService, PBRestrictionService, PBUserPresentationService, PBUserProfileService, PBVideoSubscriberAccountService;
@protocol PBSystemServiceNowPlayingDelegate;

@interface PBSystemServiceConnection : NSObject <PBSystemServiceInterface>
{
    PBAirPlayService *_airPlayService;	// 8 = 0x8
    PBAppInfoService *_appInfoService;	// 16 = 0x10
    PBBulletinService *_bulletinService;	// 24 = 0x18
    PBOSUpdateService *_osUpdateService;	// 32 = 0x20
    PBRestrictionService *_restrictionService;	// 40 = 0x28
    PBUserPresentationService *_userPresentationService;	// 48 = 0x30
    PBVideoSubscriberAccountService *_videoSubscriberAccountService;	// 56 = 0x38
    PBDisplayManagerService *_displayManagerService;	// 64 = 0x40
    PBPictureInPictureService *_pictureInPictureService;	// 72 = 0x48
    PBOverlayLayoutService *_overlayLayoutService;	// 80 = 0x50
    PBUserProfileService *_userProfileService;	// 88 = 0x58
    PBEARCConfiguratorService *_eARCConfiguratorService;	// 96 = 0x60
    NSXPCConnection *_remoteConnection;	// 104 = 0x68
    _Bool _hiliteModeActive;	// 112 = 0x70
    NSString *_clientBundleIdentifier;	// 120 = 0x78
    id <PBSystemServiceNowPlayingDelegate> _nowPlayingPresentationDelegate;	// 128 = 0x80
}

+ (id)systemServiceConnectionForProcessIdentifier:(int)arg1;	// IMP=0x00000001001d484c
+ (void)_registerConnection:(id)arg1;	// IMP=0x00000001001d4604
+ (id)_activeConnectionsByProcessIdentifier;	// IMP=0x00000001001d4528
- (void).cxx_destruct;	// IMP=0x00000001001e4170
@property(nonatomic) _Bool hiliteModeActive; // @synthesize hiliteModeActive=_hiliteModeActive;
@property(retain, nonatomic) id <PBSystemServiceNowPlayingDelegate> nowPlayingPresentationDelegate; // @synthesize nowPlayingPresentationDelegate=_nowPlayingPresentationDelegate;
@property(readonly, copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(readonly, nonatomic) NSXPCConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (id)_clientBundleIdentifierFromConnection;	// IMP=0x00000001001e3f90
- (_Bool)sendMessagePresentNowPlayingUI;	// IMP=0x00000001001e3f0c
- (void)defaultKioskAppPurgeTopShelfContentForApplicationIdentifiers:(id)arg1;	// IMP=0x00000001001e3e5c
- (void)listen;	// IMP=0x00000001001e3e48
- (void)getEARCConfiguratorServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e3d1c
- (void)getUserProfileServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e3bf0
- (void)getOverlayLayoutServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e3ac4
- (void)getPictureInPictureServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e3998
- (void)getDisplayManagerServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e386c
- (void)getVideoSubscriberAccountServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e354c
- (void)getUserPresentationServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e322c
- (void)getMediaRemoteServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e31a0
- (void)getRestrictionServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e3084
- (void)getAirPlayServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e2d64
- (void)getOSUpdateServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e2a44
- (void)getBulletinServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e2724
- (void)getAppInfoServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e2300
- (void)endpointForProviderType:(id)arg1 withIdentifier:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e2224
- (void)registerServiceProviderEndpoint:(id)arg1 forProviderType:(id)arg2;	// IMP=0x00000001001e2138
- (void)getStoreFrontCountryCodeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e2064
- (void)showVolumeHUDWithImageName:(id)arg1 level:(id)arg2;	// IMP=0x00000001001e1d30
- (void)showVolumeHUDForRouteType:(long long)arg1 withLevel:(id)arg2;	// IMP=0x00000001001e1a3c
- (void)setShouldSuppressSystemVolumeHUD:(_Bool)arg1;	// IMP=0x00000001001e172c
- (void)setWantsVolumeButtonEvents:(_Bool)arg1;	// IMP=0x00000001001e141c
- (void)setWantsPlayPauseButtonEvents:(_Bool)arg1;	// IMP=0x00000001001e110c
- (void)pairAppleRemote:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001e0df8
- (void)fetchPairedAppleRemoteStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e0b38
- (void)fetchEnforceProvisioningOnSystemAppsEnabledWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e08f0
- (void)fetchApplicationIdentifiersByBundleIdentifierMappingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e069c
- (void)fetchDisabledAdamIDsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e03dc
- (void)fetchProvisionAppIdentifiersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e0148
- (void)launchKioskApp;	// IMP=0x00000001001dfc24
- (void)stopSiriListening;	// IMP=0x00000001001df828
- (void)startSiriListening;	// IMP=0x00000001001df42c
- (void)activateSiri;	// IMP=0x00000001001def7c
- (void)setMinimumBackgroundFetchInterval:(double)arg1;	// IMP=0x00000001001deee4
- (void)fetchUserPreferenceForFirmwareUpdatesForAccessoryID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001deb6c
- (void)presentAirDropPromptForDiagnosticFileWithOptions:(id)arg1;	// IMP=0x00000001001de908
- (void)handleShowHomeIntentWithFilters:(id)arg1 time:(id)arg2;	// IMP=0x00000001001de12c
- (void)setControlCenterFullScreenOverlayActive:(_Bool)arg1;	// IMP=0x00000001001ddeac
- (void)takeScreenshotWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ddbe4
- (void)setKioskAppBundleIdentifier:(id)arg1;	// IMP=0x00000001001dd7f0
- (void)kioskAppBundleIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001dd4f8
- (void)setSystemAppearance:(long long)arg1;	// IMP=0x00000001001dd178
- (void)systemAppearanceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001dcd84
- (void)sendEventData:(id)arg1;	// IMP=0x00000001001dc940
- (void)sendMenuButtonEvent;	// IMP=0x00000001001dc560
- (void)performScreenActionWithName:(id)arg1 forItemIdentifier:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001001dbca0
- (void)setNextAssistantRecognitionStrings:(id)arg1;	// IMP=0x00000001001db9e8
- (void)setNextVoiceRecognitionAudioInputPaths:(id)arg1;	// IMP=0x00000001001db730
- (void)topActiveOrActivatingApplicationIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001db38c
- (void)recentApplicationBundleIdentifiersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001db130
- (void)purgeTopShelfContentForApplicationIdentifiers:(id)arg1;	// IMP=0x00000001001daf30
- (void)dismissSoftwareUpdateWindowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001daaf4
- (void)presentSoftwareUpdateWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001da3ec
- (void)dismissEventMaskingWindowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d9fb0
- (void)presentEventMaskingWindowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d9b74
- (void)dismissThermalAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d9730
- (void)presentThermalAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d92ec
- (void)fetchHintStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d9140
- (void)noteHintShown:(unsigned long long)arg1;	// IMP=0x00000001001d8fdc
- (void)presentNowPlayingWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d8b6c
- (void)presentSystemRoutingUIWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d8630
- (void)presentAudioUpsellWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d75f8
- (void)presentShareAudioUIWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d71cc
- (void)presentShareAudioUI;	// IMP=0x00000001001d7194
- (void)launchCRDApp;	// IMP=0x00000001001d6f64
- (void)setAirPlayActive:(_Bool)arg1;	// IMP=0x00000001001d6ce4
- (void)deactivateScreenSaver;	// IMP=0x00000001001d6904
- (void)activateScreenSaverWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d6484
- (void)activateScreenSaver;	// IMP=0x00000001001d644c
- (void)sleepTimeoutWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d615c
- (void)setSleepTimeout:(double)arg1;	// IMP=0x00000001001d5e80
- (void)reboot;	// IMP=0x00000001001d5bb8
- (void)relaunch;	// IMP=0x00000001001d58f0
- (void)relaunchBackboardd;	// IMP=0x00000001001d56c0
- (void)fetchDeviceIsAsleepWithResult:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d5470
- (void)wakeSystemForReason:(id)arg1;	// IMP=0x00000001001d514c
- (void)sleepSystemForReason:(id)arg1;	// IMP=0x00000001001d4e28
- (void)deactivateApplication;	// IMP=0x00000001001d4cc8
- (void)registerNowPlayingDelegate:(id)arg1;	// IMP=0x00000001001d4c68
- (id)osUpdateService;	// IMP=0x00000001001d4c3c
- (void)invalidate;	// IMP=0x00000001001d49e0
- (void)resume;	// IMP=0x00000001001d49ac
- (void)dealloc;	// IMP=0x00000001001d4478
- (id)init;	// IMP=0x00000001001d4440
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001001d2520

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

