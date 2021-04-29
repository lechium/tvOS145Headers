/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/OctagonTrust.framework/OctagonTrust
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OctagonTrust/OctagonTrust-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface OTEscrowRecordMetadataClientMetadata : PBCodable <NSCopying> {

	unsigned long long _devicePlatform;
	unsigned long long _secureBackupMetadataTimestamp;
	unsigned long long _secureBackupNumericPassphraseLength;
	unsigned long long _secureBackupUsesComplexPassphrase;
	unsigned long long _secureBackupUsesNumericPassphrase;
	NSString* _deviceColor;
	NSString* _deviceEnclosureColor;
	NSString* _deviceMid;
	NSString* _deviceModel;
	NSString* _deviceModelClass;
	NSString* _deviceModelVersion;
	NSString* _deviceName;
	SCD_Struct_OT2 _has;

}

@property (assign,nonatomic) BOOL hasSecureBackupMetadataTimestamp; 
@property (assign,nonatomic) unsigned long long secureBackupMetadataTimestamp;                    //@synthesize secureBackupMetadataTimestamp=_secureBackupMetadataTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSecureBackupNumericPassphraseLength; 
@property (assign,nonatomic) unsigned long long secureBackupNumericPassphraseLength;              //@synthesize secureBackupNumericPassphraseLength=_secureBackupNumericPassphraseLength - In the implementation block
@property (assign,nonatomic) BOOL hasSecureBackupUsesComplexPassphrase; 
@property (assign,nonatomic) unsigned long long secureBackupUsesComplexPassphrase;                //@synthesize secureBackupUsesComplexPassphrase=_secureBackupUsesComplexPassphrase - In the implementation block
@property (assign,nonatomic) BOOL hasSecureBackupUsesNumericPassphrase; 
@property (assign,nonatomic) unsigned long long secureBackupUsesNumericPassphrase;                //@synthesize secureBackupUsesNumericPassphrase=_secureBackupUsesNumericPassphrase - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceColor; 
@property (nonatomic,retain) NSString * deviceColor;                                              //@synthesize deviceColor=_deviceColor - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceEnclosureColor; 
@property (nonatomic,retain) NSString * deviceEnclosureColor;                                     //@synthesize deviceEnclosureColor=_deviceEnclosureColor - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceMid; 
@property (nonatomic,retain) NSString * deviceMid;                                                //@synthesize deviceMid=_deviceMid - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                                              //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModelClass; 
@property (nonatomic,retain) NSString * deviceModelClass;                                         //@synthesize deviceModelClass=_deviceModelClass - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModelVersion; 
@property (nonatomic,retain) NSString * deviceModelVersion;                                       //@synthesize deviceModelVersion=_deviceModelVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                                               //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) BOOL hasDevicePlatform; 
@property (assign,nonatomic) unsigned long long devicePlatform;                                   //@synthesize devicePlatform=_devicePlatform - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)deviceColor;
-(void)setDeviceColor:(NSString *)arg1 ;
-(NSString *)deviceEnclosureColor;
-(void)setDeviceEnclosureColor:(NSString *)arg1 ;
-(BOOL)hasDeviceName;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(BOOL)hasDeviceModel;
-(void)setDevicePlatform:(unsigned long long)arg1 ;
-(unsigned long long)devicePlatform;
-(NSString *)deviceMid;
-(NSString *)deviceModelVersion;
-(NSString *)deviceModelClass;
-(unsigned long long)secureBackupUsesNumericPassphrase;
-(unsigned long long)secureBackupNumericPassphraseLength;
-(unsigned long long)secureBackupMetadataTimestamp;
-(void)setSecureBackupMetadataTimestamp:(unsigned long long)arg1 ;
-(void)setHasSecureBackupMetadataTimestamp:(BOOL)arg1 ;
-(BOOL)hasSecureBackupMetadataTimestamp;
-(void)setSecureBackupNumericPassphraseLength:(unsigned long long)arg1 ;
-(void)setHasSecureBackupNumericPassphraseLength:(BOOL)arg1 ;
-(BOOL)hasSecureBackupNumericPassphraseLength;
-(void)setSecureBackupUsesComplexPassphrase:(unsigned long long)arg1 ;
-(void)setHasSecureBackupUsesComplexPassphrase:(BOOL)arg1 ;
-(BOOL)hasSecureBackupUsesComplexPassphrase;
-(void)setSecureBackupUsesNumericPassphrase:(unsigned long long)arg1 ;
-(void)setHasSecureBackupUsesNumericPassphrase:(BOOL)arg1 ;
-(BOOL)hasSecureBackupUsesNumericPassphrase;
-(BOOL)hasDeviceColor;
-(BOOL)hasDeviceEnclosureColor;
-(BOOL)hasDeviceMid;
-(BOOL)hasDeviceModelClass;
-(BOOL)hasDeviceModelVersion;
-(void)setHasDevicePlatform:(BOOL)arg1 ;
-(BOOL)hasDevicePlatform;
-(unsigned long long)secureBackupUsesComplexPassphrase;
-(void)setDeviceMid:(NSString *)arg1 ;
-(void)setDeviceModelClass:(NSString *)arg1 ;
-(void)setDeviceModelVersion:(NSString *)arg1 ;
@end

