/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACRemoteAccountStoreProtocol <NSObject>
@required
-(void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(/*^block*/id)arg2;
-(void)registerMonitorForAccountsOfTypes:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setNotificationsEnabled:(BOOL)arg1;
-(void)accountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2;
-(void)accountTypeWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2;
-(void)accountsWithHandler:(/*^block*/id)arg1;
-(void)accountsWithAccountType:(id)arg1 handler:(/*^block*/id)arg2;
-(void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(/*^block*/id)arg3;
-(void)accountsOnPairedDeviceWithAccountType:(id)arg1 handler:(/*^block*/id)arg2;
-(void)dataclassesWithHandler:(/*^block*/id)arg1;
-(void)accountTypesWithHandler:(/*^block*/id)arg1;
-(void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(/*^block*/id)arg2;
-(void)accountExistsWithDescription:(id)arg1 completion:(/*^block*/id)arg2;
-(void)isPushSupportedForAccount:(id)arg1 completion:(/*^block*/id)arg2;
-(void)insertAccountType:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)removeAccountType:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(/*^block*/id)arg3;
-(void)canSaveAccount:(id)arg1 completion:(/*^block*/id)arg2;
-(void)saveAccount:(id)arg1 verify:(BOOL)arg2 dataclassActions:(id)arg3 completion:(/*^block*/id)arg4;
-(void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)accessKeysForAccountType:(id)arg1 handler:(/*^block*/id)arg2;
-(void)appPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(/*^block*/id)arg4;
-(void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)permissionForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)grantedPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3;
-(void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3;
-(void)migrateCredentialForAccount:(id)arg1 completion:(/*^block*/id)arg2;
-(void)credentialForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2;
-(void)credentialForAccount:(id)arg1 serviceID:(id)arg2 handler:(/*^block*/id)arg3;
-(void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)credentialItemsWithCompletion:(/*^block*/id)arg1;
-(void)credentialItemForAccount:(id)arg1 serviceName:(id)arg2 completion:(/*^block*/id)arg3;
-(void)insertCredentialItem:(id)arg1 completion:(/*^block*/id)arg2;
-(void)saveCredentialItem:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeCredentialItem:(id)arg1 completion:(/*^block*/id)arg2;
-(void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2;
-(void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2;
-(void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(/*^block*/id)arg3;
-(void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2;
-(void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2;
-(void)supportedDataclassesForAccountType:(id)arg1 handler:(/*^block*/id)arg2;
-(void)syncableDataclassesForAccountType:(id)arg1 handler:(/*^block*/id)arg2;
-(void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2;
-(void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(/*^block*/id)arg2;
-(void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(/*^block*/id)arg2;
-(void)preloadDataclassOwnersWithCompletion:(/*^block*/id)arg1;
-(void)dataclassActionsForAccountSave:(id)arg1 completion:(/*^block*/id)arg2;
-(void)dataclassActionsForAccountDeletion:(id)arg1 completion:(/*^block*/id)arg2;
-(void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(/*^block*/id)arg2;
-(void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(/*^block*/id)arg2;
-(void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(/*^block*/id)arg2;
-(void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(/*^block*/id)arg3;
-(void)clientTokenForAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addClientToken:(id)arg1 forAccountIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3;
-(void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 completion:(/*^block*/id)arg3;
-(void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeAccountsFromPairedDeviceWithCompletion:(/*^block*/id)arg1;
-(void)triggerKeychainMigrationIfNecessary:(/*^block*/id)arg1;
-(void)typeIdentifierForDomain:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)handleURL:(id)arg1;
-(void)scheduleBackupIfNonexistent:(/*^block*/id)arg1;
-(void)resetDatabaseToVersion:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)shutdownAccountsD:(/*^block*/id)arg1;
-(void)setClientBundleID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)saveAccount:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2;

@end

