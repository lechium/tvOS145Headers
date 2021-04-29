/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SetupAssistant/SetupAssistant-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface BYBackupMetadata : PBCodable <NSCopying> {

	long long _userInterfaceStyleMode;
	unsigned _appAnalyticsOptIn;
	unsigned _deviceAnalyticsOptIn;
	unsigned _homeButtonHapticKind;
	NSData* _nanoRegistryData;
	unsigned _version;
	NSData* _walletData;
	BOOL _autoDownloadEnabled;
	BOOL _autoUpdateEnabled;
	BOOL _didSeeTrueTonePane;
	BOOL _findMyiPhoneOptIn;
	BOOL _locationServicesOptIn;
	BOOL _screenTimeEnabled;
	BOOL _siriOptIn;
	SCD_Struct_BY1 _has;

}

@property (assign,nonatomic) unsigned version;                              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasNanoRegistryData; 
@property (nonatomic,retain) NSData * nanoRegistryData;                     //@synthesize nanoRegistryData=_nanoRegistryData - In the implementation block
@property (assign,nonatomic) BOOL hasHomeButtonHapticKind; 
@property (assign,nonatomic) unsigned homeButtonHapticKind;                 //@synthesize homeButtonHapticKind=_homeButtonHapticKind - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceAnalyticsOptIn; 
@property (assign,nonatomic) unsigned deviceAnalyticsOptIn;                 //@synthesize deviceAnalyticsOptIn=_deviceAnalyticsOptIn - In the implementation block
@property (assign,nonatomic) BOOL hasAppAnalyticsOptIn; 
@property (assign,nonatomic) unsigned appAnalyticsOptIn;                    //@synthesize appAnalyticsOptIn=_appAnalyticsOptIn - In the implementation block
@property (assign,nonatomic) BOOL hasLocationServicesOptIn; 
@property (assign,nonatomic) BOOL locationServicesOptIn;                    //@synthesize locationServicesOptIn=_locationServicesOptIn - In the implementation block
@property (assign,nonatomic) BOOL hasFindMyiPhoneOptIn; 
@property (assign,nonatomic) BOOL findMyiPhoneOptIn;                        //@synthesize findMyiPhoneOptIn=_findMyiPhoneOptIn - In the implementation block
@property (assign,nonatomic) BOOL hasSiriOptIn; 
@property (assign,nonatomic) BOOL siriOptIn;                                //@synthesize siriOptIn=_siriOptIn - In the implementation block
@property (assign,nonatomic) BOOL hasScreenTimeEnabled; 
@property (assign,nonatomic) BOOL screenTimeEnabled;                        //@synthesize screenTimeEnabled=_screenTimeEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasAutoUpdateEnabled; 
@property (assign,nonatomic) BOOL autoUpdateEnabled;                        //@synthesize autoUpdateEnabled=_autoUpdateEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasDidSeeTrueTonePane; 
@property (assign,nonatomic) BOOL didSeeTrueTonePane;                       //@synthesize didSeeTrueTonePane=_didSeeTrueTonePane - In the implementation block
@property (assign,nonatomic) BOOL hasUserInterfaceStyleMode; 
@property (assign,nonatomic) long long userInterfaceStyleMode;              //@synthesize userInterfaceStyleMode=_userInterfaceStyleMode - In the implementation block
@property (nonatomic,readonly) BOOL hasWalletData; 
@property (nonatomic,retain) NSData * walletData;                           //@synthesize walletData=_walletData - In the implementation block
@property (assign,nonatomic) BOOL hasAutoDownloadEnabled; 
@property (assign,nonatomic) BOOL autoDownloadEnabled;                      //@synthesize autoDownloadEnabled=_autoDownloadEnabled - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setNanoRegistryData:(NSData *)arg1 ;
-(void)setWalletData:(NSData *)arg1 ;
-(BOOL)hasNanoRegistryData;
-(void)setHomeButtonHapticKind:(unsigned)arg1 ;
-(void)setHasHomeButtonHapticKind:(BOOL)arg1 ;
-(BOOL)hasHomeButtonHapticKind;
-(void)setDeviceAnalyticsOptIn:(unsigned)arg1 ;
-(void)setHasDeviceAnalyticsOptIn:(BOOL)arg1 ;
-(BOOL)hasDeviceAnalyticsOptIn;
-(void)setAppAnalyticsOptIn:(unsigned)arg1 ;
-(void)setHasAppAnalyticsOptIn:(BOOL)arg1 ;
-(BOOL)hasAppAnalyticsOptIn;
-(void)setLocationServicesOptIn:(BOOL)arg1 ;
-(void)setHasLocationServicesOptIn:(BOOL)arg1 ;
-(BOOL)hasLocationServicesOptIn;
-(void)setFindMyiPhoneOptIn:(BOOL)arg1 ;
-(void)setHasFindMyiPhoneOptIn:(BOOL)arg1 ;
-(BOOL)hasFindMyiPhoneOptIn;
-(void)setSiriOptIn:(BOOL)arg1 ;
-(void)setHasSiriOptIn:(BOOL)arg1 ;
-(BOOL)hasSiriOptIn;
-(void)setScreenTimeEnabled:(BOOL)arg1 ;
-(void)setHasScreenTimeEnabled:(BOOL)arg1 ;
-(BOOL)hasScreenTimeEnabled;
-(void)setAutoUpdateEnabled:(BOOL)arg1 ;
-(void)setHasAutoUpdateEnabled:(BOOL)arg1 ;
-(BOOL)hasAutoUpdateEnabled;
-(void)setDidSeeTrueTonePane:(BOOL)arg1 ;
-(void)setHasDidSeeTrueTonePane:(BOOL)arg1 ;
-(BOOL)hasDidSeeTrueTonePane;
-(void)setUserInterfaceStyleMode:(long long)arg1 ;
-(void)setHasUserInterfaceStyleMode:(BOOL)arg1 ;
-(BOOL)hasUserInterfaceStyleMode;
-(BOOL)hasWalletData;
-(void)setAutoDownloadEnabled:(BOOL)arg1 ;
-(void)setHasAutoDownloadEnabled:(BOOL)arg1 ;
-(BOOL)hasAutoDownloadEnabled;
-(NSData *)nanoRegistryData;
-(unsigned)homeButtonHapticKind;
-(unsigned)deviceAnalyticsOptIn;
-(unsigned)appAnalyticsOptIn;
-(BOOL)locationServicesOptIn;
-(BOOL)findMyiPhoneOptIn;
-(BOOL)siriOptIn;
-(BOOL)screenTimeEnabled;
-(BOOL)autoUpdateEnabled;
-(BOOL)didSeeTrueTonePane;
-(long long)userInterfaceStyleMode;
-(NSData *)walletData;
-(BOOL)autoDownloadEnabled;
@end

