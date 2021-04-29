/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CPLLibraryManagerImplementation <CPLPlatformImplementation>
@optional
-(void)barrier;
-(void)resetCacheWithOption:(unsigned long long)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getListOfComponentsWithCompletionHandler:(/*^block*/id)arg1;
-(void)getStatusForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getStatusArrayForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getStatusesForScopesWithIdentifiers:(id)arg1 includeStorages:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getCloudCacheForRecordWithScopedIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg1 related:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getResourcesForItemWithScopedIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)compactFileCacheWithCompletionHandler:(/*^block*/id)arg1;
-(void)addInfoToLog:(id)arg1;
-(void)forceBackupWithCompletionHandler:(/*^block*/id)arg1;
-(void)requestClientToPushAllChangesWithCompletionHandler:(/*^block*/id)arg1;
-(void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;
-(void)reportMiscInformation:(id)arg1;
-(void)blockEngineElement:(id)arg1;
-(void)unblockEngineElement:(id)arg1;
-(void)unblockEngineElementOnce:(id)arg1;
-(void)provideScopeChangeForScopeWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)provideRecordWithCloudScopeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)provideCloudResource:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)deleteResources:(id)arg1 checkServerIfNecessary:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)checkResourcesAreSafeToPrune:(id)arg1 checkServerIfNecessary:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(void)getStreamingURLForResource:(id)arg1 intent:(unsigned long long)arg2 hints:(id)arg3 clientBundleID:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)resolveLocalScopedIdentifiersForCloudScopedIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getMappedScopedIdentifiersForScopedIdentifiers:(id)arg1 inAreLocalIdentifiers:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)createScope:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchSharedScopeFromShareURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)acceptSharedScope:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)queryUserDetailsForShareParticipants:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)startSyncSession;
-(void)resetStatus;
-(void)noteClientIsInForeground;
-(void)noteClientIsInBackground;
-(void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(/*^block*/id)arg1;
-(void)getStatusForRecordsWithScopedIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getChangedStatusesWithCompletionHandler:(/*^block*/id)arg1;
-(void)addStatusChangesForRecordsWithScopedIdentifiers:(id)arg1 persist:(BOOL)arg2;
-(void)disableSynchronizationWithReason:(id)arg1;
-(void)enableSynchronizationWithReason:(id)arg1;
-(void)getSystemBudgetsWithCompletionHandler:(/*^block*/id)arg1;
-(void)setShouldOverride:(BOOL)arg1 forSystemBudgets:(unsigned long long)arg2;
-(void)disableMingling;
-(void)enableMingling;
-(void)noteClientIsBeginningSignificantWork;
-(void)noteClientIsEndingSignificantWork;
-(void)setDiagnosticsEnabled:(BOOL)arg1;
-(void)activateScopeWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)deactivateScopeWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)boostPriorityForScopeWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)acknowledgeChangedStatuses:(id)arg1;
-(void)openWithCompletionHandler:(/*^block*/id)arg1;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1;
-(void)deactivateWithCompletionHandler:(/*^block*/id)arg1;
-(void)noteClientReceivedNotificationOfServerChanges;
-(void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 intent:(unsigned long long)arg3 proposedTaskIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)beginInMemoryDownloadOfResource:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)forceSynchronizingScopeWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)diagnosticsEnabled;

@end

