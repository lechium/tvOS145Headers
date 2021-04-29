/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNDataMapper.h>

@protocol CNContactsLogger;
@class CNiOSAddressBook, CNContactsEnvironment, CNManagedConfiguration, CNManagedAccountsCache, NSString;

@interface CNiOSAddressBookDataMapper : NSObject <CNDataMapper> {

	CNiOSAddressBook* _addressBook;
	CNContactsEnvironment* _environment;
	id<CNContactsLogger> _logger;
	CNManagedConfiguration* _managedConfiguration;
	CNManagedAccountsCache* _managedAccountsCache;

}

@property (nonatomic,retain) NSString * legacyTetheredSyncDeviceAnchor; 
@property (nonatomic,retain) NSString * legacyTetheredSyncComputerAnchor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)contactBuffersDecoderForFetchRequest:(id)arg1 ;
+(id)encodedPeopleFetcherForForFetchRequest:(id)arg1 addressBook:(void*)arg2 managedConfiguration:(id)arg3 completionHandler:(/*^block*/id)arg4 environment:(id)arg5 ;
-(id)init;
-(BOOL)hasMultipleGroupsOrAccounts;
-(BOOL)resetSortDataIfNeededWithError:(id*)arg1 ;
-(id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id*)arg2 ;
-(id)unifiedContactCountWithError:(id*)arg1 ;
-(id)contactCountForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)meContactIdentifiers:(id*)arg1 ;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)defaultContainerIdentifier;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMeContact:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3 ;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)executeFetchRequest:(id)arg1 progressiveResults:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)currentHistoryToken;
-(id)currentHistoryAnchor;
-(id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 ;
-(id)userActivityUserInfoForContact:(id)arg1 ;
-(id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeChangeHistoryClearRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithContactsEnvironment:(id)arg1 managedConfiguration:(id)arg2 ;
-(void)requestAccessForEntityType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)requestAccessForEntityType:(long long)arg1 error:(id*)arg2 ;
-(BOOL)executeSaveRequest:(id)arg1 response:(id*)arg2 authorizationContext:(id)arg3 error:(id*)arg4 ;
-(id)authorizedKeysForContactKeys:(id)arg1 error:(id*)arg2 ;
-(id)contactObservableForFetchRequest:(id)arg1 ;
-(id)identifierWithError:(id*)arg1 ;
-(int)saveSequenceCount;
-(BOOL)moveContacts:(id)arg1 fromContainer:(id)arg2 toContainer:(id)arg3 error:(id*)arg4 ;
-(id)groupsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4 ;
-(id)descriptorForRequiredKeysForMatchingDictionary;
-(id)matchingDictionaryForContact:(id)arg1 ;
-(id)contactIdentifierWithMatchingDictionary:(id)arg1 ;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)setDefaultAccountIdentifier:(id)arg1 error:(id*)arg2 ;
-(NSString *)legacyTetheredSyncDeviceAnchor;
-(void)setLegacyTetheredSyncDeviceAnchor:(NSString *)arg1 ;
-(NSString *)legacyTetheredSyncComputerAnchor;
-(void)setLegacyTetheredSyncComputerAnchor:(NSString *)arg1 ;
-(BOOL)fetchContactsForFetchRequest:(id)arg1 error:(id*)arg2 batchHandler:(/*^block*/id)arg3 ;
-(id)encodedContactsCursorForFetchRequest:(id)arg1 cursorCleanupBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
@end
