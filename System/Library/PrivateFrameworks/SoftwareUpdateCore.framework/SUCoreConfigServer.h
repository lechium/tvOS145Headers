/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoftwareUpdateCoreSupport/SUCoreConfig.h>

@protocol OS_dispatch_queue;
@class NSString, NSDate, NSTimer, MAAsset, SUCoreFSM, SUCorePersistedState, NSMutableDictionary, SUCoreConfig, NSObject;

@interface SUCoreConfigServer : SUCoreConfig {

	NSString* _uuidString;
	NSDate* _lastScanTime;
	NSDate* _nextScanTime;
	NSTimer* _timer;
	MAAsset* _lastLocatedAsset;
	SUCoreFSM* _stateMachine;
	SUCorePersistedState* _persistedState;
	NSMutableDictionary* _listenerDelegates;
	SUCoreConfig* _coreConfig;
	NSObject*<OS_dispatch_queue> _clientDelegateQueue;

}

@property (nonatomic,retain) NSString * uuidString;                                         //@synthesize uuidString=_uuidString - In the implementation block
@property (nonatomic,retain) NSDate * lastScanTime;                                         //@synthesize lastScanTime=_lastScanTime - In the implementation block
@property (nonatomic,retain) NSDate * nextScanTime;                                         //@synthesize nextScanTime=_nextScanTime - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                               //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) MAAsset * lastLocatedAsset;                                    //@synthesize lastLocatedAsset=_lastLocatedAsset - In the implementation block
@property (nonatomic,retain) SUCoreFSM * stateMachine;                                      //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) SUCorePersistedState * persistedState;                         //@synthesize persistedState=_persistedState - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * listenerDelegates;                       //@synthesize listenerDelegates=_listenerDelegates - In the implementation block
@property (nonatomic,retain) SUCoreConfig * coreConfig;                                     //@synthesize coreConfig=_coreConfig - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientDelegateQueue;              //@synthesize clientDelegateQueue=_clientDelegateQueue - In the implementation block
+(id)_generateStateTable;
+(id)persistedStateFilePath;
+(id)allowedServerProjects;
+(id)allowedServerKeys;
+(id)sharedServerSettings;
-(id)init;
-(void)dealloc;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(SUCoreFSM *)stateMachine;
-(void)setStateMachine:(SUCoreFSM *)arg1 ;
-(NSString *)uuidString;
-(void)setUuidString:(NSString *)arg1 ;
-(long long)actionUnknownAction:(id)arg1 error:(id*)arg2 ;
-(long long)performAction:(id)arg1 onEvent:(id)arg2 inState:(id)arg3 withInfo:(id)arg4 nextState:(id)arg5 error:(id*)arg6 ;
-(NSMutableDictionary *)listenerDelegates;
-(long long)actionConfigDownloadCatalog:(id)arg1 error:(id*)arg2 ;
-(long long)actionConfigQueryAsset:(id)arg1 error:(id*)arg2 ;
-(long long)actionConfigDownloadAsset:(id)arg1 error:(id*)arg2 ;
-(long long)actionConfigAdjustSettings:(id)arg1 error:(id*)arg2 ;
-(long long)actionConfigScheduleScan:(id)arg1 error:(id*)arg2 ;
-(void)_stateSafeResetState;
-(id)_stateSafeDownloadOptions;
-(id)_stateSafeSelectBestAssetFromArray:(id)arg1 error:(id*)arg2 ;
-(id)_stateSafeSelectBestAssetFromMultipleAssetArray:(id)arg1 bestAsset:(id*)arg2 selectionReason:(id*)arg3 ;
-(void)setLastLocatedAsset:(MAAsset *)arg1 ;
-(void)_stateSafeInformDelegatesOfConfiguration:(id)arg1 error:(id)arg2 ;
-(void)_stateSafeSendInstalledEventWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)clientDelegateQueue;
-(id)_stateSafeDetermineNextScanTime;
-(void)installServerSettings;
-(void)_stateSafeSendScheduledEventWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)setLastScanTime:(NSDate *)arg1 ;
-(void)setNextScanTime:(NSDate *)arg1 ;
-(void)_stateSafeUpdateState;
-(SUCorePersistedState *)persistedState;
-(NSDate *)lastScanTime;
-(NSDate *)nextScanTime;
-(SUCoreConfig *)coreConfig;
-(id)_nextScanTimeFromDate:(id)arg1 ;
-(void)_stateSafeSendNewEvent:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(id)_stateSafeLoadUUIDString;
-(MAAsset *)lastLocatedAsset;
-(void)listenForConfigChanges:(id)arg1 withName:(id)arg2 ;
-(id)scheduledActivityName;
-(void)setPersistedState:(SUCorePersistedState *)arg1 ;
-(void)setListenerDelegates:(NSMutableDictionary *)arg1 ;
-(void)setCoreConfig:(SUCoreConfig *)arg1 ;
-(void)setClientDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

