/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/ACProtobufCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObject;
@class ACAccountStore, NSString, ACAccountType, ACAccountCredential, NSMutableDictionary, NSURL, NSDate, NSArray, ACMutableTrackedSet, NSMutableSet, NSDictionary, NSNumber, ACTrackedSet, NSSet;

@interface ACAccount : NSObject <ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding> {

	ACAccountStore* _accountStore;
	NSString* _identifier;
	NSString* _accountDescription;
	NSString* _owningBundleID;
	NSString* _username;
	NSString* _authenticationType;
	NSString* _credentialType;
	NSString* _clientToken;
	ACAccountType* _accountType;
	ACAccountCredential* _credential;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _dataclassProperties;
	NSURL* _objectID;
	NSDate* _date;
	NSDate* _lastCredentialRenewalRejectionDate;
	NSString* _modificationID;
	ACAccount* _parentAccount;
	NSArray* _childAccounts;
	ACMutableTrackedSet* _trackedProvisionedDataclasses;
	ACMutableTrackedSet* _trackedEnabledDataclasses;
	NSMutableSet* _dirtyProperties;
	NSMutableSet* _dirtyAccountProperties;
	NSMutableSet* _dirtyDataclassProperties;
	id<NSObject> _credentialsDidChangeObserver;
	/*^block*/id _accountPropertiesTransformer;
	BOOL _haveCheckedForClientToken;
	BOOL _accountAccessAvailable;
	BOOL _authenticated;
	BOOL _active;
	BOOL _warmingUp;
	BOOL _supportsAuthentication;
	BOOL _visible;
	BOOL _haveCheckedForChildAccounts;
	BOOL _wasProvisionedDataclassesReset;
	BOOL _wasEnabledDataclassesReset;

}

