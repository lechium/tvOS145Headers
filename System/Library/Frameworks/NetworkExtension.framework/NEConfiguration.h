/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEProfilePayloadHandlerDelegate.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, NEVPN, NEAOVPN, NEVPNApp, NEContentFilter, NEProfileIngestionPayloadInfo, NEPathController, NEDNSProxy, NEDNSSettingsBundle, NEAppPush;

@interface NEConfiguration : NSObject <NEProfilePayloadHandlerDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying> {

	long long _grade;
	NSUUID* _identifier;
	NSString* _application;
	NSString* _name;
	NSString* _applicationName;
	NSString* _applicationIdentifier;
	NSString* _externalIdentifier;
	NEVPN* _VPN;
	NEAOVPN* _alwaysOnVPN;
	NEVPNApp* _appVPN;
	NEContentFilter* _contentFilter;
	NEProfileIngestionPayloadInfo* _payloadInfo;
	NEPathController* _pathController;
	NEDNSProxy* _dnsProxy;
	NEDNSSettingsBundle* _dnsSettings;
	NEAppPush* _appPush;
	long long _appPermissionType;

}

@property (readonly) NSString * pluginType; 
@property (assign,nonatomic) long long appPermissionType;                  //@synthesize appPermissionType=_appPermissionType - In the implementation block
@property (readonly) long long grade;                                      //@synthesize grade=_grade - In the implementation block
@property (readonly) NSUUID * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * application;                                   //@synthesize application=_application - In the implementation block
@property (copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (copy) NSString * applicationName;                               //@synthesize applicationName=_applicationName - In the implementation block
@property (copy) NSString * applicationIdentifier;                         //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (copy) NSString * externalIdentifier;                            //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (copy) NEVPN * VPN;                                              //@synthesize VPN=_VPN - In the implementation block
@property (copy) NEAOVPN * alwaysOnVPN;                                    //@synthesize alwaysOnVPN=_alwaysOnVPN - In the implementation block
@property (copy) NEVPNApp * appVPN;                                        //@synthesize appVPN=_appVPN - In the implementation block
@property (copy) NEContentFilter * contentFilter;                          //@synthesize contentFilter=_contentFilter - In the implementation block
@property (copy) NEProfileIngestionPayloadInfo * payloadInfo;              //@synthesize payloadInfo=_payloadInfo - In the implementation block
@property (copy) NEPathController * pathController;                        //@synthesize pathController=_pathController - In the implementation block
@property (copy) NEDNSProxy * dnsProxy;                                    //@synthesize dnsProxy=_dnsProxy - In the implementation block
@property (copy) NEDNSSettingsBundle * dnsSettings;                        //@synthesize dnsSettings=_dnsSettings - In the implementation block
@property (copy) NEAppPush * appPush;                                      //@synthesize appPush=_appPush - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)addError:(id)arg1 toList:(id)arg2 ;
+(id)configurationWithProfilePayload:(id)arg1 grade:(long long)arg2 ;
+(id)configurationWithProfilePayload:(id)arg1 ;
+(BOOL)setConfiguration:(CFDictionaryRef)arg1 forProtocol:(CFStringRef)arg2 inService:(SCNetworkServiceRef)arg3 ;
+(CFDictionaryRef)copyConfigurationForProtocol:(CFStringRef)arg1 inService:(SCNetworkServiceRef)arg2 ;
+(BOOL)SCServiceWithIdentifier:(id)arg1 existsInPreferences:(SCPreferencesRef)arg2 ;
+(BOOL)removeSCServiceWithIdentifier:(id)arg1 fromPreferences:(SCPreferencesRef)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(NEDNSSettingsBundle *)dnsSettings;
-(BOOL)setSMBDomains:(id)arg1 ;
-(BOOL)setMailDomains:(id)arg1 ;
-(BOOL)setCalendarDomains:(id)arg1 ;
-(BOOL)setContactsDomains:(id)arg1 ;
-(BOOL)setExcludedDomains:(id)arg1 ;
-(BOOL)setAssociatedDomains:(id)arg1 ;
-(long long)grade;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(BOOL)setCertificates:(id)arg1 ;
-(void)setApplicationName:(NSString *)arg1 ;
-(NSString *)applicationName;
-(NSString *)externalIdentifier;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(NEVPN *)VPN;
-(void)setAppPermissionType:(long long)arg1 ;
-(NSString *)pluginType;
-(NEVPNApp *)appVPN;
-(NSString *)application;
-(void)setApplication:(NSString *)arg1 ;
-(void)setVPN:(NEVPN *)arg1 ;
-(NEAOVPN *)alwaysOnVPN;
-(void)setAlwaysOnVPN:(NEAOVPN *)arg1 ;
-(void)setAppVPN:(NEVPNApp *)arg1 ;
-(NEContentFilter *)contentFilter;
-(void)setContentFilter:(NEContentFilter *)arg1 ;
-(NEProfileIngestionPayloadInfo *)payloadInfo;
-(void)setPayloadInfo:(NEProfileIngestionPayloadInfo *)arg1 ;
-(NEPathController *)pathController;
-(void)setPathController:(NEPathController *)arg1 ;
-(NEDNSProxy *)dnsProxy;
-(void)setDnsProxy:(NEDNSProxy *)arg1 ;
-(void)setDnsSettings:(NEDNSSettingsBundle *)arg1 ;
-(NEAppPush *)appPush;
-(void)setAppPush:(NEAppPush *)arg1 ;
-(id)initWithVPNPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(id)initWithAlwaysOnVPNPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(id)initWithAppLayerVPNPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(id)initWithContentFilterPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(id)initWithPathControllerPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(id)initWithDNSSettingsPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(id)descriptionWithOptions:(unsigned long long)arg1 ;
-(void)syncWithKeychainInDomain:(long long)arg1 ;
-(BOOL)needToUpdateKeychain;
-(void)clearKeychainInDomain:(long long)arg1 ;
-(id)initWithName:(id)arg1 grade:(long long)arg2 ;
-(void)updateWithConfiguration:(id)arg1 ;
-(id)generateSignature;
-(void)syncWithSystemKeychain;
-(void)syncWithUserKeychain;
-(void)clearSystemKeychain;
-(void)clearUserKeychain;
-(void)copyPasswordsFromSystemKeychain;
-(void)applyOverrides;
-(long long)appPermissionType;
-(BOOL)setConfigurationVPNPassword:(id)arg1 ;
-(BOOL)ingestDisconnectOptions:(id)arg1 ;
-(id)getConfigurationProtocol;
-(BOOL)ingestPPPDict:(id)arg1 ;
-(BOOL)configurePPPCommon:(id)arg1 ;
-(BOOL)configureVpnOnDemandRules:(id)arg1 ;
-(BOOL)configureL2TPWithPPPOptions:(id)arg1 ;
-(BOOL)configureIKE:(id)arg1 vpnType:(id)arg2 payloadBase:(id)arg3 vpn:(id)arg4 ;
-(BOOL)ingestPPPData:(id)arg1 vnpType:(id)arg2 ;
-(BOOL)configurePPPWithVPNOptions:(id)arg1 payloadBase:(id)arg2 ;
-(BOOL)ingestIPSecDict:(id)arg1 vpnType:(id)arg2 vpn:(id)arg3 ;
-(BOOL)configurePluginWithPayload:(id)arg1 pluginType:(id)arg2 payloadType:(id)arg3 ;
-(BOOL)configureVpnOnDemand:(id)arg1 vpnType:(id)arg2 ;
-(BOOL)ingestDNSOptions:(id)arg1 ;
-(BOOL)ingestProxyOptions:(id)arg1 ;
-(BOOL)setAppLayerVPNRuleSettings:(id)arg1 withAppIdentifier:(id)arg2 ;
-(id)configureAOVPNTunnelFromTunnelDict:(id)arg1 tunnelDict:(id)arg2 payloadBase:(id)arg3 interfaceType:(id)arg4 ;
-(BOOL)setCertificatesVPN:(id)arg1 ;
-(BOOL)setCertificatesAppVPN:(id)arg1 ;
-(BOOL)setCertificatesAOVpn:(id)arg1 ;
-(BOOL)setCertificateContentFilter:(id)arg1 ;
-(id)getPendingCertificateUUIDsInternal:(id)arg1 ;
-(id)getPendingCertificateUUIDsVPN:(id)arg1 ;
-(id)getPendingCertificateUUIDsAppVPN:(id)arg1 ;
-(id)getPendingCertificateUUIDsAOVpn:(id)arg1 ;
-(id)getPendingCertificateUUIDsContentFilter:(id)arg1 ;
-(BOOL)setConfigurationSharedSecret:(id)arg1 ;
-(BOOL)setPayloadInfoIdentityUserNameAndPassword:(id)arg1 ;
-(BOOL)setPayloadInfoIdentityProxy:(id)arg1 ;
-(BOOL)setPayloadInfoIdentityIPSecSharedSecret:(id)arg1 ;
-(BOOL)setPayloadInfoIdentityPIN:(id)arg1 ;
-(id)mergeArray:(id)arg1 withArray:(id)arg2 ;
-(BOOL)setMailDomains:(id)arg1 accountIdentifiers:(id)arg2 ;
-(BOOL)validateStrings:(id)arg1 ;
-(BOOL)setCalendarDomains:(id)arg1 accountIdentifiers:(id)arg2 ;
-(BOOL)setContactsDomains:(id)arg1 accountIdentifiers:(id)arg2 ;
-(BOOL)setRestrictDomains:(BOOL)arg1 ;
-(id)getCertificates;
-(id)getPendingCertificateUUIDs:(id)arg1 ;
-(id)getPendingCertificateInfo:(id)arg1 ;
-(id)getConfigurationIdentifier;
-(BOOL)setPayloadInfoIdentity:(id)arg1 ;
-(BOOL)setPayloadInfoCommon:(id)arg1 payloadOrganization:(id)arg2 ;
-(BOOL)setProfileInfo:(id)arg1 ;
-(BOOL)setAppLayerVPNUUID:(id)arg1 andSafariDomains:(id)arg2 ;
-(id)initWithDNSProxyPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(BOOL)isSupportedBySC;
-(BOOL)updateFromSCService:(SCNetworkServiceRef)arg1 ;
-(BOOL)applyChangesToSCServiceInPreferences:(SCPreferencesRef)arg1 ;
-(id)initFromSCService:(SCNetworkServiceRef)arg1 ;
@end

