/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSResourceProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSUUID, NSArray, _LSLazyPropertyList, _LSBundleIDValidationToken, LSApplicationProxy, NSDictionary;

@interface LSBundleProxy : LSResourceProxy <NSSecureCoding> {

	NSString* _localizedShortName;
	BOOL _foundBackingBundle;
	BOOL _containerized;
	NSString* _bundleIdentifier;
	NSURL* _bundleURL;
	NSString* _bundleExecutable;
	NSURL* _bundleContainerURL;
	NSString* _bundleVersion;
	NSString* _sdkVersion;
	NSString* _signerIdentity;
	NSString* _signerOrganization;
	NSUUID* _cacheGUID;
	unsigned long long _sequenceNumber;
	NSArray* _machOUUIDs;
	unsigned long long _compatibilityState;
	_LSLazyPropertyList* __infoDictionary;
	_LSLazyPropertyList* __entitlements;
	_LSLazyPropertyList* __environmentVariables;
	_LSBundleIDValidationToken* __validationToken;

}

@property (readonly) BOOL _inf_isSystem; 
@property (readonly) BOOL if_isSystem; 
@property (readonly) BOOL if_isAppExtension; 
@property (readonly) BOOL if_isWatchKitAppExtension; 
@property (readonly) LSApplicationProxy * if_containingAppProxy; 
@property (nonatomic,readonly) NSString * localizedShortName; 
@property (setter=_setInfoDictionary:,nonatomic,copy) _LSLazyPropertyList * _infoDictionary;                          //@synthesize _infoDictionary=__infoDictionary - In the implementation block
@property (nonatomic,copy) NSArray * machOUUIDs;                                                                      //@synthesize machOUUIDs=_machOUUIDs - In the implementation block
@property (setter=setSDKVersion:,nonatomic,copy) NSString * sdkVersion;                                               //@synthesize sdkVersion=_sdkVersion - In the implementation block
@property (setter=_setEntitlements:,nonatomic,copy) _LSLazyPropertyList * _entitlements;                              //@synthesize _entitlements=__entitlements - In the implementation block
@property (setter=_setEnvironmentVariables:,nonatomic,copy) _LSLazyPropertyList * _environmentVariables;              //@synthesize _environmentVariables=__environmentVariables - In the implementation block
@property (setter=_setValidationToken:,nonatomic,retain) _LSBundleIDValidationToken * _validationToken;               //@synthesize _validationToken=__validationToken - In the implementation block
@property (assign,setter=_setCompatibilityState:,nonatomic) unsigned long long compatibilityState;                    //@synthesize compatibilityState=_compatibilityState - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                                                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleType; 
@property (nonatomic,readonly) NSURL * bundleURL;                                                                     //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,readonly) NSString * bundleExecutable;                                                           //@synthesize bundleExecutable=_bundleExecutable - In the implementation block
@property (nonatomic,readonly) NSString * canonicalExecutablePath; 
@property (nonatomic,readonly) NSURL * containerURL; 
@property (nonatomic,readonly) NSURL * dataContainerURL; 
@property (nonatomic,readonly) NSURL * bundleContainerURL;                                                            //@synthesize bundleContainerURL=_bundleContainerURL - In the implementation block
@property (nonatomic,readonly) NSURL * appStoreReceiptURL; 
@property (nonatomic,readonly) NSString * bundleVersion;                                                              //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,readonly) NSString * signerIdentity;                                                             //@synthesize signerIdentity=_signerIdentity - In the implementation block
@property (nonatomic,readonly) NSDictionary * entitlements; 
@property (nonatomic,readonly) NSDictionary * environmentVariables; 
@property (nonatomic,readonly) NSDictionary * groupContainerURLs; 
@property (nonatomic,readonly) BOOL foundBackingBundle;                                                               //@synthesize foundBackingBundle=_foundBackingBundle - In the implementation block
@property (getter=isContainerized,nonatomic,readonly) BOOL containerized;                                             //@synthesize containerized=_containerized - In the implementation block
@property (nonatomic,readonly) BOOL profileValidated; 
@property (nonatomic,readonly) BOOL UPPValidated; 
@property (nonatomic,readonly) BOOL freeProfileValidated; 
@property (nonatomic,readonly) NSString * signerOrganization;                                                         //@synthesize signerOrganization=_signerOrganization - In the implementation block
@property (nonatomic,readonly) NSUUID * cacheGUID;                                                                    //@synthesize cacheGUID=_cacheGUID - In the implementation block
@property (nonatomic,readonly) unsigned long long sequenceNumber;                                                     //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
+(id)hk_appExtensionContainerBundleForConnection:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)bundleProxyForCurrentProcess;
+(id)bundleProxyWithAuditToken:(SCD_Struct_LS14)arg1 error:(id*)arg2 ;
+(id)bundleProxyForURL:(id)arg1 ;
+(id)bundleProxyForIdentifier:(id)arg1 ;
+(BOOL)canInstantiateFromDatabase;
+(id)bundleProxyForURL:(id)arg1 error:(id*)arg2 ;
+(void)clearBundleProxyForCurrentProcess;
-(BOOL)isEntitledForUserManagement;
-(BOOL)if_isSystem;
-(BOOL)_inf_isSystem;
-(BOOL)if_isAppExtension;
-(BOOL)if_isWatchKitAppExtension;
-(LSApplicationProxy *)if_containingAppProxy;
-(id)un_applicationBundleURL;
-(id)un_applicationBundleIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_LSLazyPropertyList *)_entitlements;
-(NSString *)bundleIdentifier;
-(id)localizedName;
-(NSURL *)bundleURL;
-(NSURL *)appStoreReceiptURL;
-(_LSLazyPropertyList *)_infoDictionary;
-(unsigned long long)sequenceNumber;
-(id)objectsForInfoDictionaryKeys:(id)arg1 ;
-(id)entitlementValuesForKeys:(id)arg1 ;
-(NSString *)canonicalExecutablePath;
-(NSURL *)bundleContainerURL;
-(NSURL *)dataContainerURL;
-(NSString *)signerIdentity;
-(NSString *)sdkVersion;
-(NSDictionary *)environmentVariables;
-(NSDictionary *)entitlements;
-(_LSLazyPropertyList *)_environmentVariables;
-(NSString *)bundleVersion;
-(NSString *)bundleType;
-(NSUUID *)cacheGUID;
-(NSString *)localizedShortName;
-(BOOL)isContainerized;
-(id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 ;
-(id)entitlementValueForKey:(id)arg1 ofClass:(Class)arg2 ;
-(NSString *)bundleExecutable;
-(NSArray *)machOUUIDs;
-(NSDictionary *)groupContainerURLs;
-(unsigned long long)compatibilityState;
-(NSURL *)containerURL;
-(BOOL)foundBackingBundle;
-(id)entitlementValueForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(id)_initWithBundleUnit:(unsigned)arg1 context:(LSContext*)arg2 bundleType:(unsigned long long)arg3 bundleID:(id)arg4 localizedName:(id)arg5 bundleContainerURL:(id)arg6 dataContainerURL:(id)arg7 resourcesDirectoryURL:(id)arg8 iconsDictionary:(id)arg9 iconFileNames:(id)arg10 version:(id)arg11 ;
-(id)_managedPersonas;
-(BOOL)_usesSystemPersona;
-(_LSBundleIDValidationToken *)_validationToken;
-(id)_localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(BOOL)arg2 ;
-(id)appStoreReceiptName;
-(id)_valueForEqualityTesting;
-(BOOL)_hasAssociatedPersonas;
-(id)localizedValuesForKeys:(id)arg1 fromTable:(id)arg2 ;
-(void)setSDKVersion:(id)arg1 ;
-(NSString *)signerOrganization;
-(void)setMachOUUIDs:(NSArray *)arg1 ;
-(void)_setCompatibilityState:(unsigned long long)arg1 ;
-(void)_setInfoDictionary:(id)arg1 ;
-(void)_setEntitlements:(id)arg1 ;
-(void)_setEnvironmentVariables:(id)arg1 ;
-(void)_setValidationToken:(id)arg1 ;
-(id)localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(BOOL)arg2 ;
@end

