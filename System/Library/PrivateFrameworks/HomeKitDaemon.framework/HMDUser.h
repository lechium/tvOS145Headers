/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDCloudShareTrustManagerDataSource.h>
#import <libobjc.A.dylib/HMDCloudShareTrustManagerDelegate.h>
#import <libobjc.A.dylib/HMDUserDataControllerDelegate.h>
#import <libobjc.A.dylib/HMDUserSettingsBackingStoreControllerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMDSettingsControllerDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMFLocking, OS_dispatch_queue, HMDUserDataSource;
@class NSUUID, NSObject, NSMutableArray, HMDAccountHandle, HMDAccountIdentifier, HMDHome, NSString, HMUserPresenceAuthorization, NSNumber, HAPPairingIdentity, HMDAssistantAccessControl, HMBShareUserID, NAFuture, HMDUserPhotosPersonDataManager, HMDPersonSettingsManager, HMDSettingsControllerDependency, HMDCloudShareMessenger, HMDUserSettingsBackingStoreController, HMFMessageDispatcher, HMDCloudShareTrustManager, HMDUserDataController, AVOutputDeviceAuthorizedPeer, HMPhotosPersonManagerSettings, HMDPhotosPersonManager, NSSet;

@interface HMDUser : HMFObject <HMDCloudShareTrustManagerDataSource, HMDCloudShareTrustManagerDelegate, HMDUserDataControllerDelegate, HMDUserSettingsBackingStoreControllerDelegate, HMFLogging, HMFDumpState, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, HMDSettingsControllerDelegate, NSSecureCoding> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSUUID* _uuid;
	BOOL _remoteAccessAllowed;
	NSMutableArray* _relayAccessTokens;
	HMDAccountHandle* _accountHandle;
	HMDAccountIdentifier* _accountIdentifier;
	BOOL _needsiTunesMultiUserRepair;
	unsigned long long _privilege;
	HMDHome* _home;
	NSString* _userID;
	HMUserPresenceAuthorization* _presenceAuthStatus;
	NSString* _relayIdentifier;
	NSNumber* _camerasAccessLevelValue;
	HAPPairingIdentity* _pairingIdentity;
	NSString* _displayName;
	HMDAssistantAccessControl* _assistantAccessControl;
	unsigned long long _announceAccessLevel;
	long long _userCloudShareWithOwnerMessagingState;
	HMBShareUserID* _cloudShareID;
	NAFuture* _cloudShareIDFuture;
	HMDUserPhotosPersonDataManager* _photosPersonDataManager;
	HMDPersonSettingsManager* _personSettingsManager;
	HMDSettingsControllerDependency* _sharedSettingsControllerDependency;
	HMDCloudShareMessenger* _shareMessenger;
	HMDSettingsControllerDependency* _privateSettingsControllerDependency;
	HMDUserSettingsBackingStoreController* _privateBackingStoreController;
	id<HMDUserDataSource> _dataSource;
	HMFMessageDispatcher* _messageDispatcher;
	unsigned long long _announceNotificationModeForCurrentDevice;
	HMDCloudShareTrustManager* _cloudShareTrustManager;
	HMDUserSettingsBackingStoreController* _sharedBackingStoreController;
	HMDUserDataController* _userDataController;

}

