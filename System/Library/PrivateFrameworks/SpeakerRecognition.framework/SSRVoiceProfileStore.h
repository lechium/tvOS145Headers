/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, SSRVoiceProfileStorePrefs;

@interface SSRVoiceProfileStore : NSObject {

	NSMutableArray* _voiceProfileArray;
	NSObject*<OS_dispatch_queue> _queue;
	SSRVoiceProfileStorePrefs* _storePrefs;

}

@property (retain) NSMutableArray * voiceProfileArray;                            //@synthesize voiceProfileArray=_voiceProfileArray - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) SSRVoiceProfileStorePrefs * storePrefs;              //@synthesize storePrefs=_storePrefs - In the implementation block
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)updateVoiceProfile:(id)arg1 withUserName:(id)arg2 ;
-(id)deleteUserVoiceProfile:(id)arg1 ;
-(void)cleanupVoiceProfileModelFilesForLocale:(id)arg1 ;
-(id)userVoiceProfilesForAppDomain:(id)arg1 ;
-(id)userVoiceProfilesForAppDomain:(id)arg1 forLocale:(id)arg2 ;
-(void)addUserVoiceProfile:(id)arg1 withContext:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)addImplicitUtterance:(id)arg1 toVoiceProfile:(id)arg2 withAsset:(id)arg3 withTriggerSource:(id)arg4 withAudioInput:(id)arg5 withCompletion:(/*^block*/id)arg6 ;
-(BOOL)checkIfVoiceProfile:(id)arg1 needsUpdatedWith:(id)arg2 withCategory:(unsigned long long)arg3 ;
-(id)userVoiceProfilesForLocale:(id)arg1 ;
-(id)userVoiceProfileForVoiceProfileID:(id)arg1 ;
-(void)migrateVoiceProfilesIfNeededWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)cleanupDuplicatedProfiles;
-(void)cleanupVoiceProfileStore:(/*^block*/id)arg1 ;
-(void)retrainVoiceProfile:(id)arg1 withContext:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)initStore;
-(void)_loadVoiceProfiles;
-(void)_updateTrainedUsersWithAction:(unsigned long long)arg1 UserVoiceProfile:(id)arg2 ;
-(id)_deleteUserVoiceProfile:(id)arg1 ;
-(void)_synchronizeSiriVoiceProfilesWithAssistant;
-(void)_retrainLiveOnOnboardedProfilesForLanguage:(id)arg1 withForceRetrain:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_logVoiceProfileConfusionWithCleanup:(BOOL)arg1 ;
-(BOOL)evaluateImplicitAdditionPolicyWithScores:(id)arg1 forProfile:(id)arg2 withImplicitThreshold:(float)arg3 withDeltaThreshold:(float)arg4 ;
-(id)_getTopScoringProfileIdFromScores:(id)arg1 ;
-(id)_retrainVoiceProfile:(id)arg1 withContext:(id)arg2 ;
-(id)_enrolledVoiceProfiles;
-(void)_saveTrainedUsers:(id)arg1 ;
-(id)_retrainVoiceProfile:(id)arg1 withContext:(id)arg2 withUtterances:(id)arg3 ;
-(void)logVoiceProfileConfusionWithCleanup:(BOOL)arg1 ;
-(BOOL)_checkIfRetrainingRequiredForProfile:(id)arg1 ;
-(id)copyAudioFiles:(id)arg1 toProfile:(id)arg2 forModelType:(unsigned long long)arg3 ;
-(NSMutableArray *)voiceProfileArray;
-(void)setVoiceProfileArray:(NSMutableArray *)arg1 ;
-(SSRVoiceProfileStorePrefs *)storePrefs;
-(void)setStorePrefs:(SSRVoiceProfileStorePrefs *)arg1 ;
@end

