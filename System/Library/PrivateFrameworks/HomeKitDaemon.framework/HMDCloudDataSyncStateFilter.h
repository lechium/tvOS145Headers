/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDMessageFilter.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_source;
@class NSUUID, HMFMessageDispatcher, NSObject, HMFTimer, NSDate, HMDHomeManager, NSString;

@interface HMDCloudDataSyncStateFilter : HMDMessageFilter <HMFMessageReceiver, HMFTimerDelegate> {

	BOOL _decryptionFailed;
	BOOL _keychainSyncEnabled;
	BOOL _keychainSyncRequiredPopShown;
	BOOL _iCloudSwitchRequiredPopShown;
	BOOL _iCloudAccountActive;
	BOOL _cloudDataSyncCompleted;
	BOOL _serverTokenAvailable;
	BOOL _iCloudSwitchStateEnabled;
	BOOL _localDataDecryptionFailed;
	BOOL _networkConnectivityAvailable;
	BOOL _resetConfigDisplayTimeHasElapsed;
	BOOL _keychainSyncPeerAvailable;
	BOOL _cloudDataSyncPeerAvailable;
	NSUUID* _uuid;
	HMFMessageDispatcher* _msgDispatcher;
	NSObject*<OS_dispatch_source> _popupTimer;
	NSObject*<OS_dispatch_source> _iCloudSwitchPopupTimer;
	long long _totalHomes;
	HMFTimer* _cloudDataSyncInProgressTimer;
	double _remainingDataSyncPeriod;
	NSDate* _dataSyncTimerStartTimestamp;
	HMFTimer* _resetConfigDisplayTimer;
	double _remainingResetConfigDisplayPeriod;
	NSDate* _resetConfigDisplayTimerStartTimestamp;
	HMDHomeManager* _homeManager;

}

