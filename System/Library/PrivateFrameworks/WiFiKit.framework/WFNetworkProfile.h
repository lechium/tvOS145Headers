/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKit/WiFiKit-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSDictionary, NSArray, NSDate;

@interface WFNetworkProfile : NSObject <NSMutableCopying> {

	BOOL _hidden;
	BOOL _managed;
	BOOL _captive;
	BOOL _adhoc;
	BOOL _HS20Network;
	BOOL _HS20NetworkProvisioned;
	BOOL _autoJoinEnabled;
	BOOL _autoLoginEnabled;
	BOOL _carPlay;
	BOOL _isInSaveDataMode;
	BOOL _carrierBased;
	BOOL _personalHotspot;
	BOOL _canExposeIMSI;
	BOOL _instantHotspotJoin;
	BOOL _randomMACAddressEnabled;
	BOOL _DNSHeuristicsFiltered;
	BOOL _fetchedPassword;
	BOOL _requiresPassword;
	SecIdentityRef _TLSIdentity;
	NSString* _password;
	NSDictionary* _scanAttributes;
	NSArray* _certificateChain;
	NSString* _username;
	NSString* _bssid;
	NSString* _ssid;
	NSString* _HS20AccountName;
	NSString* _HS20Badge;
	long long _carPlayType;
	NSString* _carPlayUUID;
	NSString* _policyUUID;
	long long _securityMode;
	long long _securityModeExt;
	NSDate* _addedDate;
	NSDate* _lastAutoJoinDate;
	NSString* _originatorBundleIdentifier;
	NSString* _previousPassword;
	NSString* _hotspotDeviceIdentifier;
	NSString* _randomMACAddress;
	NSDictionary* _enterpriseProfile;

}

