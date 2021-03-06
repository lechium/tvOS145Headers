/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKContainerAssignment.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordZoneID, CKContainerID, CKServerChangeToken, NSData, NSString, CKReference, NSDate, NSArray;

@interface CKRecordZone : NSObject <CKContainerAssignment, NSSecureCoding, NSCopying> {

	BOOL _needsZoneishPCSRolled;
	BOOL _zoneKeyRollAllowed;
	BOOL _serializeProtectionData;
	int _deviceCount;
	CKRecordZoneID* _zoneID;
	unsigned long long _capabilities;
	CKContainerID* _containerID;
	CKServerChangeToken* _currentServerChangeToken;
	NSData* _clientChangeToken;
	NSData* _protectionData;
	NSString* _protectionEtag;
	NSData* _zoneishProtectionData;
	NSData* _pcsKeyID;
	NSData* _zoneishKeyID;
	CKReference* _share;
	NSString* _zonePCSLastModifierDevice;
	NSString* _previousProtectionEtag;
	long long _assetQuotaUsage;
	long long _metadataQuotaUsage;
	NSDate* _zonePCSModificationDate;
	NSArray* _invitedKeysToRemove;

}

@property (nonatomic,copy) CKContainerID * containerID;                                   //@synthesize containerID=_containerID - In the implementation block
@property (assign,nonatomic) int deviceCount;                                             //@synthesize deviceCount=_deviceCount - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * currentServerChangeToken;              //@synthesize currentServerChangeToken=_currentServerChangeToken - In the implementation block
@property (nonatomic,retain) NSData * clientChangeToken;                                  //@synthesize clientChangeToken=_clientChangeToken - In the implementation block
@property (nonatomic,retain) NSData * protectionData;                                     //@synthesize protectionData=_protectionData - In the implementation block
@property (nonatomic,retain) NSString * protectionEtag;                                   //@synthesize protectionEtag=_protectionEtag - In the implementation block
@property (nonatomic,retain) NSData * zoneishProtectionData;                              //@synthesize zoneishProtectionData=_zoneishProtectionData - In the implementation block
@property (nonatomic,retain) NSData * pcsKeyID;                                           //@synthesize pcsKeyID=_pcsKeyID - In the implementation block
@property (nonatomic,retain) NSData * zoneishKeyID;                                       //@synthesize zoneishKeyID=_zoneishKeyID - In the implementation block
@property (nonatomic,retain) CKReference * share;                                         //@synthesize share=_share - In the implementation block
@property (assign,nonatomic) BOOL needsZoneishPCSRolled;                                  //@synthesize needsZoneishPCSRolled=_needsZoneishPCSRolled - In the implementation block
@property (assign,nonatomic) BOOL zoneKeyRollAllowed;                                     //@synthesize zoneKeyRollAllowed=_zoneKeyRollAllowed - In the implementation block
@property (nonatomic,retain) NSString * zonePCSLastModifierDevice;                        //@synthesize zonePCSLastModifierDevice=_zonePCSLastModifierDevice - In the implementation block
@property (nonatomic,retain) NSString * previousProtectionEtag;                           //@synthesize previousProtectionEtag=_previousProtectionEtag - In the implementation block
@property (assign,nonatomic) long long assetQuotaUsage;                                   //@synthesize assetQuotaUsage=_assetQuotaUsage - In the implementation block
@property (assign,nonatomic) long long metadataQuotaUsage;                                //@synthesize metadataQuotaUsage=_metadataQuotaUsage - In the implementation block
@property (nonatomic,retain) NSDate * zonePCSModificationDate;                            //@synthesize zonePCSModificationDate=_zonePCSModificationDate - In the implementation block
@property (assign,nonatomic) BOOL serializeProtectionData;                                //@synthesize serializeProtectionData=_serializeProtectionData - In the implementation block
@property (nonatomic,retain) NSArray * invitedKeysToRemove;                               //@synthesize invitedKeysToRemove=_invitedKeysToRemove - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * zoneID;                                       //@synthesize zoneID=_zoneID - In the implementation block
@property (assign,nonatomic) unsigned long long capabilities;                             //@synthesize capabilities=_capabilities - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultRecordZone;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKRecordZoneID *)zoneID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(unsigned long long)capabilities;
-(CKContainerID *)containerID;
-(id)initWithZoneName:(id)arg1 ;
-(id)initWithZoneID:(id)arg1 ;
-(void)setCapabilities:(unsigned long long)arg1 ;
-(void)setDeviceCount:(int)arg1 ;
-(int)deviceCount;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(id)CKPropertiesDescription;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSData *)pcsKeyID;
-(void)setPcsKeyID:(NSData *)arg1 ;
-(NSData *)zoneishKeyID;
-(void)setZoneishKeyID:(NSData *)arg1 ;
-(CKReference *)share;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(BOOL)serializeProtectionData;
-(void)setSerializeProtectionData:(BOOL)arg1 ;
-(NSData *)protectionData;
-(void)setProtectionData:(NSData *)arg1 ;
-(NSString *)previousProtectionEtag;
-(void)setPreviousProtectionEtag:(NSString *)arg1 ;
-(NSString *)protectionEtag;
-(void)setProtectionEtag:(NSString *)arg1 ;
-(void)setShare:(CKReference *)arg1 ;
-(NSArray *)invitedKeysToRemove;
-(void)setInvitedKeysToRemove:(NSArray *)arg1 ;
-(id)_initZoneWithIdentifier:(id)arg1 capabilities:(unsigned long long)arg2 ;
-(NSData *)clientChangeToken;
-(void)setClientChangeToken:(NSData *)arg1 ;
-(CKServerChangeToken *)currentServerChangeToken;
-(void)setCurrentServerChangeToken:(CKServerChangeToken *)arg1 ;
-(long long)assetQuotaUsage;
-(void)setAssetQuotaUsage:(long long)arg1 ;
-(long long)metadataQuotaUsage;
-(void)setMetadataQuotaUsage:(long long)arg1 ;
-(NSDate *)zonePCSModificationDate;
-(void)setZonePCSModificationDate:(NSDate *)arg1 ;
-(NSData *)zoneishProtectionData;
-(void)setZoneishProtectionData:(NSData *)arg1 ;
-(BOOL)zoneKeyRollAllowed;
-(void)setZoneKeyRollAllowed:(BOOL)arg1 ;
-(BOOL)needsZoneishPCSRolled;
-(void)setNeedsZoneishPCSRolled:(BOOL)arg1 ;
-(NSString *)zonePCSLastModifierDevice;
-(void)setZonePCSLastModifierDevice:(NSString *)arg1 ;
@end

