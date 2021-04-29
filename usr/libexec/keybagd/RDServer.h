//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDKeybagd-Protocol.h"
#import "RDServer-Protocol.h"

@class NSMutableDictionary, NSString;

@interface RDServer : NSObject <RDServer, BDKeybagd>
{
    int _switchState;	// 8 = 0x8
    NSMutableDictionary *_pidsToClients;	// 16 = 0x10
    NSMutableDictionary *_userToSwitchTo;	// 24 = 0x18
}

+ (id)sharedBubbleXPCInterface;	// IMP=0x000000010000f32c
+ (id)sharedXPCInterface;	// IMP=0x000000010000f2a8
+ (id)sharedServer;	// IMP=0x000000010000f1f0
- (void).cxx_destruct;	// IMP=0x0000000100017024
@property int switchState; // @synthesize switchState=_switchState;
@property(retain, nonatomic) NSMutableDictionary *userToSwitchTo; // @synthesize userToSwitchTo=_userToSwitchTo;
@property(retain, nonatomic) NSMutableDictionary *pidsToClients; // @synthesize pidsToClients=_pidsToClients;
- (void)provisionDevice:(id)arg1 forPid:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100016da8
- (int)asidForClient:(id)arg1 withAuid:(unsigned int *)arg2 withPid:(int)arg3;	// IMP=0x0000000100016d94
- (void)registerUserPersonaObserverForPID:(int)arg1 withMachServiceName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100016b34
- (void)registerUserPersonaStakeholderForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016938
- (_Bool)notifyNextPersonaObserver:(id)arg1 withUser:(unsigned int)arg2;	// IMP=0x0000000100016698
- (void)_broadcastPersonaUpdates:(int)arg1 withAuid:(unsigned int)arg2;	// IMP=0x000000010001656c
- (void)personaLogoutWithPid:(int)arg1 WithUserODuuid:(id)arg2 withUid:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000164d0
- (void)personaLoginWithPid:(int)arg1 WithUserODuuid:(id)arg2 withUid:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100016434
- (void)fetchMultiPersonaBundleIdentifiersforPid:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001621c
- (void)setMultiPersonaBundlesIdentifiers:(id)arg1 forPid:(int)arg2 WithcompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100015fcc
- (void)fetchBundleIdentifiersForPersona:(id)arg1 forPid:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100015d30
- (void)setSinglePersonaBundlesIdentifiers:(id)arg1 forPersona:(id)arg2 forPid:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100015a60
- (void)fetchPersona:(id)arg1 forPid:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000157e0
- (void)fetchAsidMapforPid:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000155cc
- (void)fetchAllUsersPersonaListforPid:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000153b8
- (void)fetchPersonaListforPid:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000151a4
- (_Bool)remoteProcessHasBooleanEntitlement:(id)arg1;	// IMP=0x00000001000150e0
- (void)disablePersona:(id)arg1 forPid:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014e18
- (void)deletePersona:(id)arg1 forPid:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014b50
- (void)createPersona:(id)arg1 passcodeData:(id)arg2 forPid:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100014780
- (void)reengageUserQuotaForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100014694
- (void)suspendUserQuotaForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100014598
- (void)removeUserSyncTask:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014370
- (void)addUserSyncTask:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014120
- (void)removeUserSyncTask:(id)arg1 forPID:(int)arg2;	// IMP=0x0000000100014110
- (void)addUserSyncTask:(id)arg1 forPID:(int)arg2;	// IMP=0x0000000100014100
- (id)fetchUserBlockTaskList;	// IMP=0x0000000100014024
- (id)fetchUserSyncTaskList;	// IMP=0x0000000100013f48
- (void)fetchUserSwitchBlockingTaskListWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013dc0
- (void)_broadcastDeviceLoginSessionStateDidUpdate;	// IMP=0x0000000100013d50
- (void)_broadcastUserSwitchTaskListDidUpdate;	// IMP=0x0000000100013ce0
- (void)removeUserSwitchBlockingTask:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100013ac4
- (void)addUserSwitchBlockingTask:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000138e4
- (void)removeUserSwitchBlockingTask:(id)arg1 forPID:(int)arg2;	// IMP=0x00000001000138d4
- (void)addUserSwitchBlockingTask:(id)arg1 forPID:(int)arg2;	// IMP=0x00000001000138c4
- (void)_reallySwitchUser:(_Bool)arg1;	// IMP=0x0000000100013100
- (void)_checkIfWeShouldSwitchUser:(_Bool)arg1;	// IMP=0x0000000100012dec
- (_Bool)LogoutToUser:(id)arg1;	// IMP=0x0000000100012a84
- (void)switchToUser:(id)arg1;	// IMP=0x0000000100012668
- (void)_broadcastBubbleDidPop;	// IMP=0x000000010001260c
- (void)StopBubbleWithPID:(int)arg1 WithUID:(unsigned int)arg2 WithStatus:(unsigned long long)arg3;	// IMP=0x000000010001253c
- (void)removeMachServiceName:(id)arg1 withPID:(int)arg2 WithUID:(unsigned int)arg3;	// IMP=0x0000000100012430
- (void)fetchMachServiceNameswithPID:(int)arg1 WithUID:(unsigned int)arg2 WithCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000122d4
- (void)resumeSyncBubbleForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012160
- (void)terminateSyncBubbleForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011ed0
- (void)loginUICheckinForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011c74
- (void)loginComplete;	// IMP=0x0000000100011b84
- (_Bool)inLoginSession;	// IMP=0x0000000100011af8
- (void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 pid:(int)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100011a14
- (void)logoutToLoginSessionWithPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000117a8
- (void)switchToLoginUserWithPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001158c
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 pid:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100011574
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 pid:(int)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100010fb8
- (id)_whitelistedPreferencesKeys;	// IMP=0x0000000100010f60
- (void)unregisterStakeholderForPID:(int)arg1 status:(unsigned long long)arg2 reason:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100010cd8
- (void)registerUserSyncStakeholderForPID:(int)arg1 machServiceName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100010970
- (_Bool)inLogoutProcess;	// IMP=0x0000000100010910
- (_Bool)anyBubblePopClients;	// IMP=0x0000000100010778
- (void)registerBubblePopStakeholderForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000104d4
- (void)registerCriticalUserSwitchStakeholderForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010280
- (void)registerUserSwitchStakeholderForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010048
- (id)bubbleStakeHolder;	// IMP=0x000000010000fea4
- (id)criticalStakeHolder;	// IMP=0x000000010000fd00
- (void)_enumerateClientsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000fb7c
- (id)_clientForPID:(int)arg1;	// IMP=0x000000010000facc
- (void)removeBubbleClient:(id)arg1;	// IMP=0x000000010000f970
- (void)addBubbleClient:(id)arg1;	// IMP=0x000000010000f7e4
- (void)removeClient:(id)arg1;	// IMP=0x000000010000f5f0
- (void)addClient:(id)arg1;	// IMP=0x000000010000f414
- (id)init;	// IMP=0x000000010000f3b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