@property (nonatomic,retain) NSDictionary * enterpriseProfile;                                           //@synthesize enterpriseProfile=_enterpriseProfile - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                                //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,retain) NSString * bssid;                                                           //@synthesize bssid=_bssid - In the implementation block
@property (nonatomic,retain) NSString * ssid;                                                            //@synthesize ssid=_ssid - In the implementation block
@property (assign,nonatomic) long long securityMode;                                                     //@synthesize securityMode=_securityMode - In the implementation block
@property (assign,nonatomic) long long securityModeExt;                                                  //@synthesize securityModeExt=_securityModeExt - In the implementation block
@property (nonatomic,retain) NSDictionary * scanAttributes;                                              //@synthesize scanAttributes=_scanAttributes - In the implementation block
@property (assign,getter=isAdhoc,nonatomic) BOOL adhoc;                                                  //@synthesize adhoc=_adhoc - In the implementation block
@property (assign,getter=isCaptive,nonatomic) BOOL captive;                                              //@synthesize captive=_captive - In the implementation block
@property (assign,getter=isHS20Network,nonatomic) BOOL HS20Network;                                      //@synthesize HS20Network=_HS20Network - In the implementation block
@property (assign,getter=isAutoJoinEnabled,nonatomic) BOOL autoJoinEnabled;                              //@synthesize autoJoinEnabled=_autoJoinEnabled - In the implementation block
@property (assign,getter=isCarPlay,nonatomic) BOOL carPlay;                                              //@synthesize carPlay=_carPlay - In the implementation block
@property (assign,nonatomic) long long carPlayType;                                                      //@synthesize carPlayType=_carPlayType - In the implementation block
@property (nonatomic,copy) NSString * carPlayUUID;                                                       //@synthesize carPlayUUID=_carPlayUUID - In the implementation block
@property (nonatomic,copy) NSString * policyUUID;                                                        //@synthesize policyUUID=_policyUUID - In the implementation block
@property (nonatomic,copy) NSString * originatorBundleIdentifier;                                        //@synthesize originatorBundleIdentifier=_originatorBundleIdentifier - In the implementation block
@property (assign,getter=isHS20NetworkProvisioned,nonatomic) BOOL HS20NetworkProvisioned;                //@synthesize HS20NetworkProvisioned=_HS20NetworkProvisioned - In the implementation block
@property (assign,getter=isCarrierBased,nonatomic) BOOL carrierBased;                                    //@synthesize carrierBased=_carrierBased - In the implementation block
@property (assign,getter=isPersonalHotspot,nonatomic) BOOL personalHotspot;                              //@synthesize personalHotspot=_personalHotspot - In the implementation block
@property (nonatomic,retain) NSString * HS20AccountName;                                                 //@synthesize HS20AccountName=_HS20AccountName - In the implementation block
@property (nonatomic,retain) NSString * HS20Badge;                                                       //@synthesize HS20Badge=_HS20Badge - In the implementation block
@property (assign,nonatomic) BOOL canExposeIMSI;                                                         //@synthesize canExposeIMSI=_canExposeIMSI - In the implementation block
@property (assign,nonatomic) SecIdentityRef TLSIdentity;                                                 //@synthesize TLSIdentity=_TLSIdentity - In the implementation block
@property (assign,nonatomic) BOOL fetchedPassword;                                                       //@synthesize fetchedPassword=_fetchedPassword - In the implementation block
@property (assign,nonatomic) BOOL requiresPassword;                                                      //@synthesize requiresPassword=_requiresPassword - In the implementation block
@property (assign,getter=isInstantHotspotJoin,nonatomic) BOOL instantHotspotJoin;                        //@synthesize instantHotspotJoin=_instantHotspotJoin - In the implementation block
@property (nonatomic,copy) NSString * randomMACAddress;                                                  //@synthesize randomMACAddress=_randomMACAddress - In the implementation block
@property (assign,getter=isRandomMACAddressEnabled,nonatomic) BOOL randomMACAddressEnabled;              //@synthesize randomMACAddressEnabled=_randomMACAddressEnabled - In the implementation block
@property (assign,getter=isDNSHeuristicsFiltered,nonatomic) BOOL DNSHeuristicsFiltered;                  //@synthesize DNSHeuristicsFiltered=_DNSHeuristicsFiltered - In the implementation block
@property (nonatomic,readonly) NSArray * certificateChain;                                               //@synthesize certificateChain=_certificateChain - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                                                 //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;                                                 //@synthesize password=_password - In the implementation block
@property (getter=isManaged,nonatomic,readonly) BOOL managed;                                            //@synthesize managed=_managed - In the implementation block
@property (getter=isAutoLoginEnabled,nonatomic,readonly) BOOL autoLoginEnabled;                          //@synthesize autoLoginEnabled=_autoLoginEnabled - In the implementation block
@property (getter=isInSaveDataMode,nonatomic,readonly) BOOL isInSaveDataMode;                            //@synthesize isInSaveDataMode=_isInSaveDataMode - In the implementation block
@property (nonatomic,readonly) BOOL requiresUsernameAndPassword; 
@property (nonatomic,readonly) NSDate * addedDate;                                                       //@synthesize addedDate=_addedDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastAutoJoinDate;                                                //@synthesize lastAutoJoinDate=_lastAutoJoinDate - In the implementation block
@property (nonatomic,readonly) BOOL userProvidedPassword; 
@property (nonatomic,readonly) NSString * previousPassword;                                              //@synthesize previousPassword=_previousPassword - In the implementation block
@property (nonatomic,retain) NSString * hotspotDeviceIdentifier;                                         //@synthesize hotspotDeviceIdentifier=_hotspotDeviceIdentifier - In the implementation block
+(BOOL)networkProfileRepresentSameNetwork:(id)arg1 toNetworkProfile:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSString *)password;
-(NSString *)username;
-(BOOL)isHidden;
-(NSString *)ssid;
-(void)setSsid:(NSString *)arg1 ;
-(void)setBssid:(NSString *)arg1 ;
-(NSString *)bssid;
-(long long)securityMode;
-(void)setSecurityMode:(long long)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setCarPlay:(BOOL)arg1 ;
-(NSDate *)addedDate;
-(id)initWithNetwork:(id)arg1 ;
-(void)setFetchedPassword:(BOOL)arg1 ;
-(BOOL)fetchedPassword;
-(BOOL)isManaged;
-(NSArray *)certificateChain;
-(BOOL)requiresPassword;
-(BOOL)isCaptive;
-(BOOL)isAdhoc;
-(void)setPersonalHotspot:(BOOL)arg1 ;
-(BOOL)forgetable;
-(BOOL)autoJoinConfigurable;
-(void)setAutoJoinEnabled:(BOOL)arg1 ;
-(BOOL)autoLoginConfigurable;
-(BOOL)saveDataModeConfigurable;
-(BOOL)isInSaveDataMode;
-(NSString *)randomMACAddress;
-(BOOL)isEnterprise;
-(SecIdentityRef)TLSIdentity;
-(void)setTLSIdentity:(SecIdentityRef)arg1 ;
-(void)setRandomMACAddress:(NSString *)arg1 ;
-(long long)securityModeExt;
-(NSDictionary *)enterpriseProfile;
-(NSDictionary *)scanAttributes;
-(void)setSecurityModeExt:(long long)arg1 ;
-(void)setEnterpriseProfile:(NSDictionary *)arg1 ;
-(void)setScanAttributes:(NSDictionary *)arg1 ;
-(void)setCaptive:(BOOL)arg1 ;
-(BOOL)isHS20Network;
-(void)setHS20Network:(BOOL)arg1 ;
-(BOOL)isHS20NetworkProvisioned;
-(void)setHS20NetworkProvisioned:(BOOL)arg1 ;
-(BOOL)isAutoJoinEnabled;
-(BOOL)isAutoLoginEnabled;
-(NSString *)originatorBundleIdentifier;
-(void)setOriginatorBundleIdentifier:(NSString *)arg1 ;
-(BOOL)isCarrierBased;
-(NSString *)HS20AccountName;
-(NSString *)HS20Badge;
-(BOOL)userProvidedPassword;
-(NSString *)previousPassword;
-(BOOL)isPersonalHotspot;
-(BOOL)isInstantHotspotJoin;
-(void)setInstantHotspotJoin:(BOOL)arg1 ;
-(NSString *)hotspotDeviceIdentifier;
-(void)setHotspotDeviceIdentifier:(NSString *)arg1 ;
-(BOOL)isRandomMACAddressEnabled;
-(void)setRandomMACAddressEnabled:(BOOL)arg1 ;
-(long long)carPlayType;
-(BOOL)randomMACAddressConfigurable;
-(NSString *)policyUUID;
-(id)initWithNetworkRef:(WiFiNetworkRef)arg1 ;
-(id)networkAttributes;
-(BOOL)isCarPlay;
-(BOOL)shouldBeRemovedIfApplicationIsNoLongerInstalled;
-(BOOL)canAttemptJoin;
-(NSString *)carPlayUUID;
-(BOOL)canExposeIMSI;
-(BOOL)isDNSHeuristicsFiltered;
-(void)setRequiresPassword:(BOOL)arg1 ;
-(void)setAdhoc:(BOOL)arg1 ;
-(void)setCarPlayType:(long long)arg1 ;
-(void)setPolicyUUID:(NSString *)arg1 ;
-(void)setCarPlayUUID:(NSString *)arg1 ;
-(void)setCarrierBased:(BOOL)arg1 ;
-(void)setHS20AccountName:(NSString *)arg1 ;
-(void)setHS20Badge:(NSString *)arg1 ;
-(void)setCanExposeIMSI:(BOOL)arg1 ;
-(void)setDNSHeuristicsFiltered:(BOOL)arg1 ;
-(BOOL)requiresTLSIdentityOnly;
-(BOOL)profileContainsCarrierEAPType:(id)arg1 ;
-(BOOL)profileContainsEAPSIM:(id)arg1 ;
-(BOOL)profileContainsEAPAKA:(id)arg1 ;
-(BOOL)requiresUsernameAndPassword;
-(BOOL)TLSProfileCanJoin;
-(BOOL)isEqualToNetwork:(id)arg1 ;
-(NSDate *)lastAutoJoinDate;
@end

