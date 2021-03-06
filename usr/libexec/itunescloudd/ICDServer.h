//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICCloudServerListenerEndpointServiceProtocol-Protocol.h"
#import "ICDBackgroundTaskScheduling-Protocol.h"
#import "ICDHandlerProviding-Protocol.h"
#import "ICDServerNotificationsManagerDelegate-Protocol.h"
#import "ICDServerProtocol-Protocol.h"
#import "MRAVClusterObserver-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class CloudPushNotificationController, CloudUserNotificationController, ICDCloudServiceStatusMonitor, ICDNetworkAvailabilityService, ICDServerNotificationsManager, ICDServerOperationsManager, ICDelegateAccountStoreServiceListener, ICDelegationProviderService, NSMutableDictionary, NSOperationQueue, NSString, NSUserDefaults;
@protocol ICDAccountManaging, ICDBackgroundTaskManaging, ICDHandlerCoordinating, OS_dispatch_queue;

@interface ICDServer : NSObject <NSXPCListenerDelegate, ICDServerNotificationsManagerDelegate, ICDBackgroundTaskScheduling, ICDHandlerProviding, MRAVClusterObserver, ICDServerProtocol, ICCloudServerListenerEndpointServiceProtocol>
{
    _Bool _ignoreAccountChanges;	// 8 = 0x8
    _Bool _startupSequenceCompleted;	// 9 = 0x9
    _Bool _havePendingOperationToReloadSecondaryAccountLibraries;	// 10 = 0xa
    unsigned int _outputClusterType;	// 12 = 0xc
    id <ICDAccountManaging> _accountManager;	// 16 = 0x10
    id <ICDHandlerCoordinating> _handlerCoordinator;	// 24 = 0x18
    id <ICDBackgroundTaskManaging> _backgroundTaskManager;	// 32 = 0x20
    long long _preferredVideoQuality;	// 40 = 0x28
    CloudPushNotificationController *_pushNotificationController;	// 48 = 0x30
    ICDServerNotificationsManager *_serverNotificationsManager;	// 56 = 0x38
    ICDCloudServiceStatusMonitor *_cloudServiceStatusMonitor;	// 64 = 0x40
    unsigned long long _stateHandle;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_serialQueue;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_startupQueue;	// 88 = 0x58
    NSOperationQueue *_internalOperationQueue;	// 96 = 0x60
    NSMutableDictionary *_xpcListeners;	// 104 = 0x68
    ICDNetworkAvailabilityService *_networkAvailabilityService;	// 112 = 0x70
    ICDServerOperationsManager *_serverOperationsManager;	// 120 = 0x78
    ICDelegateAccountStoreServiceListener *_delegateAccountStoreListener;	// 128 = 0x80
    ICDelegationProviderService *_delegationProviderService;	// 136 = 0x88
    NSUserDefaults *_mediaPlaybackDefaults;	// 144 = 0x90
    CloudUserNotificationController *_userNotificationController;	// 152 = 0x98
}

