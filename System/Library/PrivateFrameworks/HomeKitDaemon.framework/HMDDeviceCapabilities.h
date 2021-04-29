/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMDBackingStoreModelBackedObjectProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDDeviceCapabilitiesModel, NSUUID, NSString;

@interface HMDDeviceCapabilities : HMFObject <HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, NSCopying, NSSecureCoding> {

	os_unfair_lock_s _lock;
	HMDDeviceCapabilitiesModel* _objectModel;

}

@property (nonatomic,copy) NSUUID * modelParentIdentifier; 
@property (nonatomic,readonly) BOOL supportsKeychainSync; 
@property (nonatomic,readonly) BOOL supportsDeviceSetup; 
@property (nonatomic,readonly) BOOL supportsKeyTransferClient; 
@property (nonatomic,readonly) BOOL supportsKeyTransferServer; 
@property (nonatomic,readonly) BOOL supportsStandaloneMode; 
@property (nonatomic,readonly) BOOL supportsCloudDataSync; 
@property (nonatomic,readonly) BOOL supportsWholeHouseAudio; 
@property (nonatomic,readonly) BOOL supportsAssistantAccessControl; 
@property (getter=isResidentCapable,nonatomic,readonly) BOOL residentCapable; 
@property (getter=isRemoteGatewayCapable,nonatomic,readonly) BOOL remoteGatewayCapable; 
@property (nonatomic,readonly) BOOL supportsHomeInvitation; 
@property (nonatomic,readonly) BOOL supportsTargetControl; 
@property (nonatomic,readonly) BOOL supportsMultiUser; 
@property (nonatomic,readonly) BOOL supportsAudioReturnChannel; 
@property (nonatomic,readonly) BOOL supportsCompanionInitiatedRestart; 
@property (nonatomic,readonly) BOOL supportsCameraRecording; 
@property (nonatomic,readonly) BOOL supportsRouterManagement; 
@property (nonatomic,readonly) BOOL supportsShortcutActions; 
@property (nonatomic,readonly) BOOL supportsMediaActions; 
@property (nonatomic,readonly) BOOL supportsCameraSignificantEventNotifications; 
@property (nonatomic,readonly) BOOL supportsFirmwareUpdate; 
@property (nonatomic,readonly) BOOL supportsCameraActivityZones; 
@property (nonatomic,readonly) BOOL supportsMusicAlarm; 
@property (nonatomic,readonly) BOOL supportsFaceClassification; 
@property (nonatomic,readonly) BOOL supportsNaturalLighting; 
@property (nonatomic,readonly) BOOL supportsIDSActivityMonitorPresence; 
@property (nonatomic,readonly) BOOL supportsCameraRecordingReachabilityNotifications; 
@property (nonatomic,readonly) BOOL supportsAnnounce; 
@property (readonly) BOOL supportsThirdPartyMusic; 
@property (readonly) BOOL supportsPreferredMediaUser; 
@property (readonly) BOOL supportsDoorbellChime; 
@property (nonatomic,readonly) BOOL supportsThreadBorderRouter; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Class modelClass; 
@property (nonatomic,copy,readonly) NSUUID * modelIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)deviceCapabilities;
+(BOOL)isCompanionCapable;
+(BOOL)supportsLocalization;
+(BOOL)supportsRemoteAccess;
+(BOOL)supportsAddingAccessory;
+(BOOL)supportsBulletinBoard;
+(BOOL)supportsDeviceLock;
+(unsigned long long)supportedPairingCapabilities;
+(BOOL)supportsUserNotifications;
+(BOOL)supportsReceivingRemoteCameraStream;
+(BOOL)supportsBackboard;
+(BOOL)isAppleMediaAccessory;
+(BOOL)supportsSymptomsHandler;
+(BOOL)supportsTargetControllerAutoConfigure;
+(BOOL)supportsBidirectionalAudioForCameraStreaming;
+(BOOL)supportsCustomerReset;
+(BOOL)supportsStereoPairingV1;
+(BOOL)supportsStereoPairingV2;
+(BOOL)supportsAudioDestinationControllerCreation;
+(BOOL)supportsAudioDestinationCreation;
+(BOOL)supportsCameraSnapshotRequestViaRelay;
+(id)deviceCapabilitiesModelIdentifierWithParentIdentifier:(id)arg1 ;
+(BOOL)isB520;
+(BOOL)isB238;
+(BOOL)supportsHomeApp;
+(BOOL)supportsIntentDonation;
+(BOOL)isHomePodMini;
+(BOOL)requiresHomePodPairing;
+(BOOL)supportsDismissUserNotificationAndDialog;
+(BOOL)supportsSyncingToSharedUsers;
+(BOOL)supportsHomeKitDataStream;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)modelIdentifier;
-(Class)modelClass;
-(id)initWithObjectModel:(id)arg1 ;
-(id)attributeDescriptions;
-(BOOL)supportsTargetControl;
-(BOOL)supportsMultiUser;
-(BOOL)supportsAudioReturnChannel;
-(BOOL)supportsCompanionInitiatedRestart;
-(BOOL)supportsMusicAlarm;
-(BOOL)supportsAnnounce;
-(BOOL)supportsDoorbellChime;
-(BOOL)supportsThirdPartyMusic;
-(BOOL)supportsPreferredMediaUser;
-(BOOL)supportsNaturalLighting;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(BOOL)supportsShortcutActions;
-(BOOL)supportsMediaActions;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(BOOL)supportsCameraActivityZones;
-(BOOL)supportsFaceClassification;
-(BOOL)supportsCameraRecording;
-(BOOL)isResidentCapable;
-(BOOL)isRemoteGatewayCapable;
-(BOOL)supportsCameraRecordingReachabilityNotifications;
-(BOOL)supportsKeyTransferServer;
-(BOOL)supportsFirmwareUpdate;
-(BOOL)supportsKeychainSync;
-(BOOL)supportsDeviceSetup;
-(BOOL)supportsWholeHouseAudio;
-(id)modelBackedObjects;
-(NSUUID *)modelParentIdentifier;
-(void)setModelParentIdentifier:(NSUUID *)arg1 ;
-(id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(BOOL)supportsCloudDataSync;
-(BOOL)supportsStandaloneMode;
-(BOOL)supportsRouterManagement;
-(BOOL)supportsCameraSignificantEventNotifications;
-(BOOL)supportsThreadBorderRouter;
-(BOOL)supportsKeyTransferClient;
-(id)initWithProductInfo:(id)arg1 homekitVersion:(id)arg2 ;
-(BOOL)supportsAssistantAccessControl;
-(BOOL)supportsHomeInvitation;
-(BOOL)supportsIDSActivityMonitorPresence;
-(id)initWithProductInfo:(id)arg1 ;
@end

