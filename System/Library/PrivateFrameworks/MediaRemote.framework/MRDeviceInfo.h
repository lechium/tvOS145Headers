/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSArray, _MRDeviceInfoMessageProtobuf, NSDictionary;

@interface MRDeviceInfo : NSObject <NSCopying> {

	BOOL _hasDeviceClass;
	BOOL _hasProtocolVersion;
	BOOL _hasGroupedDeviceCount;
	BOOL _hasSharedQueueVersion;
	BOOL _hasGroupLogicalDeviceCount;
	BOOL _supportsSystemPairing;
	BOOL _hasSupportsSystemPairing;
	BOOL _supportsACL;
	BOOL _hasSupportsACL;
	BOOL _supportsSharedQueue;
	BOOL _hasSupportsSharedQueue;
	BOOL _supportsExtendedMotion;
	BOOL _hasSupportsExtendedMotion;
	BOOL _tightSyncGroup;
	BOOL _hasTightSyncGroup;
	BOOL _pairingAllowed;
	BOOL _hasPairingAllowed;
	BOOL _proxyGroupPlayer;
	BOOL _hasProxyGroupPlayer;
	BOOL _connected;
	BOOL _hasConnected;
	BOOL _groupLeader;
	BOOL _hasGroupLeader;
	BOOL _airPlayActive;
	BOOL _hasAirPlayActive;
	BOOL _clusterAware;
	unsigned _clusterType;
	long long _deviceClass;
	unsigned long long _protocolVersion;
	unsigned long long _groupedDeviceCount;
	unsigned long long _sharedQueueVersion;
	unsigned long long _groupLogicalDeviceCount;
	NSString* _name;
	NSString* _identifier;
	NSString* _localizedModelName;
	NSString* _buildVersion;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSString* _systemMediaApplication;
	NSString* _systemPodcastApplication;
	NSString* _deviceUID;
	NSString* _localReceiverPairingIdentity;
	NSString* _managedConfigurationDeviceIdentifier;
	NSString* _tightSyncUID;
	NSString* _groupUID;
	NSString* _groupName;
	NSString* _senderDefaultGroupUID;
	NSData* _bluetoothAddress;
	NSArray* _groupedDevices;
	NSArray* _airPlayReceivers;
	NSString* _linkAgent;
	NSString* _clusterID;
	NSString* _clusterLeaderID;
	NSString* _modelID;

}

