/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSData, NSString, CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings, CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus;

@interface CEMSecurityInformationCommand_StatusSecurityInfo : CEMPayloadBase {

	NSNumber* _statusHardwareEncryptionCaps;
	NSNumber* _statusPasscodePresent;
	NSNumber* _statusPasscodeCompliant;
	NSNumber* _statusPasscodeCompliantWithProfiles;
	NSNumber* _statusPasscodeLockGracePeriod;
	NSNumber* _statusPasscodeLockGracePeriodEnforced;
	NSNumber* _statusFDEEnabled;
	NSNumber* _statusFDEHasPersonalRecoveryKey;
	NSNumber* _statusFDEHasInstitutionalRecoveryKey;
	NSData* _statusFDEPersonalRecoveryKeyCMS;
	NSString* _statusFDEPersonalRecoveryKeyDeviceKey;
	NSNumber* _statusSystemIntegrityProtectionEnabled;
	CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings* _statusFirewallSettings;
	CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus* _statusFirmwarePasswordStatus;

}

@property (nonatomic,copy) NSNumber * statusHardwareEncryptionCaps;                                                                            //@synthesize statusHardwareEncryptionCaps=_statusHardwareEncryptionCaps - In the implementation block
@property (nonatomic,copy) NSNumber * statusPasscodePresent;                                                                                   //@synthesize statusPasscodePresent=_statusPasscodePresent - In the implementation block
@property (nonatomic,copy) NSNumber * statusPasscodeCompliant;                                                                                 //@synthesize statusPasscodeCompliant=_statusPasscodeCompliant - In the implementation block
@property (nonatomic,copy) NSNumber * statusPasscodeCompliantWithProfiles;                                                                     //@synthesize statusPasscodeCompliantWithProfiles=_statusPasscodeCompliantWithProfiles - In the implementation block
@property (nonatomic,copy) NSNumber * statusPasscodeLockGracePeriod;                                                                           //@synthesize statusPasscodeLockGracePeriod=_statusPasscodeLockGracePeriod - In the implementation block
@property (nonatomic,copy) NSNumber * statusPasscodeLockGracePeriodEnforced;                                                                   //@synthesize statusPasscodeLockGracePeriodEnforced=_statusPasscodeLockGracePeriodEnforced - In the implementation block
@property (nonatomic,copy) NSNumber * statusFDEEnabled;                                                                                        //@synthesize statusFDEEnabled=_statusFDEEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusFDEHasPersonalRecoveryKey;                                                                         //@synthesize statusFDEHasPersonalRecoveryKey=_statusFDEHasPersonalRecoveryKey - In the implementation block
@property (nonatomic,copy) NSNumber * statusFDEHasInstitutionalRecoveryKey;                                                                    //@synthesize statusFDEHasInstitutionalRecoveryKey=_statusFDEHasInstitutionalRecoveryKey - In the implementation block
@property (nonatomic,copy) NSData * statusFDEPersonalRecoveryKeyCMS;                                                                           //@synthesize statusFDEPersonalRecoveryKeyCMS=_statusFDEPersonalRecoveryKeyCMS - In the implementation block
@property (nonatomic,copy) NSString * statusFDEPersonalRecoveryKeyDeviceKey;                                                                   //@synthesize statusFDEPersonalRecoveryKeyDeviceKey=_statusFDEPersonalRecoveryKeyDeviceKey - In the implementation block
@property (nonatomic,copy) NSNumber * statusSystemIntegrityProtectionEnabled;                                                                  //@synthesize statusSystemIntegrityProtectionEnabled=_statusSystemIntegrityProtectionEnabled - In the implementation block
@property (nonatomic,copy) CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings * statusFirewallSettings;                          //@synthesize statusFirewallSettings=_statusFirewallSettings - In the implementation block
@property (nonatomic,copy) CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus * statusFirmwarePasswordStatus;              //@synthesize statusFirmwarePasswordStatus=_statusFirmwarePasswordStatus - In the implementation block
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithHardwareEncryptionCaps:(id)arg1 withPasscodePresent:(id)arg2 withPasscodeCompliant:(id)arg3 withPasscodeCompliantWithProfiles:(id)arg4 withPasscodeLockGracePeriod:(id)arg5 withPasscodeLockGracePeriodEnforced:(id)arg6 withFDEEnabled:(id)arg7 withFDEHasPersonalRecoveryKey:(id)arg8 withFDEHasInstitutionalRecoveryKey:(id)arg9 withFDEPersonalRecoveryKeyCMS:(id)arg10 withFDEPersonalRecoveryKeyDeviceKey:(id)arg11 withSystemIntegrityProtectionEnabled:(id)arg12 withFirewallSettings:(id)arg13 withFirmwarePasswordStatus:(id)arg14 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusSystemIntegrityProtectionEnabled:(NSNumber *)arg1 ;
-(NSNumber *)statusSystemIntegrityProtectionEnabled;
-(void)setStatusHardwareEncryptionCaps:(NSNumber *)arg1 ;
-(void)setStatusPasscodePresent:(NSNumber *)arg1 ;
-(void)setStatusPasscodeCompliant:(NSNumber *)arg1 ;
-(void)setStatusPasscodeCompliantWithProfiles:(NSNumber *)arg1 ;
-(void)setStatusPasscodeLockGracePeriod:(NSNumber *)arg1 ;
-(void)setStatusPasscodeLockGracePeriodEnforced:(NSNumber *)arg1 ;
-(void)setStatusFDEEnabled:(NSNumber *)arg1 ;
-(void)setStatusFDEHasPersonalRecoveryKey:(NSNumber *)arg1 ;
-(void)setStatusFDEHasInstitutionalRecoveryKey:(NSNumber *)arg1 ;
-(void)setStatusFDEPersonalRecoveryKeyCMS:(NSData *)arg1 ;
-(void)setStatusFDEPersonalRecoveryKeyDeviceKey:(NSString *)arg1 ;
-(void)setStatusFirewallSettings:(CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings *)arg1 ;
-(void)setStatusFirmwarePasswordStatus:(CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus *)arg1 ;
-(NSNumber *)statusHardwareEncryptionCaps;
-(NSNumber *)statusPasscodePresent;
-(NSNumber *)statusPasscodeCompliant;
-(NSNumber *)statusPasscodeCompliantWithProfiles;
-(NSNumber *)statusPasscodeLockGracePeriod;
-(NSNumber *)statusPasscodeLockGracePeriodEnforced;
-(NSNumber *)statusFDEEnabled;
-(NSNumber *)statusFDEHasPersonalRecoveryKey;
-(NSNumber *)statusFDEHasInstitutionalRecoveryKey;
-(NSData *)statusFDEPersonalRecoveryKeyCMS;
-(NSString *)statusFDEPersonalRecoveryKeyDeviceKey;
-(CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings *)statusFirewallSettings;
-(CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus *)statusFirmwarePasswordStatus;
@end