@property (nonatomic,retain) NSUUID * uuid;                                                                    //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL keychainSyncEnabled;                                                         //@synthesize keychainSyncEnabled=_keychainSyncEnabled - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> popupTimer;                                         //@synthesize popupTimer=_popupTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> iCloudSwitchPopupTimer;                             //@synthesize iCloudSwitchPopupTimer=_iCloudSwitchPopupTimer - In the implementation block
@property (assign,nonatomic) BOOL keychainSyncRequiredPopShown;                                                //@synthesize keychainSyncRequiredPopShown=_keychainSyncRequiredPopShown - In the implementation block
@property (assign,nonatomic) BOOL iCloudSwitchRequiredPopShown;                                                //@synthesize iCloudSwitchRequiredPopShown=_iCloudSwitchRequiredPopShown - In the implementation block
@property (assign,nonatomic) BOOL iCloudAccountActive;                                                         //@synthesize iCloudAccountActive=_iCloudAccountActive - In the implementation block
@property (assign,nonatomic) BOOL cloudDataSyncCompleted;                                                      //@synthesize cloudDataSyncCompleted=_cloudDataSyncCompleted - In the implementation block
@property (assign,nonatomic) BOOL serverTokenAvailable;                                                        //@synthesize serverTokenAvailable=_serverTokenAvailable - In the implementation block
@property (assign,nonatomic) BOOL iCloudSwitchStateEnabled;                                                    //@synthesize iCloudSwitchStateEnabled=_iCloudSwitchStateEnabled - In the implementation block
@property (assign,nonatomic) BOOL localDataDecryptionFailed;                                                   //@synthesize localDataDecryptionFailed=_localDataDecryptionFailed - In the implementation block
@property (assign,nonatomic) long long totalHomes;                                                             //@synthesize totalHomes=_totalHomes - In the implementation block
@property (assign,nonatomic) BOOL networkConnectivityAvailable;                                                //@synthesize networkConnectivityAvailable=_networkConnectivityAvailable - In the implementation block
@property (nonatomic,retain) HMFTimer * cloudDataSyncInProgressTimer;                                          //@synthesize cloudDataSyncInProgressTimer=_cloudDataSyncInProgressTimer - In the implementation block
@property (assign,nonatomic) double remainingDataSyncPeriod;                                                   //@synthesize remainingDataSyncPeriod=_remainingDataSyncPeriod - In the implementation block
@property (nonatomic,retain) NSDate * dataSyncTimerStartTimestamp;                                             //@synthesize dataSyncTimerStartTimestamp=_dataSyncTimerStartTimestamp - In the implementation block
@property (nonatomic,retain) HMFTimer * resetConfigDisplayTimer;                                               //@synthesize resetConfigDisplayTimer=_resetConfigDisplayTimer - In the implementation block
@property (assign,nonatomic) double remainingResetConfigDisplayPeriod;                                         //@synthesize remainingResetConfigDisplayPeriod=_remainingResetConfigDisplayPeriod - In the implementation block
@property (nonatomic,retain) NSDate * resetConfigDisplayTimerStartTimestamp;                                   //@synthesize resetConfigDisplayTimerStartTimestamp=_resetConfigDisplayTimerStartTimestamp - In the implementation block
@property (assign,nonatomic) BOOL resetConfigDisplayTimeHasElapsed;                                            //@synthesize resetConfigDisplayTimeHasElapsed=_resetConfigDisplayTimeHasElapsed - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                                              //@synthesize homeManager=_homeManager - In the implementation block
@property (assign,getter=isKeychainSyncPeerAvailable,nonatomic) BOOL keychainSyncPeerAvailable;                //@synthesize keychainSyncPeerAvailable=_keychainSyncPeerAvailable - In the implementation block
@property (assign,getter=isCloudDataSyncPeerAvailable,nonatomic) BOOL cloudDataSyncPeerAvailable;              //@synthesize cloudDataSyncPeerAvailable=_cloudDataSyncPeerAvailable - In the implementation block
@property (assign,nonatomic) BOOL decryptionFailed;                                                            //@synthesize decryptionFailed=_decryptionFailed - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isWhitelistedMessage:(id)arg1 ;
-(void)dealloc;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMDHomeManager *)homeManager;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)_registerForMessages;
-(void)resetConfiguration;
-(BOOL)decryptionFailed;
-(void)setDecryptionFailed:(BOOL)arg1 ;
-(BOOL)isiCloudSwitchEnabled;
-(void)setICloudSwitchStateEnabled:(BOOL)arg1 ;
-(BOOL)iCloudSwitchStateEnabled;
-(BOOL)keychainSyncEnabled;
-(BOOL)isLocalDataDecryptionFailed;
-(void)startDataConfigResetTimers;
-(void)setKeychainSyncEnabled:(BOOL)arg1 ;
-(void)updateCloudDataSyncState:(BOOL)arg1 ;
-(void)updateWithoutDataSynCheckServerTokenAvailable:(BOOL)arg1 ;
-(void)updateServerTokenAvailable:(BOOL)arg1 ;
-(void)kickResetConfigDisplayTimer;
-(BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3 ;
-(BOOL)shouldCloudSyncData;
-(void)_updateCurrentAccount:(id)arg1 ;
-(void)handleKeychainSyncStateChangedNotification:(id)arg1 ;
-(void)_handleAccountStatusChanged:(id)arg1 ;
-(void)_startDataConfigResetTimers;
-(void)_stopDataConfigResetTimers;
-(BOOL)_cloudSyncinProgressCheck:(id)arg1 supressPopup:(BOOL)arg2 sendCanceledError:(BOOL*)arg3 dataSyncState:(unsigned long long*)arg4 ;
-(void)_updateKeychainSyncEnabled:(BOOL)arg1 ;
-(void)_postNotificationForDataSyncInProgress:(BOOL)arg1 dataSyncState:(unsigned long long)arg2 forcePost:(BOOL)arg3 ;
-(void)_startCloudDataSyncTimer;
-(BOOL)resetConfigDisplayTimeHasElapsed;
-(void)_startResetConfigDisplayTimer;
-(void)_stopCloudDataSyncTimer;
-(void)_stopResetConfigDisplayTimer;
-(void)setNetworkConnectivityAvailable:(BOOL)arg1 ;
-(void)_stallCloudDataSyncTimer;
-(void)_stallResetConfigDisplayTimer;
-(HMFTimer *)cloudDataSyncInProgressTimer;
-(void)_resetCloudDataSyncTimer;
-(HMFTimer *)resetConfigDisplayTimer;
-(void)_clearResetConfigDisplayTimer;
-(void)setResetConfigDisplayTimeHasElapsed:(BOOL)arg1 ;
-(double)remainingDataSyncPeriod;
-(void)setRemainingDataSyncPeriod:(double)arg1 ;
-(void)setCloudDataSyncInProgressTimer:(HMFTimer *)arg1 ;
-(void)setDataSyncTimerStartTimestamp:(NSDate *)arg1 ;
-(NSDate *)dataSyncTimerStartTimestamp;
-(NSDate *)resetConfigDisplayTimerStartTimestamp;
-(double)remainingResetConfigDisplayPeriod;
-(void)setRemainingResetConfigDisplayPeriod:(double)arg1 ;
-(void)setResetConfigDisplayTimer:(HMFTimer *)arg1 ;
-(void)setResetConfigDisplayTimerStartTimestamp:(NSDate *)arg1 ;
-(BOOL)iCloudAccountActive;
-(void)setICloudAccountActive:(BOOL)arg1 ;
-(BOOL)cloudDataSyncCompleted;
-(void)_updateCloudDataSyncState:(BOOL)arg1 ;
-(void)setPopupTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)popupTimer;
-(void)_stopPopupTimer;
-(void)setKeychainSyncRequiredPopShown:(BOOL)arg1 ;
-(void)setICloudSwitchPopupTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)iCloudSwitchPopupTimer;
-(void)_stopiCloudSwitchPopupTimer;
-(void)setICloudSwitchRequiredPopShown:(BOOL)arg1 ;
-(void)setTotalHomes:(long long)arg1 ;
-(BOOL)isKeychainSyncPeerAvailable;
-(void)setKeychainSyncPeerAvailable:(BOOL)arg1 ;
-(BOOL)isCloudDataSyncPeerAvailable;
-(void)setCloudDataSyncPeerAvailable:(BOOL)arg1 ;
-(long long)totalHomes;
-(BOOL)keychainSyncRequiredPopShown;
-(void)_startPopupTimer;
-(BOOL)serverTokenAvailable;
-(BOOL)networkConnectivityAvailable;
-(BOOL)iCloudSwitchRequiredPopShown;
-(void)_startiCloudSwitchPopupTimer;
-(BOOL)localDataDecryptionFailed;
-(void)setCloudDataSyncCompleted:(BOOL)arg1 ;
-(void)setServerTokenAvailable:(BOOL)arg1 ;
-(void)setLocalDataDecryptionFailed:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 homeManager:(id)arg2 messageDispatcher:(id)arg3 serverTokenAvailable:(BOOL)arg4 homeDataHasBeenDecrypted:(BOOL)arg5 homeManagerServerTokenAvailable:(BOOL)arg6 localDataDecryptionFailed:(BOOL)arg7 totalHomes:(long long)arg8 currentAccount:(id)arg9 ;
-(void)updateNetworkConnectivity:(BOOL)arg1 ;
-(void)updateTotalHomes:(long long)arg1 ;
-(void)updateCurrentAccount:(id)arg1 ;
-(BOOL)dataSyncInProgressWithState:(unsigned long long*)arg1 withMessage:(id)arg2 ;
-(void)updateiCloudSwitchState:(BOOL)arg1 ;
-(void)updateLocalDataDecryptionFailed:(BOOL)arg1 ;
@end

