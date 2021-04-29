//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFAudioPlaybackRequest, AFDeleteSiriHistoryContext, AFMyriadAdvertisementContext, AFRequestInfo, AFVoiceInfo, NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString, NSURL, NSUUID;

@protocol AFSettingsService <NSObject>
- (oneway void)setAllowExplicitContent:(_Bool)arg1;
- (oneway void)pushMyriadAdvertisementContext:(AFMyriadAdvertisementContext *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)getRecordedAudioDirectoryPathsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)trimRecordedAudioWithIdentifier:(NSString *)arg1 offset:(double)arg2 duration:(double)arg3 outputFileType:(long long)arg4 completion:(void (^)(NSURL *, NSError *))arg5;
- (oneway void)accessRecordedAudioWithIdentifier:(NSString *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
- (oneway void)siriDesignModeIsEnabled:(void (^)(_Bool))arg1;
- (oneway void)setSiriDesignModeEnabled:(_Bool)arg1 completion:(void (^)(void))arg2;
- (oneway void)setOnDeviceDictationAvailableAlertPresented:(_Bool)arg1;
- (oneway void)deleteSiriHistoryWithContext:(AFDeleteSiriHistoryContext *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (oneway void)shouldSuppressSiriDataSharingOptInAlertWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)setSiriDataSharingOptInAlertPresented:(_Bool)arg1 completion:(void (^)(void))arg2;
- (oneway void)getSiriDataSharingOptInStatusWithCompletion:(void (^)(long long))arg1;
- (oneway void)setSiriDataSharingOptInStatus:(long long)arg1 completion:(void (^)(void))arg2;
- (oneway void)getAudioSessionCoordinationSnapshotWithCompletion:(void (^)(AFAudioSessionCoordinationSnapshot *))arg1;
- (oneway void)getCurrentNWActivityIDWithCompletion:(void (^)(NSUUID *))arg1;
- (oneway void)clearOpportuneSpeakingEdgeDetectorSignalOverride;
- (oneway void)setOpportuneSpeakingEdgeDetectorSignalOverride:(long long)arg1;
- (oneway void)setSpokenNotificationProxCardSeen:(_Bool)arg1;
- (oneway void)setSpokenNotificationShouldSkipTriggerlessReplies:(_Bool)arg1;
- (oneway void)getSpokenNotificationShouldSkipTriggerlessRepliesWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)setSpokenNotificationShouldAlwaysSpeakNotifications:(_Bool)arg1;
- (oneway void)getSpokenNotificationShouldAlwaysSpeakNotificationsWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)setSpokenNotificationTemporarilyDisabledForApp:(NSString *)arg1 until:(NSDate *)arg2;
- (oneway void)getSpokenNotificationTemporarilyDisabledEndDateForApp:(NSString *)arg1 completion:(void (^)(NSDate *))arg2;
- (oneway void)clearSpokenNotificationTemporarilyDisabledStatus;
- (oneway void)setSpokenNotificationTemporarilyDisabledUntil:(NSDate *)arg1;
- (oneway void)getSpokenNotificationTemporarilyDisabledEndDateWithCompletion:(void (^)(NSDate *))arg1;
- (oneway void)setNanoSiriDataSharingOptInStatus:(long long)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoCrownActivationEnabled:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoLanguage:(NSString *)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoOutputVoice:(AFVoiceInfo *)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoTTSSpeakerVolume:(NSNumber *)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoUseDeviceSpeakerForTTS:(NSNumber *)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoRaiseToSpeakEnabled:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoPhraseSpotterEnabled:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoDictationEnabled:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoAssistantEnabled:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)homeOnboardingFlowInvoked:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)fetchMultiUserVoiceIdentificationSetting:(void (^)(_Bool))arg1;
- (oneway void)getSharedUserID:(void (^)(NSString *, NSString *, NSError *))arg1;
- (oneway void)updateMultiUserWithSharedUserId:(NSString *)arg1 companionId:(NSString *)arg2 companionSpeechId:(NSString *)arg3 idsIdentifier:(NSString *)arg4 productPrefix:(NSString *)arg5 aceHost:(NSString *)arg6 completion:(void (^)(NSError *))arg7;
- (oneway void)getSharedUserIdForHomeUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)getHomeUserIdForSharedUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)forceMultiUserSync:(_Bool)arg1 download:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (oneway void)updateVoiceIdScoreToUser:(NSString *)arg1 score:(NSString *)arg2 reset:(_Bool)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)showMultiUserSharedUserIDsCompletion:(void (^)(NSString *, NSArray *))arg1;
- (oneway void)showPrimaryUserSharedUserIDWithCompletion:(void (^)(NSString *))arg1;
- (oneway void)showMultiUsers:(void (^)(NSArray *))arg1;
- (oneway void)removeMultiUserUserWithSharedUserId:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)removeMultiUserUser:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)addMultiUserUser:(NSString *)arg1 sharedId:(NSString *)arg2 loggableSharedId:(NSString *)arg3 enrollmentName:(NSString *)arg4 isPrimary:(_Bool)arg5 completion:(void (^)(NSError *))arg6;
- (oneway void)stopObservingBluetoothWirelessSplitterSession;
- (oneway void)startObservingBluetoothWirelessSplitterSession;
- (oneway void)getBluetoothWirelessSplitterSessionInfoWithCompletion:(void (^)(AFBluetoothWirelessSplitterSessionInfo *))arg1;
- (oneway void)getPairedBluetoothDeviceInfoArrayWithCompletion:(void (^)(NSArray *))arg1;
- (oneway void)getConnectedBluetoothDeviceInfoArrayWithCompletion:(void (^)(NSArray *))arg1;
- (oneway void)getBluetoothDeviceInfoWithUID:(NSUUID *)arg1 completion:(void (^)(AFBluetoothDeviceInfo *))arg2;
- (oneway void)getBluetoothDeviceInfoWithAddress:(NSString *)arg1 completion:(void (^)(AFBluetoothDeviceInfo *))arg2;
- (oneway void)setSiriOutputVolume:(float)arg1 forAudioRoute:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)getSiriOutputVolumeForAudioRoute:(NSString *)arg1 completion:(void (^)(float, NSError *))arg2;
- (oneway void)synchronizeExperimentConfigurationsIfApplicableWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)resetExperimentForConfigurationIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)getExperimentForConfigurationIdentifier:(NSString *)arg1 completion:(void (^)(AFExperiment *, NSError *))arg2;
- (oneway void)hasEverSetLanguageCodeWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (oneway void)getManagedLocalAndRemotePeerInfoWithCompletion:(void (^)(AFPeerInfo *, NSArray *))arg1;
- (oneway void)setHardcodedBluetoothProximity:(NSNumber *)arg1;
- (oneway void)getContextCollectorsInfoWithCompletion:(void (^)(NSArray *, _Bool))arg1;
- (oneway void)getOriginDeviceInfoForContextIdentifier:(NSUUID *)arg1 completion:(void (^)(AFPeerInfo *))arg2;
- (oneway void)getCurrentContextSnapshotWithCompletion:(void (^)(NSDictionary *))arg1;
- (oneway void)getCrossDeviceContextWithCompletion:(void (^)(NSDictionary *))arg1;
- (oneway void)getSharedCompanionInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)configOverrides:(void (^)(NSDictionary *))arg1;
- (oneway void)setConfigOverrides:(NSDictionary *)arg1 completion:(void (^)(void))arg2;
- (oneway void)getStereoPairState:(void (^)(_Bool, NSError *))arg1;
- (oneway void)getStereoPartnerLastMyriadWinDate:(void (^)(NSDate *, NSError *))arg1;
- (oneway void)getMeCard:(void (^)(SAPerson *, NSError *))arg1;
- (oneway void)getDevicesWithAvailablePHSAssetsOnDeviceCheck:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)getDevicesWithAvailablePHSAssetsForLanguage:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (oneway void)disableAndDeleteCloudSyncWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)fetchExperimentContextWithCompletion:(void (^)(AFExperimentContext *, NSError *))arg1;
- (oneway void)fetchExperimentConfigurationsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)sendMetricsToServerWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)resetAnalyticsStoreWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)purgeAnalyticsStoreWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)fetchEventRecordsFromAnalyticsStoreAtPath:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getSupplementalLanguagesForProduct:(NSString *)arg1 forBuildVersion:(NSString *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)getSupplementalLanguageDictionaryForProduct:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)getSupplementalLanguagesModificationDate:(void (^)(NSDate *, NSError *))arg1;
- (oneway void)getSupplementalLanguagesDictionary:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)setSupplementalLanguages:(NSArray *)arg1 forProduct:(NSString *)arg2 forBuildVersion:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)setSupplementalLanguageDictionary:(NSDictionary *)arg1 forProduct:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)setEnableAssistantLogging:(_Bool)arg1;
- (oneway void)stopAllAudioPlaybackRequests:(_Bool)arg1;
- (oneway void)stopAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1 immediately:(_Bool)arg2;
- (oneway void)startAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1 options:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)getPeerIdentifiers:(void (^)(NSArray *))arg1;
- (oneway void)startRemoteRequest:(AFRequestInfo *)arg1 onPeer:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)startUIMockServerRequestWithReplayFileURL:(NSURL *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)dismissUI;
- (oneway void)startMultiUserUIRequestWithText:(NSString *)arg1 expectedSpeakerSharedUserID:(NSString *)arg2 expectedSpeakerConfidenceScore:(unsigned long long)arg3 nonspeakerConfidenceScores:(NSDictionary *)arg4 completion:(void (^)(NSError *))arg5;
- (oneway void)startUIRequestWithSpeechAudioFileURL:(NSURL *)arg1;
- (oneway void)startUIRequestWithInfo:(AFRequestInfo *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)startUIRequestWithText:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)setOfflineDictationProfileOverridePath:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)createOfflineSpeechProfileWithLanguage:(NSString *)arg1 modelOverridePath:(NSString *)arg2 JSONData:(NSData *)arg3 completion:(void (^)(NSData *, NSError *))arg4;
- (oneway void)updateOfflineSpeechProfileWithLanguage:(NSString *)arg1 modelOverridePath:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)getOfflineDictationStatusWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)setLanguage:(NSString *)arg1 outputVoice:(AFVoiceInfo *)arg2 withCompletion:(void (^)(NSDictionary *, NSError *))arg3;
- (oneway void)setLanguage:(NSString *)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setOutputVoice:(AFVoiceInfo *)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)getAvailableVoicesIncludingAssetInfo:(_Bool)arg1 completion:(void (^)(NSArray *))arg2;
- (oneway void)_runServiceMaintenance;
- (void)_setSyncVerificationNeededAndFullReportNeeded:(_Bool)arg1 shouldPostNotification:(_Bool)arg2 completion:(void (^)(NSArray *))arg3;
- (oneway void)_fetchPeerData:(void (^)(void))arg1;
- (oneway void)_syncDataWithAnchorKeys:(NSArray *)arg1 forceReset:(_Bool)arg2 reason:(NSString *)arg3 reply:(void (^)(NSArray *))arg4;
- (oneway void)_clearSyncNeededForKey:(NSString *)arg1;
- (oneway void)_setSyncNeededForReason:(NSString *)arg1;
- (oneway void)barrierWithReply:(void (^)(void))arg1;
- (oneway void)_killDaemon;
- (oneway void)_shutdownSessionIfIdle;
- (oneway void)setDictationEnabled:(_Bool)arg1;
- (oneway void)setAssistantEnabled:(_Bool)arg1;
- (oneway void)setActiveAccountIdentifier:(NSString *)arg1;
- (oneway void)deleteAccountWithIdentifier:(NSString *)arg1;
- (oneway void)saveAccountWithMessageDictionary:(NSDictionary *)arg1 setActive:(_Bool)arg2;
- (oneway void)retrieveAccountMessageDictionariesWithReply:(void (^)(NSArray *))arg1;
- (oneway void)fetchSupportedLanguagesWithReply:(void (^)(NSArray *, NSError *))arg1;
@end

