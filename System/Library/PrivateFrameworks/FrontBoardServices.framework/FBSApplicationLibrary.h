/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/FBSApplicationInfoProvider.h>

@protocol OS_dispatch_queue;
@class FBSApplicationLibraryConfiguration, LSApplicationWorkspace, NSObject, NSMapTable, NSMutableDictionary, NSMutableSet, NSMutableArray, NSString;

@interface FBSApplicationLibrary : NSObject <LSApplicationWorkspaceObserverProtocol, FBSApplicationInfoProvider> {

	FBSApplicationLibraryConfiguration* _configuration;
	LSApplicationWorkspace* _applicationWorkspace;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSMapTable* _observerQueue_tokensToBlocks;
	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _workQueue_usingNetwork;
	NSMutableDictionary* _workQueue_installedApplicationsByBundleID;
	NSMutableDictionary* _workQueue_placeholdersByBundleID;
	NSMutableSet* _workQueue_injectedAppIdentifiers;
	unsigned long long _workQueue_synchronizationActionCount;
	NSMutableArray* _workQueue_pendingSynchronizationExecutionBlocks;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	NSObject*<OS_dispatch_queue> _completionQueue;
	BOOL _initializing;

}

@property (getter=isUsingNetwork,nonatomic,readonly) BOOL usingNetwork; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
-(void)uninstallApplication:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)applicationInfoForBundleIdentifier:(id)arg1 ;
-(id)applicationInfoForAuditToken:(id)arg1 ;
-(void)synchronize:(/*^block*/id)arg1 ;
-(id)_initWithApplicationWorkspace:(id)arg1 configuration:(id)arg2 ;
-(void)_reloadPlaceholdersNotificationFired;
-(void)_load;
-(id)_observeType:(long long)arg1 withBlock:(id)arg2 ;
-(void)_workQueue_addApplicationProxy:(id)arg1 withOverrideURL:(id)arg2 ;
-(void)_workQueue_incrementSynchronizationActionCount;
-(void)_workQueue_removeInstalledApplicationFromModelForBundleID:(id)arg1 withReason:(id)arg2 ;
-(void)_workQueue_decrementSynchronizationActionCount;
-(void)_executeOrPendInstallSynchronizationBlock:(/*^block*/id)arg1 ;
-(void)_workQueue_executeInstallSynchronizationBlocksIfAppropriate;
-(void)_notifyForType:(long long)arg1 synchronously:(BOOL)arg2 withCastingBlock:(/*^block*/id)arg3 ;
-(id)_workQueue_currentProcessProxyWithOutURL:(id*)arg1 ;
-(id)_workQueue_placeholdersForProxies:(id)arg1 updateExistingIfNecessary:(BOOL)arg2 createIfNecessary:(BOOL)arg3 createReason:(id)arg4 createdPlaceholders:(id*)arg5 existingPlaceholders:(id*)arg6 filterExistingPlaceholders:(id*)arg7 unmappedProxies:(id*)arg8 ;
-(id)_workQueue_applicationsForProxies:(id)arg1 createIfNecessary:(BOOL)arg2 createReason:(id)arg3 createdApplications:(id*)arg4 existingApplications:(id*)arg5 filterExistingApplications:(id*)arg6 unmappedProxies:(id*)arg7 ;
-(id)_workQueue_placeholderForProxy:(id)arg1 filterExisting:(BOOL)arg2 updateExistingIfNecessary:(BOOL)arg3 createIfNecessary:(BOOL)arg4 createReason:(id)arg5 ;
-(id)_workQueue_applicationInfoForProxy:(id)arg1 filterExisting:(BOOL)arg2 createIfNecessary:(BOOL)arg3 createReason:(id)arg4 ;
-(void)_workQueue_notePlaceholdersModifiedSignificantly:(id)arg1 ;
-(void)_notifyDidAddPlaceholders:(id)arg1 ;
-(void)_notifyDidDemoteApplications:(id)arg1 ;
-(void)_workQueue_removePlaceholderFromModelForBundleID:(id)arg1 withReason:(id)arg2 ;
-(BOOL)_workQueue_applicationHasBeenModified:(id)arg1 applicationProxy:(id)arg2 ;
-(void)_notifyDidCancelPlaceholders:(id)arg1 ;
-(void)_notifyDidAddApplications:(id)arg1 ;
-(void)_notifyDidReplaceApplications:(id)arg1 ;
-(void)_notifyDidRemoveApplications:(id)arg1 ;
-(void)_notifyDidUpdateApplications:(id)arg1 ;
-(void)_handleApplicationStateDidChange:(id)arg1 notifyForUpdateInsteadOfReplacement:(BOOL)arg2 ;
-(void)_notifyDidChangeNetworkUsage:(BOOL)arg1 ;
-(id)installedApplicationWithBundleIdentifier:(id)arg1 ;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg1 ;
-(void)applicationsWillInstall:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(void)applicationsWillUninstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)applicationsDidFailToUninstall:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(void)applicationInstallsDidPause:(id)arg1 ;
-(void)applicationInstallsDidResume:(id)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
-(void)applicationStateDidChange:(id)arg1 ;
-(void)networkUsageChanged:(BOOL)arg1 ;
-(void)deviceManagementPolicyDidChange:(id)arg1 ;
-(void)applicationsDidChangePersonas:(id)arg1 ;
-(BOOL)isUsingNetwork;
-(id)allInstalledApplications;
-(void)installedApplicationWithBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)allPlaceholders;
-(id)placeholderWithBundleIdentifier:(id)arg1 ;
-(void)uninstallApplication:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeObserverForToken:(id)arg1 ;
-(id)observeDidAddPlaceholdersWithBlock:(/*^block*/id)arg1 ;
-(id)observeDidCancelPlaceholdersWithBlock:(/*^block*/id)arg1 ;
-(id)observeDidAddApplicationsWithBlock:(/*^block*/id)arg1 ;
-(id)observeDidReplaceApplicationsWithBlock:(/*^block*/id)arg1 ;
-(id)observeDidUpdateApplicationsWithBlock:(/*^block*/id)arg1 ;
-(id)observeDidRemoveApplicationsWithBlock:(/*^block*/id)arg1 ;
-(id)observeDidDemoteApplicationsWithBlock:(/*^block*/id)arg1 ;
-(id)observeDidChangeNetworkUsageWithBlock:(/*^block*/id)arg1 ;
-(void)addApplicationProxy:(id)arg1 withOverrideURL:(id)arg2 ;
-(void)removeApplicationProxy:(id)arg1 ;
@end