+ (id)server;	// IMP=0x0000000100041b50
- (void).cxx_destruct;	// IMP=0x000000010003d350
@property(readonly, nonatomic) CloudUserNotificationController *userNotificationController; // @synthesize userNotificationController=_userNotificationController;
@property(readonly, nonatomic) NSUserDefaults *mediaPlaybackDefaults; // @synthesize mediaPlaybackDefaults=_mediaPlaybackDefaults;
@property(readonly, nonatomic) ICDelegationProviderService *delegationProviderService; // @synthesize delegationProviderService=_delegationProviderService;
@property(readonly, nonatomic) ICDelegateAccountStoreServiceListener *delegateAccountStoreListener; // @synthesize delegateAccountStoreListener=_delegateAccountStoreListener;
@property(readonly, nonatomic) ICDServerOperationsManager *serverOperationsManager; // @synthesize serverOperationsManager=_serverOperationsManager;
@property(readonly, nonatomic) ICDNetworkAvailabilityService *networkAvailabilityService; // @synthesize networkAvailabilityService=_networkAvailabilityService;
@property(readonly, nonatomic) NSMutableDictionary *xpcListeners; // @synthesize xpcListeners=_xpcListeners;
@property(readonly, nonatomic) NSOperationQueue *internalOperationQueue; // @synthesize internalOperationQueue=_internalOperationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *startupQueue; // @synthesize startupQueue=_startupQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) _Bool havePendingOperationToReloadSecondaryAccountLibraries; // @synthesize havePendingOperationToReloadSecondaryAccountLibraries=_havePendingOperationToReloadSecondaryAccountLibraries;
@property(readonly, nonatomic) unsigned int outputClusterType; // @synthesize outputClusterType=_outputClusterType;
@property(readonly, nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(readonly, nonatomic) ICDServerNotificationsManager *serverNotificationsManager; // @synthesize serverNotificationsManager=_serverNotificationsManager;
@property(readonly, nonatomic) CloudPushNotificationController *pushNotificationController; // @synthesize pushNotificationController=_pushNotificationController;
@property(nonatomic) long long preferredVideoQuality; // @synthesize preferredVideoQuality=_preferredVideoQuality;
@property(nonatomic) _Bool ignoreAccountChanges; // @synthesize ignoreAccountChanges=_ignoreAccountChanges;
@property(readonly, nonatomic) id <ICDBackgroundTaskManaging> backgroundTaskManager; // @synthesize backgroundTaskManager=_backgroundTaskManager;
@property(readonly, nonatomic) id <ICDHandlerCoordinating> handlerCoordinator; // @synthesize handlerCoordinator=_handlerCoordinator;
@property(readonly, nonatomic) id <ICDAccountManaging> accountManager; // @synthesize accountManager=_accountManager;
- (void)_updateAirPlaySettingsForConfiguration:(id)arg1;	// IMP=0x000000010003d0d4
- (void)_handleFamilyContentDeletionEvent:(id)arg1;	// IMP=0x000000010003cd40
- (void)_performPeriodicSubscriptionKeyRefresh;	// IMP=0x000000010003cc1c
- (void)_loadICMLForSecondaryAccountsOnAppleTVWithOutputClusterType:(unsigned int)arg1 activeAccountConfiguration:(id)arg2;	// IMP=0x000000010003cae8
- (void)_retryLoadingCloudLibraryForSecondaryAccountsOnAppleTV;	// IMP=0x000000010003ca90
- (long long)_libraryManagementPolicyTypeForPlatformWithOutputClusterType:(unsigned int)arg1 canRetryLoadingSecondaryAccounts:(_Bool *)arg2;	// IMP=0x000000010003c8e4
- (long long)_secondaryAccountsCloudLibraryLoadingStateWithClusterType:(unsigned int)arg1;	// IMP=0x000000010003c5c8
- (void)_preprocessURLResolutionCacheDictionary:(id)arg1;	// IMP=0x000000010003bf78
- (void)_writeURLResolutionCacheFileUsingBag:(id)arg1;	// IMP=0x000000010003bafc
- (void)_handleURLBagProviderDidUpdateBagNotification:(id)arg1;	// IMP=0x000000010003ba34
- (void)_handleApplicationRegistrationNotification:(id)arg1;	// IMP=0x000000010003b74c
- (void)_ensureMusicSubscriptionKeysAreAvailableForConfiguration:(id)arg1;	// IMP=0x000000010003b52c
- (void)_ensureSubscriptionInformationIsUpToDateForConfiguration:(id)arg1;	// IMP=0x000000010003b3e0
- (void)_updateServerAllowsExplicitContentSettingAutomatically:(_Bool)arg1 forConfiguration:(id)arg2;	// IMP=0x000000010003b148
- (void)_setupMPMediaLibraryFilteringForConfigurations:(id)arg1;	// IMP=0x000000010003af58
- (void)_migrateToLatestUserVersionForConfigurations:(id)arg1;	// IMP=0x000000010003ace0
- (void)_completeStartupSequenceIfNeeded;	// IMP=0x000000010003abd0
- (void)_completeStartupSequenceIfPossible;	// IMP=0x000000010003ab8c
- (_Bool)_canCompleteStartupSequence;	// IMP=0x000000010003aa34
- (_Bool)_hasCompletedStartupSequence;	// IMP=0x000000010003a964
@property(nonatomic, getter=isStartupSequenceCompleted) _Bool startupSequenceCompleted; // @synthesize startupSequenceCompleted=_startupSequenceCompleted;
@property(readonly, nonatomic) ICDCloudServiceStatusMonitor *cloudServiceStatusMonitor; // @synthesize cloudServiceStatusMonitor=_cloudServiceStatusMonitor;
- (void)_tearDownKVO;	// IMP=0x000000010003a7a0
- (void)_setupKVO;	// IMP=0x000000010003a77c
- (void)_stopAncillaryServices;	// IMP=0x000000010003a598
- (void)_startAncillaryServices;	// IMP=0x0000000100039c30
- (void)_initializeAncillaryServices;	// IMP=0x0000000100039bb4
- (void)_setupInternalQueues;	// IMP=0x0000000100039af4
- (void)clusterController:(id)arg1 clusterStatusDidChange:(unsigned long long)arg2;	// IMP=0x0000000100039a70
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010003994c
- (void)notificationsManagerDidReceivePhoneNumberChangedNotification:(id)arg1;	// IMP=0x00000001000397e4
- (void)notificationsManagerDidReceiveFirstUnlockNotification:(id)arg1;	// IMP=0x00000001000396cc
- (void)notificationsManager:(id)arg1 didReceiveApplicationInstallationNotification:(id)arg2;	// IMP=0x0000000100039598
- (void)notificationsManager:(id)arg1 didReceiveFamilyDeletionEventNotification:(id)arg2;	// IMP=0x0000000100039420
- (void)notificationsManager:(id)arg1 didReceiveAuthServiceTokenDidChangeNotification:(id)arg2;	// IMP=0x0000000100039314
- (void)notificationsManager:(id)arg1 didReceiveSubscriptionStatusDidChangeNotification:(id)arg2;	// IMP=0x000000010003918c
- (void)notificationsManager:(id)arg1 didReceiveAllowsExplicitContentDidChangeNotification:(id)arg2;	// IMP=0x0000000100038fb0
- (void)notificationsManagerDidReceiveCloudAuthenticationDidChangeDarwinNotification:(id)arg1;	// IMP=0x0000000100038e58
- (void)notificationsManagerDidReceiveCellularDataRestrictionDidChangeDarwinNotification:(id)arg1;	// IMP=0x0000000100038bc4
- (void)notificationsManagerDidReceiveLibraryImportDidFinishDarwinNotification:(id)arg1;	// IMP=0x00000001000389f0
- (void)notificationsManagerDidReceiveBuddySetupDoneDarwinNotification:(id)arg1;	// IMP=0x0000000100038864
- (void)notificationsManagerDidReceiveAccountChangeDarwinNotification:(id)arg1;	// IMP=0x00000001000387d8
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100038314
- (long long)_ICCloudServerSupportedServiceForXPCListener:(id)arg1;	// IMP=0x0000000100038214
- (id)_setupXPCListenerForService:(long long)arg1;	// IMP=0x000000010003810c
- (void)getListenerEndpointForService:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100037edc
- (id)handlerWithType:(long long)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000379c0
- (void)scheduleBackgroundUpdateType:(long long)arg1 forConfiguration:(id)arg2;	// IMP=0x000000010003794c
- (void)listCloudServerOperations;	// IMP=0x0000000100037904
- (id)daemonOptionsForConfiguration:(id)arg1;	// IMP=0x0000000100037424
- (void)enumerateBackgroundOperationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000373b8
- (void)enumerateOperationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010003734c
- (_Bool)hasOperationsOfClass:(Class)arg1;	// IMP=0x00000001000372f8
- (_Bool)cancelOperationsByClass:(Class)arg1;	// IMP=0x00000001000372a4
- (void)addBackgroundOperation:(id)arg1 priority:(int)arg2;	// IMP=0x0000000100037230
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x00000001000371bc
- (void)stop;	// IMP=0x0000000100037044
- (void)start;	// IMP=0x0000000100036f60
- (id)_stateDump;	// IMP=0x0000000100036f0c
- (void)dealloc;	// IMP=0x0000000100036e30
- (id)_init;	// IMP=0x0000000100036cfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