@property (copy,readonly) AVOutputDeviceAuthorizedPeer * av_authorizedPeer; 
@property (readonly) BOOL hasCameraClipsAccess; 
@property (nonatomic,copy,readonly) NSString * encodingRemoteDisplayName; 
@property (retain) HMDAssistantAccessControl * assistantAccessControl;                                 //@synthesize assistantAccessControl=_assistantAccessControl - In the implementation block
@property (retain) HMDSettingsControllerDependency * sharedSettingsControllerDependency;               //@synthesize sharedSettingsControllerDependency=_sharedSettingsControllerDependency - In the implementation block
@property (retain) HMDCloudShareMessenger * shareMessenger;                                            //@synthesize shareMessenger=_shareMessenger - In the implementation block
@property (retain) HMDSettingsControllerDependency * privateSettingsControllerDependency;              //@synthesize privateSettingsControllerDependency=_privateSettingsControllerDependency - In the implementation block
@property (retain) HMDUserSettingsBackingStoreController * privateBackingStoreController;              //@synthesize privateBackingStoreController=_privateBackingStoreController - In the implementation block
@property (retain) HMDUserPhotosPersonDataManager * photosPersonDataManager;                           //@synthesize photosPersonDataManager=_photosPersonDataManager - In the implementation block
@property (retain) HMDPersonSettingsManager * personSettingsManager;                                   //@synthesize personSettingsManager=_personSettingsManager - In the implementation block
@property (assign) BOOL needsiTunesMultiUserRepair;                                                    //@synthesize needsiTunesMultiUserRepair=_needsiTunesMultiUserRepair - In the implementation block
@property (readonly) id<HMDUserDataSource> dataSource;                                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (setter=setUUID:,copy) NSUUID * uuid;                                                        //@synthesize uuid=_uuid - In the implementation block
@property (retain) HMFMessageDispatcher * messageDispatcher;                                           //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (retain) HMBShareUserID * cloudShareID;                                                      //@synthesize cloudShareID=_cloudShareID - In the implementation block
@property (__weak) HMDHome * home;                                                                     //@synthesize home=_home - In the implementation block
@property (copy) HMUserPresenceAuthorization * presenceAuthStatus;                                     //@synthesize presenceAuthStatus=_presenceAuthStatus - In the implementation block
@property (assign) unsigned long long privilege;                                                       //@synthesize privilege=_privilege - In the implementation block
@property (getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed;                                     //@synthesize remoteAccessAllowed=_remoteAccessAllowed - In the implementation block
@property (nonatomic,retain) NSNumber * camerasAccessLevelValue;                                       //@synthesize camerasAccessLevelValue=_camerasAccessLevelValue - In the implementation block
@property (assign) unsigned long long announceAccessLevel;                                             //@synthesize announceAccessLevel=_announceAccessLevel - In the implementation block
@property (assign) unsigned long long announceNotificationModeForCurrentDevice;                        //@synthesize announceNotificationModeForCurrentDevice=_announceNotificationModeForCurrentDevice - In the implementation block
@property (copy) HAPPairingIdentity * pairingIdentity;                                                 //@synthesize pairingIdentity=_pairingIdentity - In the implementation block
@property (copy) HMDAccountIdentifier * accountIdentifier; 
@property (retain) HMDCloudShareTrustManager * cloudShareTrustManager;                                 //@synthesize cloudShareTrustManager=_cloudShareTrustManager - In the implementation block
@property (retain) HMDUserSettingsBackingStoreController * sharedBackingStoreController;               //@synthesize sharedBackingStoreController=_sharedBackingStoreController - In the implementation block
@property (retain) HMDUserDataController * userDataController;                                         //@synthesize userDataController=_userDataController - In the implementation block
@property (copy) NSString * relayIdentifier;                                                           //@synthesize relayIdentifier=_relayIdentifier - In the implementation block
@property (copy) NSString * userID;                                                                    //@synthesize userID=_userID - In the implementation block
@property (assign) long long userCloudShareWithOwnerMessagingState;                                    //@synthesize userCloudShareWithOwnerMessagingState=_userCloudShareWithOwnerMessagingState - In the implementation block
@property (readonly) NAFuture * cloudShareIDFuture;                                                    //@synthesize cloudShareIDFuture=_cloudShareIDFuture - In the implementation block
@property (copy,readonly) NSString * displayName;                                                      //@synthesize displayName=_displayName - In the implementation block
@property (getter=isAdministrator,readonly) BOOL administrator; 
@property (getter=isOwner,readonly) BOOL owner; 
@property (getter=isRemoteGateway,readonly) BOOL remoteGateway; 
@property (getter=isCurrentUser,readonly) BOOL currentUser; 
@property (getter=isValid,readonly) BOOL valid; 
@property (readonly) NSUUID * assistantAccessControlModelUUID; 
@property (copy,readonly) HMPhotosPersonManagerSettings * photosPersonManagerSettings; 
@property (readonly) HMDPhotosPersonManager * photosPersonManager; 
@property (getter=isAnnounceAccessAllowed,readonly) BOOL announceAccessAllowed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * userUUID; 
@property (readonly) BOOL isRunningOnHomeOwnersDevice; 
@property (readonly) BOOL isCurrentUser; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
+(id)currentUserWithPrivilege:(unsigned long long)arg1 forHome:(id)arg2 ;
+(id)userWithDictionary:(id)arg1 forHome:(id)arg2 ;
+(id)userIDForAccountHandle:(id)arg1 ;
+(id)UUIDWithUserID:(id)arg1 forHomeIdentifier:(id)arg2 uuid:(id)arg3 pairingIdentity:(id)arg4 ;
+(id)ownerWithUserID:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 homeManager:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(id)publicKey;
-(NSUUID *)uuid;
-(id)shortDescription;
-(void)setAccountIdentifier:(HMDAccountIdentifier *)arg1 ;
-(HMDAccountIdentifier *)accountIdentifier;
-(void)setUUID:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id<HMDUserDataSource>)dataSource;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(id)account;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(BOOL)isCurrentUser;
-(BOOL)isOwner;
-(NSUUID *)userUUID;
-(id)dumpState;
-(BOOL)isAdministrator;
-(id)initWithModelObject:(id)arg1 ;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(HAPPairingIdentity *)pairingIdentity;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMFMessageDispatcher *)messageDispatcher;
-(id)messageDestination;
-(BOOL)isRemoteAccessAllowed;
-(BOOL)isAnnounceAccessAllowed;
-(void)setRemoteAccessAllowed:(BOOL)arg1 ;
-(HMUserPresenceAuthorization *)presenceAuthStatus;
-(void)setPresenceAuthStatus:(HMUserPresenceAuthorization *)arg1 ;
-(unsigned long long)camerasAccessLevel;
-(void)unconfigure;
-(HMDPhotosPersonManager *)photosPersonManager;
-(HMPhotosPersonManagerSettings *)photosPersonManagerSettings;
-(HMDPersonSettingsManager *)personSettingsManager;
-(void)registerForMessages;
-(void)setAssistantAccessControl:(HMDAssistantAccessControl *)arg1 ;
-(HMDAssistantAccessControl *)assistantAccessControl;
-(void)setPairingIdentity:(HAPPairingIdentity *)arg1 ;
-(BOOL)needsiTunesMultiUserRepair;
-(void)setNeedsiTunesMultiUserRepair:(BOOL)arg1 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(void)setMessageDispatcher:(HMFMessageDispatcher *)arg1 ;
-(id)pairingUsername;
-(void)configureWithHome:(id)arg1 ;
-(unsigned long long)privilege;
-(HMBShareUserID *)cloudShareID;
-(BOOL)refreshDisplayName;
-(BOOL)isRemoteGateway;
-(id)dictionaryEncoding;
-(id)relayAccessTokenForAccessory:(id)arg1 ;
-(void)_handleAssistantAccessControlUpdate:(id)arg1 ;
-(void)_handleMediaContentProfileAccessControlUpdate:(id)arg1 ;
-(void)handleAssistantAccessControlUpdate:(id)arg1 ;
-(void)handleMediaContentProfileAccessControlUpdate:(id)arg1 ;
-(void)addRelayAccessToken:(id)arg1 ;
-(void)handleRemovedAccessory:(id)arg1 ;
-(void)removeCloudData;
-(id)initWithAccountHandle:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4 ;
-(void)setCamerasAccessLevelValue:(NSNumber *)arg1 ;
-(void)setAnnounceAccessLevel:(unsigned long long)arg1 ;
-(void)setPrivilege:(unsigned long long)arg1 ;
-(NSString *)relayIdentifier;
-(void)updateRelayIdentifier:(id)arg1 ;
-(BOOL)updateAdministrator:(BOOL)arg1 ;
-(BOOL)requiresMakoSupport;
-(id)privateSettingValuesByKeyPathForAWD;
-(id)sharedSettingValuesByKeyPathForAWD;
-(void)migrateCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAccessoriesFromAssistantAccessControlList:(id)arg1 ;
-(id)accountHandle;
-(void)setAccountHandle:(id)arg1 ;
-(id)updatePhotosPersonManagerSettings:(id)arg1 ;
-(BOOL)isRunningOnHomeOwnersDevice;
-(id)ownerForUserSettingsBackingStoreController:(id)arg1 ;
-(HMDCloudShareMessenger *)shareMessenger;
-(void)didStartLocalZoneForBackingStoreController:(id)arg1 ;
-(id)backingStoreController:(id)arg1 createParticipantManagerForCloudZone:(id)arg2 ;
-(void)didStartBackingStoreController:(id)arg1 ;
-(void)backingStoreController:(id)arg1 didUpdatePhotosPersonManagerSettingsModel:(id)arg2 previousPhotosPersonManagerSettingsModel:(id)arg3 ;
-(void)didStopBackingStoreController:(id)arg1 ;
-(HMDUserPhotosPersonDataManager *)photosPersonDataManager;
-(BOOL)hasCameraClipsAccess;
-(unsigned long long)announceNotificationModeForCurrentDevice;
-(id)homeForCloudShareTrustManager:(id)arg1 ;
-(id)zoneNameForCloudShareTrustManager:(id)arg1 ;
-(BOOL)isOwnerCapableForTrustManager:(id)arg1 ;
-(id)ownerForCloudShareTrustManager:(id)arg1 ;
-(void)cloudShareTrustManager:(id)arg1 didFetchOwnerCloudShareID:(id)arg2 ;
-(void)didFinishConfiguringForCloudShareTrustManager:(id)arg1 ;
-(void)didRemoveTrustZoneInCloudShareTrustManager:(id)arg1 ;
-(void)updateCloudShareID:(id)arg1 ;
-(void)cloudShareTrustManager:(id)arg1 didRemoveUserWithUUID:(id)arg2 ;
-(BOOL)cloudShareTrustManager:(id)arg1 shouldShareTrustWithUser:(id)arg2 ;
-(BOOL)hasDeviceWithHomeKitVersionGreaterThanVersion:(id)arg1 ;
-(AVOutputDeviceAuthorizedPeer *)av_authorizedPeer;
-(void)setRelayIdentifier:(NSString *)arg1 ;
-(void)settingsController:(id)arg1 didUpdateWithCompletion:(/*^block*/id)arg2 ;
-(id)settingsController:(id)arg1 willUpdateSettingAtKeyPath:(id)arg2 withValue:(id)arg3 ;
-(id)settingsControllerFollowerKeyPaths:(id)arg1 ;
-(NSUUID *)assistantAccessControlModelUUID;
-(void)__handleAddedAccount:(id)arg1 ;
-(NAFuture *)cloudShareIDFuture;
-(void)__handleRemovedAccount:(id)arg1 ;
-(void)removeRelayAccessToken:(id)arg1 ;
-(id)pushTokensForDevicesObservingSubjectDevice:(id)arg1 subActivity:(id)arg2 ;
-(id)sharedZoneControllerForUserDataController:(id)arg1 ;
-(id)privateZoneControllerForUserDataController:(id)arg1 ;
-(BOOL)userDataController:(id)arg1 isPersonalRequestCapableAccessoryID:(id)arg2 ;
-(BOOL)userDataController:(id)arg1 isAppleMediaAccessory:(id)arg2 ;
-(BOOL)userDataController:(id)arg1 isMediaContentProfileCapableAccessoryID:(id)arg2 ;
-(void)userDataControllerDidUpdateAssistantAccessControl:(id)arg1 ;
-(void)userDataControllerDidUpdateMediaContentProfile:(id)arg1 ;
-(HMDUserDataController *)userDataController;
-(id)initWithAccountHandle:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4 dataSource:(id)arg5 ;
-(unsigned long long)announceAccessLevel;
-(id)relayAccessTokens;
-(void)configureCloudShareTrustManager;
-(void)initializeUserSettingsWithHome:(id)arg1 ;
-(void)registerIdentity;
-(void)setPrivateBackingStoreController:(HMDUserSettingsBackingStoreController *)arg1 ;
-(void)setPrivateSettingsControllerDependency:(HMDSettingsControllerDependency *)arg1 ;
-(HMDSettingsControllerDependency *)privateSettingsControllerDependency;
-(HMDUserSettingsBackingStoreController *)privateBackingStoreController;
-(void)setShareMessenger:(HMDCloudShareMessenger *)arg1 ;
-(void)setSharedBackingStoreController:(HMDUserSettingsBackingStoreController *)arg1 ;
-(void)setSharedSettingsControllerDependency:(HMDSettingsControllerDependency *)arg1 ;
-(HMDSettingsControllerDependency *)sharedSettingsControllerDependency;
-(HMDUserSettingsBackingStoreController *)sharedBackingStoreController;
-(void)setUserDataController:(HMDUserDataController *)arg1 ;
-(void)_recoverUserSettingsDueToUUIDChange;
-(void)_recoverTrustManagerDueToUUIDChange;
-(void)updateSharedBackingStoreControllerParticipants;
-(HMDCloudShareTrustManager *)cloudShareTrustManager;
-(void)setCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1 ;
-(void)deregisterForMessages;
-(void)_handlePairingIdentityRequest:(id)arg1 ;
-(void)_handleShareLookupInfoRequest:(id)arg1 ;
-(void)_handleMultiUserSharePayloadRequest:(id)arg1 ;
-(void)_handleShareClientRepairRequest:(id)arg1 ;
-(void)_handleNeedsiTunesMultiUserRepair:(id)arg1 ;
-(void)_handleAnnounceSettingsUpdate:(id)arg1 ;
-(long long)userCloudShareWithOwnerMessagingState;
-(void)_handleCloudShareWithOwnerMessageError;
-(void)_sendSecureShareClientPayloadToMostEligibleDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sendAccountMessage:(id)arg1 payload:(id)arg2 deviceCapabilities:(id)arg3 multicast:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(NSNumber *)camerasAccessLevelValue;
-(unsigned long long)defaultAnnounceUserAccessLevel;
-(BOOL)isCurrentUserAndOwner;
-(void)setAnnounceNotificationModeForCurrentDevice:(unsigned long long)arg1 ;
-(void)setPhotosPersonDataManager:(HMDUserPhotosPersonDataManager *)arg1 ;
-(void)setPersonSettingsManager:(HMDPersonSettingsManager *)arg1 ;
-(unsigned long long)_compatiblePrivilege;
-(NSString *)encodingRemoteDisplayName;
-(void)_transactionUserUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(id)_relayAccessTokenForIdentifier:(id)arg1 ;
-(void)_addRelayAccessToken:(id)arg1 ;
-(void)recoverUserCloudDataDueToUUIDChangeFromOldUUID:(id)arg1 ;
-(void)_removeRelayAccessToken:(id)arg1 ;
-(void)_fixupRelayAccessTokens;
-(id)announceUserSettingsModelWithChangeType:(unsigned long long)arg1 ;
-(void)postUserSettingsUpdatedNotificationWithReason:(id)arg1 ;
-(void)configurePersonSettingsManager;
-(void)configurePhotosPersonDataManager;
-(void)setCloudShareID:(HMBShareUserID *)arg1 ;
-(id)trustTargetUUID;
-(void)setUserCloudShareWithOwnerMessagingState:(long long)arg1 ;
-(void)deregisterIdentity;
-(BOOL)containsRelayAccessToken:(id)arg1 ;
-(void)_migrateRelayAccessTokensCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeCloudShareID;
-(void)registerIDSActivityObserver:(id)arg1 subActivity:(id)arg2 subjectDevice:(id)arg3 ;
-(void)updateIDSActivityObserver:(id)arg1 ;
-(void)deregisterIDSActivityObserver:(id)arg1 subActivity:(id)arg2 subjectDevice:(id)arg3 ;
-(void)deregisterIDSActivityObserver:(id)arg1 ;
@end