@property (nonatomic,retain) NSDictionary * communicationServiceRules; 
@property (nonatomic,retain) NSString * mcAccountIdentifier; 
@property (nonatomic,retain) NSString * mcConfigurationProfileIdentifier; 
@property (nonatomic,retain) NSString * mcProfileUUID; 
@property (nonatomic,retain) NSString * mcPayloadUUID; 
@property (nonatomic,retain) NSNumber * mcEASAccountEnableNotes; 
@property (nonatomic,retain) NSNumber * mcEnableMailUserOverridable; 
@property (nonatomic,retain) NSNumber * mcEnableContactsUserOverridable; 
@property (nonatomic,retain) NSNumber * mcEnableCalendarsUserOverridable; 
@property (nonatomic,retain) NSNumber * mcEnableRemindersUserOverridable; 
@property (nonatomic,retain) NSNumber * mcEnableNotesUserOverridable; 
@property (nonatomic,copy) ACTrackedSet * trackedProvisionedDataclasses;               //@synthesize trackedProvisionedDataclasses=_trackedProvisionedDataclasses - In the implementation block
@property (nonatomic,readonly) BOOL wasProvisionedDataclassesReset;                    //@synthesize wasProvisionedDataclassesReset=_wasProvisionedDataclassesReset - In the implementation block
@property (nonatomic,copy) ACTrackedSet * trackedEnabledDataclasses;                   //@synthesize trackedEnabledDataclasses=_trackedEnabledDataclasses - In the implementation block
@property (nonatomic,readonly) BOOL wasEnabledDataclassesReset;                        //@synthesize wasEnabledDataclassesReset=_wasEnabledDataclassesReset - In the implementation block
@property (nonatomic,readonly) ACAccountCredential * internalCredential; 
@property (nonatomic,readonly) NSString * modificationID; 
@property (nonatomic,readonly) NSURL * objectID; 
@property (nonatomic,readonly) ACAccountStore * accountStore; 
@property (nonatomic,retain) ACAccount * parentAccount; 
@property (nonatomic,readonly) NSString * parentAccountIdentifier; 
@property (nonatomic,readonly) NSArray * childAccounts; 
@property (nonatomic,retain) NSMutableSet * enabledDataclasses; 
@property (nonatomic,retain) NSMutableSet * provisionedDataclasses; 
@property (nonatomic,__weak,readonly) NSDictionary * dataclassProperties; 
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated; 
@property (nonatomic,__weak,readonly) NSDictionary * accountProperties; 
@property (nonatomic,__weak,readonly) ACAccount * displayAccount; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic) BOOL supportsAuthentication; 
@property (assign,getter=isWarmingUp,nonatomic) BOOL warmingUp; 
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
@property (nonatomic,readonly) NSSet * dirtyProperties; 
@property (nonatomic,readonly) NSSet * dirtyAccountProperties; 
@property (nonatomic,readonly) NSSet * dirtyDataclassProperties; 
@property (nonatomic,readonly) NSString * authenticationType; 
@property (nonatomic,readonly) NSString * credentialType; 
@property (nonatomic,readonly) BOOL supportsPush; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,getter=isVisible,nonatomic) BOOL visible; 
@property (nonatomic,retain) NSDate * lastCredentialRenewalRejectionDate; 
@property (nonatomic,readonly) NSString * shortDebugName; 
@property (nonatomic,readonly) NSString * clientToken; 
@property (copy) id accountPropertiesTransformer;                                      //@synthesize accountPropertiesTransformer=_accountPropertiesTransformer - In the implementation block
@property (retain) NSString * managingOwnerIdentifier; 
@property (retain) NSString * managingSourceName; 
@property (nonatomic,__weak,readonly) NSString * identifier; 
@property (nonatomic,retain) ACAccountType * accountType; 
@property (nonatomic,copy) NSString * accountDescription; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,readonly) NSString * userFullName; 
@property (nonatomic,retain) ACAccountCredential * credential; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keypathsRequiredForInitialization;
-(NSDictionary *)communicationServiceRules;
-(void)setCommunicationServiceRules:(NSDictionary *)arg1 ;
-(BOOL)MCIsManaged;
-(NSString *)mcAccountIdentifier;
-(void)setMcAccountIdentifier:(NSString *)arg1 ;
-(NSString *)mcConfigurationProfileIdentifier;
-(void)setMcConfigurationProfileIdentifier:(NSString *)arg1 ;
-(NSString *)mcProfileUUID;
-(void)setMcProfileUUID:(NSString *)arg1 ;
-(NSString *)mcPayloadUUID;
-(void)setMcPayloadUUID:(NSString *)arg1 ;
-(NSNumber *)mcEASAccountEnableNotes;
-(void)setMcEASAccountEnableNotes:(NSNumber *)arg1 ;
-(NSNumber *)mcEnableMailUserOverridable;
-(void)setMcEnableMailUserOverridable:(NSNumber *)arg1 ;
-(NSNumber *)mcEnableContactsUserOverridable;
-(void)setMcEnableContactsUserOverridable:(NSNumber *)arg1 ;
-(NSNumber *)mcEnableCalendarsUserOverridable;
-(void)setMcEnableCalendarsUserOverridable:(NSNumber *)arg1 ;
-(NSNumber *)mcEnableRemindersUserOverridable;
-(void)setMcEnableRemindersUserOverridable:(NSNumber *)arg1 ;
-(NSNumber *)mcEnableNotesUserOverridable;
-(void)setMcEnableNotesUserOverridable:(NSNumber *)arg1 ;
-(id)mcBackingProfile;
-(id)mcBackingPayload;
-(BOOL)mc_isUserEnrollmentAccount;
-(void)unenrollAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)identifier;
-(NSDate *)creationDate;
-(ACAccountCredential *)credential;
-(NSString *)username;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSURL *)objectID;
-(BOOL)isActive;
-(void)refresh;
-(BOOL)authenticated;
-(BOOL)isAuthenticated;
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(NSString *)modificationID;
-(void)_setAccountStore:(id)arg1 ;
-(NSDate *)lastCredentialRenewalRejectionDate;
-(NSDictionary *)dataclassProperties;
-(NSString *)authenticationType;
-(NSString *)accountDescription;
-(BOOL)supportsAuthentication;
-(id)owningBundleID;
-(NSString *)credentialType;
-(NSArray *)childAccounts;
-(NSMutableSet *)provisionedDataclasses;
-(ACAccount *)parentAccount;
-(ACAccountType *)accountType;
-(NSMutableSet *)enabledDataclasses;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isDirty;
-(void)_setObjectID:(id)arg1 ;
-(void)_clearCachedChildAccounts;
-(void)_clearDirtyProperties;
-(void)_clearCachedCredentials;
-(ACAccountStore *)accountStore;
-(id)qualifiedUsername;
-(id)portableCopy;
-(void)setAuthenticationType:(NSString *)arg1 ;
-(void)setParentAccount:(ACAccount *)arg1 ;
-(ACAccountCredential *)internalCredential;
-(void)setCredential:(ACAccountCredential *)arg1 ;
-(void)setCredentialType:(NSString *)arg1 ;
-(void)setSupportsAuthentication:(BOOL)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)setAccountDescription:(NSString *)arg1 ;
-(void)setOwningBundleID:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(void)setProvisioned:(BOOL)arg1 forDataclass:(id)arg2 ;
-(id)accountPropertyForKey:(id)arg1 ;
-(void)setAccountType:(ACAccountType *)arg1 ;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(BOOL)isProvisionedForDataclass:(id)arg1 ;
-(id)initWithAccountType:(id)arg1 ;
-(void)_installCredentialsChangedObserver;
-(void)_unsafe_markPropertyDirty:(id)arg1 ;
-(id)initWithManagedAccount:(id)arg1 ;
-(void)credentialsChanged:(id)arg1 ;
-(NSDictionary *)accountProperties;
-(id)accountPropertiesTransformer;
-(void)_markAccountPropertyDirty:(id)arg1 ;
-(id)_initWithProtobuf:(id)arg1 ;
-(NSSet *)dirtyProperties;
-(NSSet *)dirtyAccountProperties;
-(NSSet *)dirtyDataclassProperties;
-(id)_encodeProtobuf;
-(void)setLastCredentialRenewalRejectionDate:(NSDate *)arg1 ;
-(void)setWarmingUp:(BOOL)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)setProvisionedDataclasses:(NSMutableSet *)arg1 ;
-(void)setEnabledDataclasses:(NSMutableSet *)arg1 ;
-(void)_loadAllCachedProperties;
-(NSString *)parentAccountIdentifier;
-(BOOL)isVisible;
-(BOOL)isWarmingUp;
-(BOOL)isPropertyDirty:(id)arg1 ;
-(void)_unsafe_markAccountPropertyDirty:(id)arg1 ;
-(void)_unsafe_markDataclassPropertyDirty:(id)arg1 ;
-(void)_markPropertyDirty:(id)arg1 ;
-(BOOL)_useParentForCredentials;
-(id)credentialWithError:(id*)arg1 ;
-(ACAccount *)displayAccount;
-(void)_markDataclassPropertyDirty:(id)arg1 ;
-(id)propertiesForDataclass:(id)arg1 ;
-(ACTrackedSet *)trackedProvisionedDataclasses;
-(ACTrackedSet *)trackedEnabledDataclasses;
-(void)reload;
-(NSString *)clientToken;
-(BOOL)addClientToken:(id)arg1 ;
-(id)personaIdentifier;
-(BOOL)isDataSeparatedAccount;
-(id)childAccountsWithAccountTypeIdentifier:(id)arg1 ;
-(id)_initWithProtobufData:(id)arg1 ;
-(id)_encodeProtobufData;
-(id)initWithManagedAccount:(id)arg1 accountStore:(id)arg2 ;
-(id)fullDescription;
-(void)markAllPropertiesDirty;
-(void)setDirty:(BOOL)arg1 forProperty:(id)arg2 ;
-(void)_markCredentialDirty;
-(NSString *)userFullName;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setAccountProperties:(NSDictionary *)arg1 ;
-(BOOL)supportsPush;
-(BOOL)isEnabledToSyncDataclass:(id)arg1 ;
-(void)setDataclassProperties:(NSDictionary *)arg1 ;
-(void)setProperties:(id)arg1 forDataclass:(id)arg2 ;
-(void)takeValuesFromModifiedAccount:(id)arg1 ;
-(id)accountByCleaningThirdPartyTransformations;
-(id)defaultAutodiscoverDomainForChildType:(id)arg1 ;
-(NSString *)shortDebugName;
-(void)_applyDirtyStateFromAccount:(id)arg1 ;
-(BOOL)_isDifferentFrom:(id)arg1 ;
-(void)setSecIdentity:(SecIdentityRef)arg1 ;
-(SecIdentityRef)copySecIdentity;
-(void)setSecCertificates:(id)arg1 ;
-(id)secCertificates;
-(BOOL)correctPersonaScopedForAccount;
-(id)childCardDAVAccountIdentifier;
-(void)setChildCardDAVAccountIdentifier:(id)arg1 ;
-(NSString *)managingOwnerIdentifier;
-(void)setManagingOwnerIdentifier:(NSString *)arg1 ;
-(NSString *)managingSourceName;
-(void)setManagingSourceName:(NSString *)arg1 ;
-(void)setTrackedProvisionedDataclasses:(ACTrackedSet *)arg1 ;
-(BOOL)wasProvisionedDataclassesReset;
-(void)setTrackedEnabledDataclasses:(ACTrackedSet *)arg1 ;
-(BOOL)wasEnabledDataclassesReset;
-(void)setAccountPropertiesTransformer:(id)arg1 ;
@end

