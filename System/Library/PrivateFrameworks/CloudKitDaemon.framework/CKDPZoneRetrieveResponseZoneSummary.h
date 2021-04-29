/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPZoneCapabilities, NSData, CKDPZone, NSString, CKDPDate;

@interface CKDPZoneRetrieveResponseZoneSummary : PBCodable <NSCopying> {

	long long _assetQuotaUsage;
	long long _metadataQuotaUsage;
	CKDPZoneCapabilities* _capabilities;
	NSData* _clientChangeToken;
	NSData* _currentServerContinuationToken;
	int _deviceCount;
	CKDPZone* _targetZone;
	NSString* _zonePcsModificationDevice;
	CKDPDate* _zonePcsModificationTime;
	BOOL _zoneKeyRollAllowed;
	BOOL _zoneishPcsNeedsRolled;
	SCD_Struct_CK13 _has;

}

@property (nonatomic,readonly) BOOL hasTargetZone; 
@property (nonatomic,retain) CKDPZone * targetZone;                                 //@synthesize targetZone=_targetZone - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentServerContinuationToken; 
@property (nonatomic,retain) NSData * currentServerContinuationToken;               //@synthesize currentServerContinuationToken=_currentServerContinuationToken - In the implementation block
@property (nonatomic,readonly) BOOL hasClientChangeToken; 
@property (nonatomic,retain) NSData * clientChangeToken;                            //@synthesize clientChangeToken=_clientChangeToken - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceCount; 
@property (assign,nonatomic) int deviceCount;                                       //@synthesize deviceCount=_deviceCount - In the implementation block
@property (assign,nonatomic) BOOL hasAssetQuotaUsage; 
@property (assign,nonatomic) long long assetQuotaUsage;                             //@synthesize assetQuotaUsage=_assetQuotaUsage - In the implementation block
@property (assign,nonatomic) BOOL hasMetadataQuotaUsage; 
@property (assign,nonatomic) long long metadataQuotaUsage;                          //@synthesize metadataQuotaUsage=_metadataQuotaUsage - In the implementation block
@property (nonatomic,readonly) BOOL hasCapabilities; 
@property (nonatomic,retain) CKDPZoneCapabilities * capabilities;                   //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) BOOL hasZoneishPcsNeedsRolled; 
@property (assign,nonatomic) BOOL zoneishPcsNeedsRolled;                            //@synthesize zoneishPcsNeedsRolled=_zoneishPcsNeedsRolled - In the implementation block
@property (assign,nonatomic) BOOL hasZoneKeyRollAllowed; 
@property (assign,nonatomic) BOOL zoneKeyRollAllowed;                               //@synthesize zoneKeyRollAllowed=_zoneKeyRollAllowed - In the implementation block
@property (nonatomic,readonly) BOOL hasZonePcsModificationTime; 
@property (nonatomic,retain) CKDPDate * zonePcsModificationTime;                    //@synthesize zonePcsModificationTime=_zonePcsModificationTime - In the implementation block
@property (nonatomic,readonly) BOOL hasZonePcsModificationDevice; 
@property (nonatomic,retain) NSString * zonePcsModificationDevice;                  //@synthesize zonePcsModificationDevice=_zonePcsModificationDevice - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(CKDPZoneCapabilities *)capabilities;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCapabilities:(CKDPZoneCapabilities *)arg1 ;
-(BOOL)hasCapabilities;
-(void)setDeviceCount:(int)arg1 ;
-(void)setHasDeviceCount:(BOOL)arg1 ;
-(BOOL)hasDeviceCount;
-(int)deviceCount;
-(CKDPZone *)targetZone;
-(void)setTargetZone:(CKDPZone *)arg1 ;
-(NSData *)clientChangeToken;
-(void)setClientChangeToken:(NSData *)arg1 ;
-(long long)assetQuotaUsage;
-(void)setAssetQuotaUsage:(long long)arg1 ;
-(long long)metadataQuotaUsage;
-(void)setMetadataQuotaUsage:(long long)arg1 ;
-(BOOL)zoneKeyRollAllowed;
-(void)setZoneKeyRollAllowed:(BOOL)arg1 ;
-(void)setCurrentServerContinuationToken:(NSData *)arg1 ;
-(void)setZonePcsModificationTime:(CKDPDate *)arg1 ;
-(void)setZonePcsModificationDevice:(NSString *)arg1 ;
-(BOOL)hasTargetZone;
-(BOOL)hasCurrentServerContinuationToken;
-(BOOL)hasClientChangeToken;
-(void)setHasAssetQuotaUsage:(BOOL)arg1 ;
-(BOOL)hasAssetQuotaUsage;
-(void)setHasMetadataQuotaUsage:(BOOL)arg1 ;
-(BOOL)hasMetadataQuotaUsage;
-(void)setZoneishPcsNeedsRolled:(BOOL)arg1 ;
-(void)setHasZoneishPcsNeedsRolled:(BOOL)arg1 ;
-(BOOL)hasZoneishPcsNeedsRolled;
-(void)setHasZoneKeyRollAllowed:(BOOL)arg1 ;
-(BOOL)hasZoneKeyRollAllowed;
-(BOOL)hasZonePcsModificationTime;
-(BOOL)hasZonePcsModificationDevice;
-(NSData *)currentServerContinuationToken;
-(BOOL)zoneishPcsNeedsRolled;
-(CKDPDate *)zonePcsModificationTime;
-(NSString *)zonePcsModificationDevice;
@end

