//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class AMSPushHandler, ISOperationQueue, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface PushNotificationController : NSObject <APSConnectionDelegate>
{
    NSMutableDictionary *_connections;	// 8 = 0x8
    struct MGNotificationTokenStruct *_deviceNameChangedToken;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    double _lastRegisterAttemptTime;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 40 = 0x28
    ISOperationQueue *_operationQueue;	// 48 = 0x30
    long long _pushEnabledState;	// 56 = 0x38
    AMSPushHandler *_pushHandler;	// 64 = 0x40
    NSMutableArray *_registerBlocks;	// 72 = 0x48
    NSMutableArray *_tokenOperations;	// 80 = 0x50
}

+ (id)soundFilesDirectoryPath;	// IMP=0x0000000100096080
+ (id)sharedInstance;	// IMP=0x0000000100095fe0
- (void).cxx_destruct;	// IMP=0x000000010009de9c
- (void)_updatePushEnabledState;	// IMP=0x000000010009d8dc
- (void)_updateEnvironmentAfterTokenPost:(id)arg1;	// IMP=0x000000010009d5c4
- (_Bool)_shouldAggressivelySendToken;	// IMP=0x000000010009d590
- (void)_setShouldAggressivelySendToken:(_Bool)arg1;	// IMP=0x000000010009d53c
- (void)_resetLastRegisterAttemptTime;	// IMP=0x000000010009d50c
- (void)_reloadPushStateInContext:(id)arg1;	// IMP=0x000000010009d050
- (void)_reloadDaemonClientInContext:(id)arg1;	// IMP=0x000000010009cc38
- (void)_reloadActiveEnvironmentInContext:(id)arg1;	// IMP=0x000000010009c4e4
- (void)_postTokensInContext:(id)arg1 force:(_Bool)arg2;	// IMP=0x000000010009bd08
- (void)_postTokensIfNecessaryInContext:(id)arg1;	// IMP=0x000000010009bcf8
- (void)_postTokenForEnvironment:(id)arg1;	// IMP=0x000000010009b720
- (void)_postNotificationsAvailableForClient:(id)arg1 inContext:(id)arg2;	// IMP=0x000000010009b404
- (id)_portNameForEnvironmentName:(id)arg1;	// IMP=0x000000010009b380
- (void)_openConnectionForEnvironment:(id)arg1;	// IMP=0x000000010009b04c
- (long long)_numberOfClientsInContext:(id)arg1;	// IMP=0x000000010009af9c
- (id)_newPostTokenOperationForEnvironment:(id)arg1 account:(id)arg2;	// IMP=0x000000010009ae90
- (id)_newAPSConnectionWithEnvironment:(id)arg1;	// IMP=0x000000010009ad74
- (void)_loadConnectionsInContext:(id)arg1;	// IMP=0x000000010009a69c
- (_Bool)_isValidEnvironment:(id)arg1;	// IMP=0x000000010009a600
- (_Bool)_isPushEnabled;	// IMP=0x000000010009a5f0
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010009a3f0
- (void)_fireRegisterBlocksAfterOperation:(id)arg1;	// IMP=0x0000000100099ec8
- (id)_environmentNameForConnection:(id)arg1;	// IMP=0x0000000100099d5c
- (id)_environmentForName:(id)arg1 createIfNeeded:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x00000001000998dc
- (id)_enabledTopics;	// IMP=0x000000010009988c
- (void)_closeEnvironment:(id)arg1 inContext:(id)arg2;	// IMP=0x00000001000994b0
- (id)_clientForIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x0000000100099078
- (id)_bag;	// IMP=0x0000000100098fd4
- (void)_addNotificationWithUserInfo:(id)arg1 client:(id)arg2 context:(id)arg3;	// IMP=0x0000000100098ea8
- (void)_urlBagDidLoadNotification:(id)arg1;	// IMP=0x0000000100098d84
- (void)_storeFrontChangedNotification:(id)arg1;	// IMP=0x0000000100098ca8
- (void)_networkTypeChanged:(id)arg1;	// IMP=0x0000000100098b68
- (void)_deviceNameChanged;	// IMP=0x000000010009892c
- (void)_accountStoreChangedNotification:(id)arg1;	// IMP=0x0000000100098850
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000100098018
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0000000100097c54
- (void)unregisterNotificationClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100097760
- (void)showLocalNotificationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000976a8
- (void)registerNotificationClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010009732c
- (void)popRemoteNotificationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100096f68
- (void)observeXPCServer:(id)arg1;	// IMP=0x0000000100096ebc
- (void)registerTokenForEnvironmentName:(id)arg1 accountIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000969f8
- (void)postPushTokens;	// IMP=0x00000001000967bc
- (void)postClientNotificationWithUserInfo:(id)arg1;	// IMP=0x0000000100096154
- (void)dealloc;	// IMP=0x0000000100095d78
- (id)init;	// IMP=0x00000001000957e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

