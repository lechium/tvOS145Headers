/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKit/WiFiKit-Structs.h>
#import <WiFiKit/WFNetworkProfile.h>

@class NSString, NSDictionary, NSArray, NSDate;

@interface WFMutableNetworkProfile : WFNetworkProfile {

	BOOL _hidden;
	BOOL _managed;
	BOOL _adhoc;
	BOOL _captive;
	BOOL _HS20Network;
	BOOL _HS20NetworkProvisioned;
	BOOL _autoJoinEnabled;
	BOOL _autoLoginEnabled;
	BOOL _isInSaveDataMode;
	BOOL _carrierBased;
	BOOL _userProvidedPassword;
	BOOL _personalHotspot;
	BOOL _instantHotspotJoin;
	BOOL _randomMACAddressEnabled;
	NSString* _ssid;
	NSString* _bssid;
	NSString* _username;
	NSString* _password;
	long long _securityMode;
	long long _securityModeExt;
	NSDictionary* _enterpriseProfile;
	NSArray* _certificateChain;
	NSDictionary* _scanAttributes;
	NSDate* _lastAssociationDate;
	SecIdentityRef _TLSIdentity;
	NSString* _originatorBundleIdentifier;
	NSString* _HS20AccountName;
	NSString* _HS20Badge;
	NSString* _previousPassword;
	NSString* _hotspotDeviceIdentifier;
	NSString* _randomMACAddress;

}

