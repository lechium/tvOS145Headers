//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKClientProtocol-Protocol.h"
#import "_GKStateMachineDelegate-Protocol.h"

@class GKDatabaseConnection, GKDiscovery, GKEntitlements, GKEventTuple, GKGameInternal, GKInviteSession, GKMatchResponse, GKResourceManager, GKThreadsafeDictionary, NSDate, NSDictionary, NSLocale, NSMapTable, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSXPCConnection, _GKStateMachine;
@protocol GKUIViewService, OS_dispatch_queue;

@interface GKClientProxy : NSObject <GKClientProtocol, _GKStateMachineDelegate>
{
    _Bool _deniedProductionEnvironment;	// 8 = 0x8
    _Bool _productionSigned;	// 9 = 0x9
    _Bool _installed;	// 10 = 0xa
    _Bool _supportsMultipleActivePlayers;	// 11 = 0xb
    _Bool _isOcelot;	// 12 = 0xc
    unsigned char _achievementsRateLimitedCurrentState;	// 13 = 0xd
    unsigned char _scoresRateLimitedCurrentState;	// 14 = 0xe
    _Bool _initialized;	// 15 = 0xf
    int _pid;	// 16 = 0x10
    unsigned int _applicationState;	// 20 = 0x14
    unsigned int _previousApplicationState;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_replyQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_authQueue;	// 40 = 0x28
    NSXPCConnection *_connection;	// 48 = 0x30
    GKEntitlements *_entitlements;	// 56 = 0x38
    NSNumber *_adamID;	// 64 = 0x40
    NSNumber *_sandboxExtensionToken;	// 72 = 0x48
    NSNumber *_externalVersion;	// 80 = 0x50
    NSString *_bundleIdentifier;	// 88 = 0x58
    NSString *_bundleVersion;	// 96 = 0x60
    NSString *_bundleShortVersion;	// 104 = 0x68
    long long _environment;	// 112 = 0x70
    NSDate *_achievementsRateLimitingStartDate;	// 120 = 0x78
    long long _achievementsRateLimitingCurrentNumberOfRequests;	// 128 = 0x80
    NSDate *_scoresRateLimitingStartDate;	// 136 = 0x88
    long long _scoresRateLimitingCurrentNumberOfRequests;	// 144 = 0x90
    NSMutableDictionary *_alreadyCoalescingNetworkRequests;	// 152 = 0x98
    NSString *_language;	// 160 = 0xa0
    GKClientProxy<GKUIViewService> *_viewService;	// 168 = 0xa8
    GKGameInternal *_currentGame;	// 176 = 0xb0
    GKDiscovery *_nearbyDiscovery;	// 184 = 0xb8
    GKEventTuple *_launchEvent;	// 192 = 0xc0
    GKInviteSession *_inviteSession;	// 200 = 0xc8
    GKMatchResponse *_currentMatchResponse;	// 208 = 0xd0
    _GKStateMachine *_appInitStateMachine;	// 216 = 0xd8
    GKThreadsafeDictionary *_appSessions;	// 224 = 0xe0
    NSObject<OS_dispatch_queue> *_delayedRequestsQueue;	// 232 = 0xe8
    GKDatabaseConnection *_delayedRequestsDBConnection;	// 240 = 0xf0
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 248 = 0xf8
    GKResourceManager *_resourceManager;	// 256 = 0x100
    NSMutableSet *_pendingDataTypesForRefresh;	// 264 = 0x108
    NSMapTable *_extensionProxies;	// 272 = 0x110
    NSDictionary *_preferencesFromBag;	// 280 = 0x118
}

