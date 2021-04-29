//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSDAccountController, IDSDServiceController, IDSPairingManager, IDSPushHandler, IDSRemoteCredential, IMUserDefaults, NSMutableDictionary;

@interface IDSAccountSync : NSObject
{
    IDSRemoteCredential *_syncCredential;	// 8 = 0x8
    NSMutableDictionary *_currentInFlightSyncAttempts;	// 16 = 0x10
    IDSPairingManager *_pairingManager;	// 24 = 0x18
    IDSDServiceController *_serviceController;	// 32 = 0x20
    IDSDAccountController *_accountController;	// 40 = 0x28
    IDSPushHandler *_pushHandler;	// 48 = 0x30
    IMUserDefaults *_userDefaults;	// 56 = 0x38
}

+ (id)usefulLoggingDescriptionAccountInfos:(id)arg1;	// IMP=0x000000010012ece8
+ (double)retryTimeForKey:(id)arg1 attempts:(long long)arg2;	// IMP=0x0000000100125d08
+ (id)sharedInstance;	// IMP=0x0000000100124fd0
- (void).cxx_destruct;	// IMP=0x000000010012f290
@property(retain, nonatomic) IMUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) IDSPushHandler *pushHandler; // @synthesize pushHandler=_pushHandler;
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSDServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(retain, nonatomic) IDSPairingManager *pairingManager; // @synthesize pairingManager=_pairingManager;
@property(retain, nonatomic) NSMutableDictionary *currentInFlightSyncAttempts; // @synthesize currentInFlightSyncAttempts=_currentInFlightSyncAttempts;
@property(retain, nonatomic) IDSRemoteCredential *syncCredential; // @synthesize syncCredential=_syncCredential;
- (void)_updateTinkerDeviceWithURIs:(id)arg1 pushToken:(id)arg2;	// IMP=0x000000010012eb60
- (void)_updatePreferredAccountWithAccountInfo:(id)arg1 withAccountSyncCommand:(unsigned int)arg2;	// IMP=0x000000010012df60
- (void)_registerAccountsWithRemoteInfo:(id)arg1;	// IMP=0x000000010012c3a0
- (void)synchronizeAccountsWithRemoteInfo:(id)arg1 service:(id)arg2;	// IMP=0x000000010012b54c
- (void)incomingSyncMessage:(id)arg1;	// IMP=0x000000010012ac54
- (void)_syncTinkerDeviceInfo;	// IMP=0x000000010012a6d4
- (id)_constructAccountInfo:(id)arg1;	// IMP=0x0000000100129590
- (id)constructRAResponseDictionary:(id)arg1;	// IMP=0x0000000100129254
- (void)_noteShouldSynchronizeServices:(id)arg1;	// IMP=0x0000000100128b1c
- (void)_noteShouldSynchronizeTinkerDeviceInfo;	// IMP=0x0000000100128804
- (void)noteShouldFetchRemoteAccountInfoForAllServices;	// IMP=0x0000000100127cbc
- (void)noteShouldSynchronizePreferredAccount;	// IMP=0x0000000100126fcc
- (void)noteShouldSynchronizeAllServices;	// IMP=0x0000000100126ea4
- (void)noteShouldSynchronizeTinkerDeviceInfo;	// IMP=0x0000000100126e74
- (void)resetAndResynchronizeEverything;	// IMP=0x0000000100126d7c
- (id)_sendAccountSyncMessage:(id)arg1 withPersistentKey:(id)arg2;	// IMP=0x0000000100126484
- (void)_stopAllPendingActions;	// IMP=0x00000001001261a4
- (void)_startRetryForKey:(id)arg1 withAction:(CDUnknownBlockType)arg2;	// IMP=0x0000000100125e54
- (void)kickAnyUnfinishedSynchronization;	// IMP=0x00000001001255d4
- (void)stopAnyUnfinishedSynchronization;	// IMP=0x00000001001255a4
- (void)saveTracking;	// IMP=0x00000001001254f8
- (id)initWithPairingManager:(id)arg1 serviceController:(id)arg2 accountController:(id)arg3 pushHandler:(id)arg4 userDefaults:(id)arg5 remoteCredential:(id)arg6;	// IMP=0x0000000100125314
- (id)init;	// IMP=0x0000000100125164

@end

