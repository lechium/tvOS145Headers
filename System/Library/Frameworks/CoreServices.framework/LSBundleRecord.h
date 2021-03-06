/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSRecord.h>

@class FSNode, NSString, LSPropertyList, NSURL, NSDictionary, NSArray, _LSLocalizedStringRecord, _LSLazyPropertyList, LSBundleProxy, NSDate, NSSet;

@interface LSBundleRecord : LSRecord {

	SCD_Struct_LS14* _auditToken;
	id _cachedDataContainerURL;
	FSNode* _node;
	NSString* _bundleIdentifier;

}

@property (readonly) LSPropertyList * infoDictionary; 
@property (readonly) LSPropertyList * entitlements; 
@property (readonly) NSURL * dataContainerURL; 
@property (readonly) NSDictionary * groupContainerURLs; 
@property (readonly) NSString * localizedName; 
@property (readonly) NSString * localizedShortName; 
@property (readonly) NSString * signerOrganization; 
@property (getter=isProfileValidated,readonly) BOOL profileValidated; 
@property (getter=isUPPValidated,readonly) BOOL UPPValidated; 
@property (getter=isFreeProfileValidated,readonly) BOOL freeProfileValidated; 
@property (readonly) unsigned codeSignatureVersion; 
@property (readonly) NSArray * managedPersonas; 
@property (readonly) NSArray * UIBackgroundModes; 
@property (readonly) NSString * accentColorName; 
@property (readonly) NSArray * WKBackgroundModes; 
@property (readonly) BOOL supportsNowPlaying; 
@property (readonly) NSDictionary * intentDefinitionURLs; 
@property (readonly) NSArray * supportedIntents; 
@property (readonly) NSArray * intentsRestrictedWhileLocked; 
@property (readonly) NSArray * intentsRestrictedWhileProtectedDataUnavailable; 
@property (readonly) NSArray * supportedIntentMediaCategories; 
@property (readonly) NSString * _fallbackLocalizedName; 
@property (readonly) _LSLocalizedStringRecord * _localizedName; 
@property (readonly) _LSLocalizedStringRecord * _localizedShortName; 
@property (readonly) _LSLazyPropertyList * _rawGroupContainerURLs; 
@property (nonatomic,readonly) FSNode * _node;                                              //@synthesize node=_node - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_LS14* _auditToken; 
@property (nonatomic,readonly) LSVersionNumber _bundleVersion; 
@property (nonatomic,readonly) LSBundleRecord * _realRecord; 
@property (readonly) BOOL _usesSystemPersona; 
@property (readonly) BOOL _containerized; 
@property (readonly) unsigned long long _containerClass; 
@property (readonly) NSURL * _dataContainerURLFromDatabase; 
@property (readonly) unsigned char _profileValidationState; 
@property (nonatomic,readonly) LSBundleProxy * compatibilityObject; 
@property (readonly) NSString * bundleIdentifier;                                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSString * applicationIdentifier; 
@property (readonly) NSURL * URL; 
@property (readonly) NSURL * executableURL; 
@property (readonly) NSString * bundleVersion; 
@property (readonly) char developerType; 
@property (readonly) NSDate * registrationDate; 
@property (readonly) NSArray * machOUUIDs; 
@property (readonly) NSString * SDKVersion; 
@property (readonly) unsigned platform; 
@property (readonly) NSSet * claimRecords; 
@property (readonly) NSSet * exportedTypeRecords; 
@property (readonly) NSSet * importedTypeRecords; 
@property (readonly) NSSet * serviceRecords; 
+(id)bundleRecordForCurrentProcess;
+(BOOL)supportsSecureCoding;
+(id)bundleRecordWithBundleIdentifier:(id)arg1 allowPlaceholder:(BOOL)arg2 error:(id*)arg3 ;
+(id)_propertyClasses;
+(id)bundleRecordWithApplicationIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)bundleRecordForAuditToken:(SCD_Struct_LS14)arg1 error:(id*)arg2 ;
+(id)_bundleRecordForAuditToken:(SCD_Struct_LS14)arg1 checkNSBundleMainBundle:(unsigned char)arg2 error:(id*)arg3 ;
+(id)coreTypesBundleRecord;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)>>>*)_resolvingMethods;
-(id)if_allIntentDefinitionURLs;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)debugDescription;
-(void)dealloc;
-(NSString *)SDKVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(NSString *)bundleIdentifier;
-(NSString *)localizedName;
-(LSPropertyList *)infoDictionary;
-(NSURL *)executableURL;
-(unsigned long long)_containerClass;
-(_LSLocalizedStringRecord *)_localizedName;
-(_LSLocalizedStringRecord *)_localizedShortName;
-(const SCD_Struct_LS14*)_auditToken;
-(NSURL *)dataContainerURL;
-(NSArray *)UIBackgroundModes;
-(LSPropertyList *)entitlements;
-(NSString *)bundleVersion;
-(LSVersionNumber)_bundleVersion;
-(FSNode *)_node;
-(unsigned)platform;
-(NSString *)localizedShortName;
-(NSString *)applicationIdentifier;
-(NSDictionary *)intentDefinitionURLs;
-(NSArray *)supportedIntents;
-(NSArray *)supportedIntentMediaCategories;
-(NSArray *)intentsRestrictedWhileProtectedDataUnavailable;
-(NSArray *)intentsRestrictedWhileLocked;
-(NSDate *)registrationDate;
-(BOOL)isProfileValidated;
-(NSArray *)machOUUIDs;
-(NSDictionary *)groupContainerURLs;
-(NSArray *)managedPersonas;
-(char)developerType;
-(id)localizedShortNameWithPreferredLocalizations:(id)arg1 ;
-(id)localizedNameWithPreferredLocalizations:(id)arg1 ;
-(NSURL *)_dataContainerURLFromDatabase;
-(NSSet *)claimRecords;
-(BOOL)isUPPValidated;
-(BOOL)isFreeProfileValidated;
-(BOOL)_usesSystemPersona;
-(id)_initWithNode:(id)arg1 bundleIdentifier:(id)arg2 context:(LSContext*)arg3 tableID:(unsigned)arg4 unitID:(unsigned)arg5 bundleBaseData:(const LSBundleBaseData*)arg6 error:(id*)arg7 ;
-(id)_initWithContext:(LSContext*)arg1 persistentIdentifierData:(const LSPersistentIdentifierData*)arg2 length:(unsigned long long)arg3 ;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(BOOL)_containerized;
-(id)executableURLWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(char)developerTypeWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)registrationDateWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(id)machOUUIDsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(id)SDKVersionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(unsigned)platformWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(id)claimRecordsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)exported:(BOOL)arg1 typesWithContext:(LSContext*)arg2 tableID:(unsigned)arg3 unitID:(unsigned)arg4 unitBytes:(const LSBundleData*)arg5 ;
-(id)exportedTypeRecordsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSSet *)exportedTypeRecords;
-(id)importedTypeRecordsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSSet *)importedTypeRecords;
-(LSVersionNumber)_bundleVersionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(unsigned char)_profileValidationStateWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(unsigned char)_profileValidationState;
-(id)_rawGroupContainerURLsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(_LSLazyPropertyList *)_rawGroupContainerURLs;
-(id)_dataContainerURLFromDatabaseWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(id)_localizedShort:(BOOL)arg1 nameWithContext:(LSContext*)arg2 tableID:(unsigned)arg3 unitID:(unsigned)arg4 bundleData:(const LSBundleBaseData*)arg5 ;
-(id)_localizedNameWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(id)_localizedShortNameWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(void)_LSRecord_resolve_executableURL;
-(void)_LSRecord_resolve_developerType;
-(void)_LSRecord_resolve_registrationDate;
-(void)_LSRecord_resolve_machOUUIDs;
-(void)_LSRecord_resolve_SDKVersion;
-(void)_LSRecord_resolve_platform;
-(void)_LSRecord_resolve_claimRecords;
-(void)_LSRecord_resolve_exportedTypeRecords;
-(void)_LSRecord_resolve_importedTypeRecords;
-(NSSet *)serviceRecords;
-(void)_LSRecord_resolve__bundleVersion;
-(LSBundleRecord *)_realRecord;
-(void)_LSRecord_resolve__profileValidationState;
-(void)_LSRecord_resolve__rawGroupContainerURLs;
-(void)_LSRecord_resolve__dataContainerURLFromDatabase;
-(id)_cachedDataContainerURL;
-(NSString *)_fallbackLocalizedName;
-(void)_LSRecord_resolve__localizedName;
-(void)_LSRecord_resolve__localizedShortName;
-(id)infoDictionaryWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(void)_LSRecord_resolve_infoDictionary;
-(id)entitlementsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(void)_LSRecord_resolve_entitlements;
-(id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 ;
-(id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 preferredLocalizations:(id)arg2 ;
-(id)signerOrganizationWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(unsigned)codeSignatureVersionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(void)_LSRecord_resolve_signerOrganization;
-(void)_LSRecord_resolve_codeSignatureVersion;
-(NSString *)accentColorName;
-(NSArray *)WKBackgroundModes;
-(BOOL)supportsNowPlaying;
-(id)intentDefinitionURLsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(void)_LSRecord_resolve_intentDefinitionURLs;
-(NSString *)signerOrganization;
-(unsigned)codeSignatureVersion;
@end