+ (id)syncQueue;	// IMP=0x00000001001834ec
+ (void)closeDatabaseFromManagedObjectContextForMOC:(id)arg1;	// IMP=0x00000001000966c4
+ (void)closeDatabaseFromManagedObjectContextForPlayer:(id)arg1;	// IMP=0x0000000100096678
+ (id)newManagedObjectContextForClient:(id)arg1 player:(id)arg2;	// IMP=0x0000000100096474
+ (id)_newManagedObjectContextForPlayer:(id)arg1;	// IMP=0x0000000100095648
+ (id)cacheFileQueue;	// IMP=0x00000001000955d8
+ (id)managedObjectModel;	// IMP=0x0000000100095260
+ (void)removeAllCaches;	// IMP=0x0000000100094c6c
+ (void)removeCacheForPlayer:(id)arg1;	// IMP=0x00000001000944cc
+ (id)cacheFileURLForClient:(id)arg1 player:(id)arg2;	// IMP=0x000000010009446c
+ (id)cacheDirectoryURLForClient:(id)arg1 player:(id)arg2;	// IMP=0x0000000100093ebc
+ (id)cacheDirectoryForBundleID:(id)arg1 environment:(long long)arg2;	// IMP=0x0000000100093e08
+ (id)_existingManagedObjectContextForPlayer:(id)arg1;	// IMP=0x0000000100093aa0
+ (id)contextKeyForPlayer:(id)arg1;	// IMP=0x0000000100093a68
+ (void)removeClient:(id)arg1;	// IMP=0x0000000100186f70
+ (void)enumerateClientsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100186ea4
+ (id)clientsToBeEnumerated;	// IMP=0x0000000100186c80
+ (id)clientForMatchmakingRID:(id)arg1;	// IMP=0x0000000100186ab8
+ (id)clientForInviteSessionToken:(id)arg1;	// IMP=0x00000001001865d8
+ (id)foregroundClient;	// IMP=0x0000000100186474
+ (id)clientForBundleID:(id)arg1 pid:(int)arg2 createIfNecessary:(_Bool)arg3;	// IMP=0x000000010018645c
+ (id)clientForBundleID:(id)arg1 bundle:(id)arg2 pid:(int)arg3 createIfNecessary:(_Bool)arg4;	// IMP=0x0000000100185828
+ (_Bool)isExtensionBundleID:(id)arg1;	// IMP=0x000000010018569c
+ (id)clientForProcessIdentifier:(int)arg1;	// IMP=0x00000001001855fc
+ (id)clientForBundleID:(id)arg1;	// IMP=0x00000001001855e4
+ (id)gameCenterClient;	// IMP=0x00000001001855c0
+ (id)_clientLookup;	// IMP=0x0000000100185544
+ (id)factoryQueue;	// IMP=0x00000001001854d4
+ (void)saveAppInitState:(id)arg1 forBundleID:(id)arg2 pid:(int)arg3;	// IMP=0x000000010018b470
+ (id)lastKnownAppInitStateForClientWithBundleID:(id)arg1 pid:(int)arg2;	// IMP=0x000000010018afb0
+ (void)authenticationDidChange;	// IMP=0x000000010018a9d4
+ (void)performDelayedRequestsForEnvironment:(long long)arg1;	// IMP=0x0000000100194a20
+ (id)storeAndForwardDirectoryPathForEnvironment:(long long)arg1;	// IMP=0x0000000100193470
- (void).cxx_destruct;	// IMP=0x0000000100185370
@property(copy, nonatomic) NSDictionary *preferencesFromBag; // @synthesize preferencesFromBag=_preferencesFromBag;
@property(retain, nonatomic) NSMapTable *extensionProxies; // @synthesize extensionProxies=_extensionProxies;
@property(retain, nonatomic) NSMutableSet *pendingDataTypesForRefresh; // @synthesize pendingDataTypesForRefresh=_pendingDataTypesForRefresh;
@property(retain, nonatomic) GKResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(retain, nonatomic) GKDatabaseConnection *delayedRequestsDBConnection; // @synthesize delayedRequestsDBConnection=_delayedRequestsDBConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delayedRequestsQueue; // @synthesize delayedRequestsQueue=_delayedRequestsQueue;
@property(retain, nonatomic) GKThreadsafeDictionary *appSessions; // @synthesize appSessions=_appSessions;
@property(retain) _GKStateMachine *appInitStateMachine; // @synthesize appInitStateMachine=_appInitStateMachine;
@property _Bool initialized; // @synthesize initialized=_initialized;
@property(retain) GKMatchResponse *currentMatchResponse; // @synthesize currentMatchResponse=_currentMatchResponse;
@property(retain) GKInviteSession *inviteSession; // @synthesize inviteSession=_inviteSession;
@property(retain, nonatomic) GKEventTuple *launchEvent; // @synthesize launchEvent=_launchEvent;
@property unsigned int previousApplicationState; // @synthesize previousApplicationState=_previousApplicationState;
@property unsigned int applicationState; // @synthesize applicationState=_applicationState;
@property(retain, nonatomic) GKDiscovery *nearbyDiscovery; // @synthesize nearbyDiscovery=_nearbyDiscovery;
@property(retain, nonatomic) GKGameInternal *currentGame; // @synthesize currentGame=_currentGame;
@property(nonatomic) __weak GKClientProxy<GKUIViewService> *viewService; // @synthesize viewService=_viewService;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSMutableDictionary *alreadyCoalescingNetworkRequests; // @synthesize alreadyCoalescingNetworkRequests=_alreadyCoalescingNetworkRequests;
@property(nonatomic) unsigned char scoresRateLimitedCurrentState; // @synthesize scoresRateLimitedCurrentState=_scoresRateLimitedCurrentState;
@property(nonatomic) long long scoresRateLimitingCurrentNumberOfRequests; // @synthesize scoresRateLimitingCurrentNumberOfRequests=_scoresRateLimitingCurrentNumberOfRequests;
@property(retain, nonatomic) NSDate *scoresRateLimitingStartDate; // @synthesize scoresRateLimitingStartDate=_scoresRateLimitingStartDate;
@property(nonatomic) unsigned char achievementsRateLimitedCurrentState; // @synthesize achievementsRateLimitedCurrentState=_achievementsRateLimitedCurrentState;
@property(nonatomic) long long achievementsRateLimitingCurrentNumberOfRequests; // @synthesize achievementsRateLimitingCurrentNumberOfRequests=_achievementsRateLimitingCurrentNumberOfRequests;
@property(retain, nonatomic) NSDate *achievementsRateLimitingStartDate; // @synthesize achievementsRateLimitingStartDate=_achievementsRateLimitingStartDate;
@property _Bool isOcelot; // @synthesize isOcelot=_isOcelot;
@property(nonatomic) _Bool supportsMultipleActivePlayers; // @synthesize supportsMultipleActivePlayers=_supportsMultipleActivePlayers;
@property(nonatomic) _Bool installed; // @synthesize installed=_installed;
@property(nonatomic) _Bool productionSigned; // @synthesize productionSigned=_productionSigned;
@property(nonatomic) _Bool deniedProductionEnvironment; // @synthesize deniedProductionEnvironment=_deniedProductionEnvironment;
@property(nonatomic) long long environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *bundleShortVersion; // @synthesize bundleShortVersion=_bundleShortVersion;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSNumber *externalVersion; // @synthesize externalVersion=_externalVersion;
@property(retain, nonatomic) NSNumber *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(retain) GKEntitlements *entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *authQueue; // @synthesize authQueue=_authQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
- (void)deleteInviteSession;	// IMP=0x0000000100184dec
- (void)cancelInvitationForSession:(id)arg1 playerID:(id)arg2 pushTokens:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100184834
- (_Bool)processMatchResponse:(id)arg1;	// IMP=0x0000000100183d48
- (void)checkMatchStatus;	// IMP=0x0000000100183790
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100183734
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x000000010018355c
- (void)setLaunchEvent:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x0000000100183260
- (void)updatePreferencesFromBag:(id)arg1;	// IMP=0x0000000100183200
- (void)setExtensionProxy:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00000001001830e0
- (_Bool)isExtension;	// IMP=0x00000001001830d8
- (_Bool)isUIService;	// IMP=0x00000001001830d0
- (_Bool)isGameCenter;	// IMP=0x0000000100183078
@property(readonly, nonatomic) NSLocale *locale; // @dynamic locale;
@property(readonly, nonatomic) NSDictionary *gameDescriptor;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100182bc4
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)resetCache:(id)arg1;	// IMP=0x0000000100182a64
- (void)_setupCache;	// IMP=0x0000000100182a60
- (id)credentialForPlayer:(id)arg1;	// IMP=0x00000001001828ec
- (id)transportWithCredential:(id)arg1;	// IMP=0x0000000100182828
- (void)dealloc;	// IMP=0x0000000100182734
- (void)updateIfRecentlyInstalled;	// IMP=0x0000000100182344
- (id)initWithBundleIdentifier:(id)arg1 bundleOrNil:(id)arg2 pid:(int)arg3;	// IMP=0x0000000100181cd4
- (void)initializeInitializationStateMachine;	// IMP=0x0000000100181b68
- (void)invalidateStoreFrontDependentObjects;	// IMP=0x000000010009532c
- (id)transactionGroupIfCacheExistsForPlayer:(id)arg1;	// IMP=0x0000000100093d40
- (id)transactionGroupForPlayer:(id)arg1;	// IMP=0x0000000100093ca4
- (id)_managedObjectContextForPlayer:(id)arg1;	// IMP=0x0000000100093b24
- (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010018a6c0
- (oneway void)resetLoginCancelCount;	// IMP=0x000000010018a41c
- (oneway void)loadRemoteImageDataForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010018a37c
- (oneway void)localizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010018a26c
- (oneway void)getAuthenticatedPlayerIDWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010018a144
- (oneway void)getAccountNameWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100189ec4
- (oneway void)getAuthenticatedLocalPlayersWithStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100189134
- (oneway void)getGamedFiredUpWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100188ee4
- (oneway void)getAuthenticatedPlayerInfo:(CDUnknownBlockType)arg1;	// IMP=0x0000000100188ba0
- (oneway void)getPrivateServicesForPID:(int)arg1 localPlayer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001001886d0
- (oneway void)getServicesForPID:(int)arg1 localPlayer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001001880f8
- (oneway void)getPrivateServicesWithTransport:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100187b08
- (oneway void)getServicesWithTransport:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100187400
- (oneway void)setTestGame:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001873ec
- (oneway void)setHostPID:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001873d8
- (id)serviceForClass:(Class)arg1 transport:(id)arg2 client:(id)arg3 credential:(id)arg4;	// IMP=0x000000010018712c
- (void)didEnterForeground;	// IMP=0x000000010018baf4
- (void)updateAppInitState;	// IMP=0x000000010018ba14
- (id)verifyAuthorized;	// IMP=0x000000010018ae7c
- (id)appInitState;	// IMP=0x000000010018ae6c
- (_Bool)setAppInitState:(id)arg1;	// IMP=0x000000010018ae5c
- (void)stateDidChange;	// IMP=0x000000010018add0
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x000000010018ac8c
- (void)sendAuthenticationDidChangeNotificationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010018aa04
- (void)bgInitializeWithCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100192fd8
- (void)initializeWithCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100192a20
- (void)removeAppSessionForPlayer:(id)arg1;	// IMP=0x0000000100192a10
- (id)appSessionForPlayer:(id)arg1;	// IMP=0x0000000100192988
- (void)addAppSession:(id)arg1 forCredential:(id)arg2;	// IMP=0x0000000100192860
- (void)backgroundWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001920d8
- (void)terminateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100191950
- (oneway void)setLogBits:(int)arg1;	// IMP=0x00000001001916d4
- (oneway void)authenticatedPlayersDidChange:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100190fdc
- (oneway void)completedOptimisticAuthenticationWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x0000000100190f30
- (oneway void)setCurrentGame:(id)arg1 serverEnvironment:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100190aac
- (oneway void)getPreferenceForKey:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100190a28
- (oneway void)setPreferencesValues:(id)arg1;	// IMP=0x00000001001908bc
- (oneway void)refreshPendingDataTypes;	// IMP=0x0000000100190788
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x00000001001901b8
- (oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;	// IMP=0x000000010018fffc
- (oneway void)session:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 fromPlayer:(id)arg4;	// IMP=0x000000010018fdd0
- (oneway void)session:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;	// IMP=0x000000010018fbc0
- (oneway void)session:(id)arg1 player:(id)arg2 didSaveData:(id)arg3;	// IMP=0x000000010018f9b0
- (oneway void)session:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;	// IMP=0x000000010018f7b4
- (oneway void)session:(id)arg1 removedPlayer:(id)arg2;	// IMP=0x000000010018f5c8
- (oneway void)session:(id)arg1 addedPlayer:(id)arg2;	// IMP=0x000000010018f3dc
- (oneway void)localPlayerAcceptedCustomTournamentInvite;	// IMP=0x000000010018f1b8
- (oneway void)didReceiveData:(id)arg1 reliably:(_Bool)arg2 forRecipients:(id)arg3 fromSender:(id)arg4;	// IMP=0x000000010018efa0
- (oneway void)didDisconnectFromParticipantWithID:(id)arg1;	// IMP=0x000000010018edd0
- (oneway void)didConnectToParticipantWithID:(id)arg1;	// IMP=0x000000010018ec00
- (oneway void)relayPushNotification:(id)arg1;	// IMP=0x000000010018e954
- (oneway void)nearbyDataReceivedForPlayerID:(id)arg1 deviceID:(id)arg2 data:(id)arg3;	// IMP=0x000000010018e744
- (oneway void)nearbyPlayerLostForPlayerID:(id)arg1 deviceID:(id)arg2;	// IMP=0x000000010018e558
- (oneway void)nearbyPlayerFoundForPlayerID:(id)arg1 deviceID:(id)arg2 discoveryInfo:(id)arg3;	// IMP=0x000000010018e348
- (oneway void)cancelGameInvite:(id)arg1;	// IMP=0x000000010018e09c
- (oneway void)declineInviteWithNotification:(id)arg1;	// IMP=0x000000010018ddf0
- (oneway void)acceptInviteWithNotification:(id)arg1;	// IMP=0x000000010018db44
- (oneway void)acceptMultiplayerGameInvite;	// IMP=0x000000010018d91c
- (oneway void)fetchTurnBasedData;	// IMP=0x000000010018d754
- (oneway void)achievementSelected:(id)arg1;	// IMP=0x000000010018d584
- (oneway void)scoreSelected:(id)arg1;	// IMP=0x000000010018d3b4
- (oneway void)challengeCompleted:(id)arg1;	// IMP=0x000000010018d178
- (oneway void)challengeReceived:(id)arg1;	// IMP=0x000000010018cfa8
- (oneway void)completedChallengeSelected:(id)arg1;	// IMP=0x000000010018cdd8
- (oneway void)receivedChallengeSelected:(id)arg1;	// IMP=0x000000010018cc08
- (oneway void)friendRequestSelected:(id)arg1;	// IMP=0x000000010018c9f8
- (oneway void)respondedToNearbyInvite:(id)arg1;	// IMP=0x000000010018c828
- (oneway void)resetNetworkActivity;	// IMP=0x000000010018c684
- (oneway void)endNetworkActivity;	// IMP=0x000000010018c4e0
- (oneway void)beginNetworkActivity;	// IMP=0x000000010018c33c
- (oneway void)requestSandboxExtension:(CDUnknownBlockType)arg1;	// IMP=0x000000010018c110
- (void)performDelayedRequestsForCredential:(id)arg1;	// IMP=0x0000000100196034
- (void)performDelayedRequestsForEnvironment:(long long)arg1;	// IMP=0x0000000100195f64
- (void)performPassThroughScoreRequestsForEnvironment:(long long)arg1;	// IMP=0x0000000100195750
- (void)performPassThroughAchievementRequestsForEnvironment:(long long)arg1;	// IMP=0x0000000100194f3c
- (id)removeFriendWriterWithCredential:(id)arg1;	// IMP=0x000000010019497c
- (id)removeGameWriterWithCredential:(id)arg1;	// IMP=0x00000001001948d8
- (id)deletePlayerPhotoWriterWithCredential:(id)arg1;	// IMP=0x0000000100194834
- (id)setPlayerPhotoWriterWithCredential:(id)arg1;	// IMP=0x0000000100194790
- (id)setPlayerStatusWriterWithCredential:(id)arg1;	// IMP=0x00000001001946ec
- (id)abortChallengesWriterWithCredential:(id)arg1;	// IMP=0x0000000100194648
- (id)issueChallengesWriterWithCredential:(id)arg1;	// IMP=0x00000001001945a4
- (id)submitAchievementsWriterWithCredential:(id)arg1;	// IMP=0x00000001001944ec
- (id)submitRatingsWriterWithCredential:(id)arg1;	// IMP=0x0000000100194448
- (id)submitScoresWriterWithCredential:(id)arg1;	// IMP=0x00000001001943a4
- (id)_delayedRequestWriterWithCacheWriterClass:(Class)arg1 cacheReaderClass:(Class)arg2 networkWriterClass:(Class)arg3 bagKey:(id)arg4 batchSubmissionInterval:(long long)arg5 credential:(id)arg6;	// IMP=0x00000001001940a8
- (void)_removeDelayedRequestStore;	// IMP=0x0000000100193a74
- (void)_setupDelayedRequestsWriters;	// IMP=0x000000010019384c
- (id)requestsCacheForEnvironment:(long long)arg1;	// IMP=0x0000000100193600
- (id)storeAndForwardDirectoryPathForEnvironment:(long long)arg1;	// IMP=0x0000000100193598

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