@property (nonatomic,retain) NSArray * certificateChain;                                                 //@synthesize certificateChain=_certificateChain - In the implementation block
@property (nonatomic,retain) NSDictionary * enterpriseProfile;                                           //@synthesize enterpriseProfile=_enterpriseProfile - In the implementation block
@property (nonatomic,copy) NSString * username;                                                          //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                                          //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * bssid;                                                           //@synthesize bssid=_bssid - In the implementation block
@property (nonatomic,retain) NSString * ssid;                                                            //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,retain) NSDictionary * scanAttributes;                                              //@synthesize scanAttributes=_scanAttributes - In the implementation block
@property (assign,getter=isManaged,nonatomic) BOOL managed;                                              //@synthesize managed=_managed - In the implementation block
@property (assign,getter=isCaptive,nonatomic) BOOL captive;                                              //@synthesize captive=_captive - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                                //@synthesize hidden=_hidden - In the implementation block
@property (assign,getter=isAutoJoinEnabled,nonatomic) BOOL autoJoinEnabled;                              //@synthesize autoJoinEnabled=_autoJoinEnabled - In the implementation block
@property (assign,getter=isAutoLoginEnabled,nonatomic) BOOL autoLoginEnabled;                            //@synthesize autoLoginEnabled=_autoLoginEnabled - In the implementation block
@property (assign,getter=isInSaveDataMode,nonatomic) BOOL isInSaveDataMode;                              //@synthesize isInSaveDataMode=_isInSaveDataMode - In the implementation block
@property (nonatomic,retain) NSDate * lastAssociationDate;                                               //@synthesize lastAssociationDate=_lastAssociationDate - In the implementation block
@property (assign,nonatomic) long long securityMode;                                                     //@synthesize securityMode=_securityMode - In the implementation block
@property (assign,nonatomic) long long securityModeExt;                                                  //@synthesize securityModeExt=_securityModeExt - In the implementation block
@property (assign,nonatomic) SecIdentityRef TLSIdentity;                                                 //@synthesize TLSIdentity=_TLSIdentity - In the implementation block
@property (nonatomic,copy) NSString * originatorBundleIdentifier;                                        //@synthesize originatorBundleIdentifier=_originatorBundleIdentifier - In the implementation block
@property (assign,getter=isHS20Network,nonatomic) BOOL HS20Network;                                      //@synthesize HS20Network=_HS20Network - In the implementation block
@property (assign,getter=isHS20NetworkProvisioned,nonatomic) BOOL HS20NetworkProvisioned;                //@synthesize HS20NetworkProvisioned=_HS20NetworkProvisioned - In the implementation block
@property (assign,nonatomic) BOOL userProvidedPassword;                                                  //@synthesize userProvidedPassword=_userProvidedPassword - In the implementation block
@property (nonatomic,retain) NSString * previousPassword;                                                //@synthesize previousPassword=_previousPassword - In the implementation block
@property (assign,getter=isInstantHotspotJoin,nonatomic) BOOL instantHotspotJoin;                        //@synthesize instantHotspotJoin=_instantHotspotJoin - In the implementation block
@property (nonatomic,retain) NSString * hotspotDeviceIdentifier;                                         //@synthesize hotspotDeviceIdentifier=_hotspotDeviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * randomMACAddress;                                                  //@synthesize randomMACAddress=_randomMACAddress - In the implementation block
@property (assign,getter=isRandomMACAddressEnabled,nonatomic) BOOL randomMACAddressEnabled;              //@synthesize randomMACAddressEnabled=_randomMACAddressEnabled - In the implementation block
+(id)mutableProfileForNetwork:(id)arg1 ;
-(void)dealloc;
-(NSString *)password;
-(NSString *)username;
-(void)setPassword:(NSString *)arg1 ;
-(BOOL)isHidden;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)ssid;
-(void)setSsid:(NSString *)arg1 ;
-(void)setBssid:(NSString *)arg1 ;
-(NSString *)bssid;
-(long long)securityMode;
-(void)setSecurityMode:(long long)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithNetwork:(id)arg1 ;
-(BOOL)isManaged;
-(NSArray *)certificateChain;
-(void)removePassword;
-(BOOL)isCaptive;
-(BOOL)isAdhoc;
-(void)setAutoJoinEnabled:(BOOL)arg1 ;
-(void)setAutoLoginEnabled:(BOOL)arg1 ;
-(BOOL)isInSaveDataMode;
-(void)setIsInSaveDataMode:(BOOL)arg1 ;
-(NSString *)randomMACAddress;
-(SecIdentityRef)TLSIdentity;
-(void)setTLSIdentity:(SecIdentityRef)arg1 ;
-(void)setRandomMACAddress:(NSString *)arg1 ;
-(long long)securityModeExt;
-(NSDictionary *)enterpriseProfile;
-(NSDictionary *)scanAttributes;
-(void)setSecurityModeExt:(long long)arg1 ;
-(void)setEnterpriseProfile:(NSDictionary *)arg1 ;
-(void)setCertificateChain:(NSArray *)arg1 ;
-(void)setScanAttributes:(NSDictionary *)arg1 ;
-(void)setManaged:(BOOL)arg1 ;
-(void)setCaptive:(BOOL)arg1 ;
-(BOOL)isHS20Network;
-(void)setHS20Network:(BOOL)arg1 ;
-(BOOL)isHS20NetworkProvisioned;
-(void)setHS20NetworkProvisioned:(BOOL)arg1 ;
-(BOOL)isAutoJoinEnabled;
-(BOOL)isAutoLoginEnabled;
-(NSDate *)lastAssociationDate;
-(void)setLastAssociationDate:(NSDate *)arg1 ;
-(NSString *)originatorBundleIdentifier;
-(void)setOriginatorBundleIdentifier:(NSString *)arg1 ;
-(BOOL)isCarrierBased;
-(id)HS20AccountName;
-(id)HS20Badge;
-(BOOL)userProvidedPassword;
-(void)setUserProvidedPassword:(BOOL)arg1 ;
-(NSString *)previousPassword;
-(void)setPreviousPassword:(NSString *)arg1 ;
-(BOOL)isPersonalHotspot;
-(BOOL)isInstantHotspotJoin;
-(void)setInstantHotspotJoin:(BOOL)arg1 ;
-(NSString *)hotspotDeviceIdentifier;
-(void)setHotspotDeviceIdentifier:(NSString *)arg1 ;
-(BOOL)isRandomMACAddressEnabled;
-(void)setRandomMACAddressEnabled:(BOOL)arg1 ;
@end