@property (nonatomic,readonly) _MRDeviceInfoMessageProtobuf * protobuf; 
@property (getter=isCompanion,nonatomic,readonly) BOOL companion; 
@property (getter=isGizmo,nonatomic,readonly) BOOL gizmo; 
@property (assign,nonatomic) long long deviceClass;                                        //@synthesize deviceClass=_deviceClass - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceClass;                                          //@synthesize hasDeviceClass=_hasDeviceClass - In the implementation block
@property (assign,nonatomic) unsigned long long protocolVersion;                           //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) BOOL hasProtocolVersion;                                      //@synthesize hasProtocolVersion=_hasProtocolVersion - In the implementation block
@property (assign,nonatomic) unsigned long long groupedDeviceCount;                        //@synthesize groupedDeviceCount=_groupedDeviceCount - In the implementation block
@property (assign,nonatomic) BOOL hasGroupedDeviceCount;                                   //@synthesize hasGroupedDeviceCount=_hasGroupedDeviceCount - In the implementation block
@property (assign,nonatomic) unsigned long long sharedQueueVersion;                        //@synthesize sharedQueueVersion=_sharedQueueVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSharedQueueVersion;                                   //@synthesize hasSharedQueueVersion=_hasSharedQueueVersion - In the implementation block
@property (assign,nonatomic) unsigned long long groupLogicalDeviceCount;                   //@synthesize groupLogicalDeviceCount=_groupLogicalDeviceCount - In the implementation block
@property (assign,nonatomic) BOOL hasGroupLogicalDeviceCount;                              //@synthesize hasGroupLogicalDeviceCount=_hasGroupLogicalDeviceCount - In the implementation block
@property (assign,nonatomic) BOOL supportsSystemPairing;                                   //@synthesize supportsSystemPairing=_supportsSystemPairing - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsSystemPairing;                                //@synthesize hasSupportsSystemPairing=_hasSupportsSystemPairing - In the implementation block
@property (assign,nonatomic) BOOL supportsACL;                                             //@synthesize supportsACL=_supportsACL - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsACL;                                          //@synthesize hasSupportsACL=_hasSupportsACL - In the implementation block
@property (assign,nonatomic) BOOL supportsSharedQueue;                                     //@synthesize supportsSharedQueue=_supportsSharedQueue - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsSharedQueue;                                  //@synthesize hasSupportsSharedQueue=_hasSupportsSharedQueue - In the implementation block
@property (assign,nonatomic) BOOL supportsExtendedMotion;                                  //@synthesize supportsExtendedMotion=_supportsExtendedMotion - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsExtendedMotion;                               //@synthesize hasSupportsExtendedMotion=_hasSupportsExtendedMotion - In the implementation block
@property (assign,getter=isTightSyncGroup,nonatomic) BOOL tightSyncGroup;                  //@synthesize tightSyncGroup=_tightSyncGroup - In the implementation block
@property (assign,nonatomic) BOOL hasTightSyncGroup;                                       //@synthesize hasTightSyncGroup=_hasTightSyncGroup - In the implementation block
@property (assign,getter=isPairingAllowed,nonatomic) BOOL pairingAllowed;                  //@synthesize pairingAllowed=_pairingAllowed - In the implementation block
@property (assign,nonatomic) BOOL hasPairingAllowed;                                       //@synthesize hasPairingAllowed=_hasPairingAllowed - In the implementation block
@property (assign,getter=isProxyGroupPlayer,nonatomic) BOOL proxyGroupPlayer;              //@synthesize proxyGroupPlayer=_proxyGroupPlayer - In the implementation block
@property (assign,nonatomic) BOOL hasProxyGroupPlayer;                                     //@synthesize hasProxyGroupPlayer=_hasProxyGroupPlayer - In the implementation block
@property (assign,getter=isConnected,nonatomic) BOOL connected;                            //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) BOOL hasConnected;                                            //@synthesize hasConnected=_hasConnected - In the implementation block
@property (assign,getter=isGroupLeader,nonatomic) BOOL groupLeader;                        //@synthesize groupLeader=_groupLeader - In the implementation block
@property (assign,nonatomic) BOOL hasGroupLeader;                                          //@synthesize hasGroupLeader=_hasGroupLeader - In the implementation block
@property (assign,getter=isAirPlayActive,nonatomic) BOOL airPlayActive;                    //@synthesize airPlayActive=_airPlayActive - In the implementation block
@property (assign,nonatomic) BOOL hasAirPlayActive;                                        //@synthesize hasAirPlayActive=_hasAirPlayActive - In the implementation block
@property (nonatomic,copy) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * localizedModelName;                                  //@synthesize localizedModelName=_localizedModelName - In the implementation block
@property (nonatomic,copy) NSString * buildVersion;                                        //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                       //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * systemMediaApplication;                              //@synthesize systemMediaApplication=_systemMediaApplication - In the implementation block
@property (nonatomic,copy) NSString * systemPodcastApplication;                            //@synthesize systemPodcastApplication=_systemPodcastApplication - In the implementation block
@property (nonatomic,copy) NSString * deviceUID;                                           //@synthesize deviceUID=_deviceUID - In the implementation block
@property (nonatomic,copy) NSString * localReceiverPairingIdentity;                        //@synthesize localReceiverPairingIdentity=_localReceiverPairingIdentity - In the implementation block
@property (nonatomic,copy) NSString * managedConfigurationDeviceIdentifier;                //@synthesize managedConfigurationDeviceIdentifier=_managedConfigurationDeviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * tightSyncUID;                                        //@synthesize tightSyncUID=_tightSyncUID - In the implementation block
@property (nonatomic,copy) NSString * groupUID;                                            //@synthesize groupUID=_groupUID - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                           //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy) NSString * senderDefaultGroupUID;                               //@synthesize senderDefaultGroupUID=_senderDefaultGroupUID - In the implementation block
@property (nonatomic,copy) NSData * bluetoothAddress;                                      //@synthesize bluetoothAddress=_bluetoothAddress - In the implementation block
@property (nonatomic,copy) NSArray * groupedDevices;                                       //@synthesize groupedDevices=_groupedDevices - In the implementation block
@property (nonatomic,copy) NSArray * airPlayReceivers;                                     //@synthesize airPlayReceivers=_airPlayReceivers - In the implementation block
@property (nonatomic,copy) NSString * linkAgent;                                           //@synthesize linkAgent=_linkAgent - In the implementation block
@property (nonatomic,copy) NSString * clusterID;                                           //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,copy) NSString * clusterLeaderID;                                     //@synthesize clusterLeaderID=_clusterLeaderID - In the implementation block
@property (assign,nonatomic) unsigned clusterType;                                         //@synthesize clusterType=_clusterType - In the implementation block
@property (assign,getter=isClusterAware,nonatomic) BOOL clusterAware;                      //@synthesize clusterAware=_clusterAware - In the implementation block
@property (nonatomic,copy) NSString * modelID;                                             //@synthesize modelID=_modelID - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy,readonly) NSString * minimalDescription; 
@property (nonatomic,readonly) MRDeviceInfo * skeleton; 
+(long long)deviceClass;
+(id)deviceInfosFromData:(id)arg1 ;
+(id)dataFromDeviceInfos:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(long long)deviceClass;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)isConnected;
-(NSString *)bundleVersion;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)buildVersion;
-(void)setConnected:(BOOL)arg1 ;
-(void)setHasConnected:(BOOL)arg1 ;
-(BOOL)hasConnected;
-(void)setDeviceClass:(long long)arg1 ;
-(void)setHasDeviceClass:(BOOL)arg1 ;
-(BOOL)hasDeviceClass;
-(void)setProtocolVersion:(unsigned long long)arg1 ;
-(void)setHasProtocolVersion:(BOOL)arg1 ;
-(BOOL)hasProtocolVersion;
-(unsigned long long)protocolVersion;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(unsigned)clusterType;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setBuildVersion:(NSString *)arg1 ;
-(BOOL)isCompanion;
-(_MRDeviceInfoMessageProtobuf *)protobuf;
-(BOOL)supportsSharedQueue;
-(id)initWithOutputDevice:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setLocalizedModelName:(NSString *)arg1 ;
-(NSString *)localizedModelName;
-(BOOL)isProxyGroupPlayer;
-(MRDeviceInfo *)skeleton;
-(NSString *)modelID;
-(BOOL)isGroupLeader;
-(void)setModelID:(NSString *)arg1 ;
-(void)setClusterType:(unsigned)arg1 ;
-(void)setDeviceUID:(NSString *)arg1 ;
-(NSString *)deviceUID;
-(BOOL)isTightSyncGroup;
-(BOOL)hasTightSyncGroup;
-(BOOL)isPairingAllowed;
-(BOOL)hasPairingAllowed;
-(BOOL)supportsSystemPairing;
-(BOOL)hasSupportsSystemPairing;
-(BOOL)supportsACL;
-(BOOL)hasSupportsACL;
-(BOOL)hasSupportsSharedQueue;
-(unsigned long long)sharedQueueVersion;
-(BOOL)hasSharedQueueVersion;
-(BOOL)hasProxyGroupPlayer;
-(BOOL)supportsExtendedMotion;
-(BOOL)hasSupportsExtendedMotion;
-(unsigned long long)groupLogicalDeviceCount;
-(BOOL)hasGroupLogicalDeviceCount;
-(BOOL)hasGroupLeader;
-(BOOL)isAirPlayActive;
-(BOOL)hasAirPlayActive;
-(NSString *)systemMediaApplication;
-(NSString *)systemPodcastApplication;
-(NSString *)managedConfigurationDeviceIdentifier;
-(NSString *)tightSyncUID;
-(NSString *)groupUID;
-(NSString *)senderDefaultGroupUID;
-(NSData *)bluetoothAddress;
-(NSArray *)airPlayReceivers;
-(NSString *)linkAgent;
-(NSString *)clusterID;
-(NSString *)clusterLeaderID;
-(BOOL)isClusterAware;
-(NSArray *)groupedDevices;
-(NSString *)localReceiverPairingIdentity;
-(BOOL)hasGroupedDeviceCount;
-(unsigned long long)groupedDeviceCount;
-(void)setGroupUID:(NSString *)arg1 ;
-(void)setProxyGroupPlayer:(BOOL)arg1 ;
-(void)setAirPlayActive:(BOOL)arg1 ;
-(void)setGroupLeader:(BOOL)arg1 ;
-(void)setTightSyncUID:(NSString *)arg1 ;
-(void)setGroupedDeviceCount:(unsigned long long)arg1 ;
-(void)setSharedQueueVersion:(unsigned long long)arg1 ;
-(void)setGroupLogicalDeviceCount:(unsigned long long)arg1 ;
-(void)setSupportsSystemPairing:(BOOL)arg1 ;
-(void)setSupportsACL:(BOOL)arg1 ;
-(void)setSupportsSharedQueue:(BOOL)arg1 ;
-(void)setSupportsExtendedMotion:(BOOL)arg1 ;
-(void)setTightSyncGroup:(BOOL)arg1 ;
-(void)setPairingAllowed:(BOOL)arg1 ;
-(void)setSystemMediaApplication:(NSString *)arg1 ;
-(void)setSystemPodcastApplication:(NSString *)arg1 ;
-(void)setLocalReceiverPairingIdentity:(NSString *)arg1 ;
-(void)setManagedConfigurationDeviceIdentifier:(NSString *)arg1 ;
-(void)setSenderDefaultGroupUID:(NSString *)arg1 ;
-(void)setBluetoothAddress:(NSData *)arg1 ;
-(void)setGroupedDevices:(NSArray *)arg1 ;
-(void)setAirPlayReceivers:(NSArray *)arg1 ;
-(void)setLinkAgent:(NSString *)arg1 ;
-(void)setClusterID:(NSString *)arg1 ;
-(void)setClusterLeaderID:(NSString *)arg1 ;
-(void)setClusterAware:(BOOL)arg1 ;
-(id)deltaDescriptionFromDeviceInfo:(id)arg1 minimal:(BOOL)arg2 ;
-(void)setHasGroupedDeviceCount:(BOOL)arg1 ;
-(void)setHasSharedQueueVersion:(BOOL)arg1 ;
-(void)setHasGroupLogicalDeviceCount:(BOOL)arg1 ;
-(void)setHasSupportsSystemPairing:(BOOL)arg1 ;
-(void)setHasSupportsACL:(BOOL)arg1 ;
-(void)setHasSupportsSharedQueue:(BOOL)arg1 ;
-(void)setHasSupportsExtendedMotion:(BOOL)arg1 ;
-(void)setHasTightSyncGroup:(BOOL)arg1 ;
-(void)setHasPairingAllowed:(BOOL)arg1 ;
-(void)setHasProxyGroupPlayer:(BOOL)arg1 ;
-(void)setHasGroupLeader:(BOOL)arg1 ;
-(void)setHasAirPlayActive:(BOOL)arg1 ;
-(NSString *)minimalDescription;
-(BOOL)isGizmo;
-(id)deltaDescriptionFromDeviceInfo:(id)arg1 ;
-(id)minimalDeltaDescriptionFromDeviceInfo:(id)arg1 ;
@end

