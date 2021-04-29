/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NRDevice, NSArray;

@interface NRMigrator : NSObject {

	BOOL _migrating;
	NRDevice* _migratingDevice;

}

@property (nonatomic,readonly) BOOL migrationIsAvailable; 
@property (nonatomic,retain,readonly) NSArray * devicesExpectedToBeMigratableAfterRestore; 
@property (nonatomic,retain,readonly) NSArray * migratableDevicesRequiringConsent; 
@property (nonatomic,retain,readonly) NSArray * migratableDevices; 
@property (nonatomic,retain,readonly) NRDevice * migratingDevice;                                       //@synthesize migratingDevice=_migratingDevice - In the implementation block
+(id)sharedMigrator;
+(id)migrationDataPreRestoreForConsentedDevices:(id)arg1 ;
+(void)ingestPostRestoreMigrationDataForConsentedDevices:(id)arg1 ;
-(void)setMigrationConsented:(BOOL)arg1 forDeviceID:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)migrationConsentRequestData;
-(id)devicesFromMigrationConsentRequestData:(id)arg1 ;
-(void)setMigrationConsented:(BOOL)arg1 forDevice:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)beginMigrationWithDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)lastMigrationRequestPhoneName;
-(void)isPhoneReadyToMigrateDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSArray *)devicesExpectedToBeMigratableAfterRestore;
-(NSArray *)migratableDevices;
-(BOOL)migrationIsAvailable;
-(NSArray *)migratableDevicesRequiringConsent;
-(void)enterPreMigrationMode;
-(NRDevice *)migratingDevice;
@end

