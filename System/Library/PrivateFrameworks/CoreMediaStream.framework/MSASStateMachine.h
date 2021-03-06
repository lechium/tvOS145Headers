/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MSBackoffManagerDelegate.h>
#import <libobjc.A.dylib/MSASAssetUploaderDelegate.h>
#import <libobjc.A.dylib/MSASAssetDownloaderDelegate.h>

@protocol OS_dispatch_queue;
@class MSASPersonModel, NSString, NSDictionary, MSBackoffManager, MSASAssetUploader, MSASAssetDownloader, MSAlbumSharingDaemon, NSMutableArray, MSASProtocol, MSASPhoneInvitations, MSImageScalingSpecification, NSArray, NSObject;

@interface MSASStateMachine : NSObject <MSBackoffManagerDelegate, MSASAssetUploaderDelegate, MSASAssetDownloaderDelegate> {

	int _commandState;
	MSASPersonModel* _model;
	NSString* _currentCommand;
	long long _currentCommandID;
	NSDictionary* _currentCommandParams;
	MSBackoffManager* _metadataBackoffManager;
	MSBackoffManager* _MMCSBackoffManager;
	MSASAssetUploader* _assetUploader;
	MSASAssetDownloader* _assetDownloader;
	BOOL _isRetryingOutstandingActivities;
	BOOL _hasShutDown;
	int _maxMetadataRetryCount;
	MSAlbumSharingDaemon* _daemon;
	NSString* _personID;
	id _delegate;
	NSDictionary* _serverSideConfiguration;
	NSString* _serverSideConfigurationVersion;
	NSString* _focusAlbumGUID;
	NSString* _focusAssetCollectionGUID;
	NSMutableArray* _assetInfoToReauthForDownload;
	/*^block*/id _stopHandlerBlock;
	MSASProtocol* _protocol;
	MSASPhoneInvitations* _phoneInvitations;
	MSImageScalingSpecification* _derivativeImageScalingSpecification;
	MSImageScalingSpecification* _thumbnailImageScalingSpecification;
	NSArray* _derivativeSpecifications;
	NSDictionary* _metadataBackoffManagerParameters;
	NSDictionary* _MMCSBackoffManagerParameters;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSObject*<OS_dispatch_queue> _serverSideConfigQueue;
	NSObject*<OS_dispatch_queue> _memberQueue;
	/*^block*/id _postCommandCompletionBlock;

}

@property (assign,nonatomic) BOOL isRetryingOutstandingActivities;                                                                 //@synthesize isRetryingOutstandingActivities=_isRetryingOutstandingActivities - In the implementation block
@property (setter=_setAssetInfoToReauthForDownload:,nonatomic,retain) NSMutableArray * _assetInfoToReauthForDownload;              //@synthesize assetInfoToReauthForDownload=_assetInfoToReauthForDownload - In the implementation block
@property (setter=_setStopHandlerBlock:,nonatomic,copy) id _stopHandlerBlock;                                                      //@synthesize stopHandlerBlock=_stopHandlerBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                                               //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> eventQueue;                                                              //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serverSideConfigQueue;                                                   //@synthesize serverSideConfigQueue=_serverSideConfigQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                                                             //@synthesize memberQueue=_memberQueue - In the implementation block
@property (assign,nonatomic) BOOL hasShutDown;                                                                                     //@synthesize hasShutDown=_hasShutDown - In the implementation block
@property (nonatomic,retain) NSDictionary * metadataBackoffManagerParameters;                                                      //@synthesize metadataBackoffManagerParameters=_metadataBackoffManagerParameters - In the implementation block
@property (nonatomic,retain) NSDictionary * MMCSBackoffManagerParameters;                                                          //@synthesize MMCSBackoffManagerParameters=_MMCSBackoffManagerParameters - In the implementation block
@property (nonatomic,copy) id postCommandCompletionBlock;                                                                          //@synthesize postCommandCompletionBlock=_postCommandCompletionBlock - In the implementation block
@property (assign,nonatomic,__weak) MSAlbumSharingDaemon * daemon;                                                                 //@synthesize daemon=_daemon - In the implementation block
@property (assign,nonatomic) int maxMetadataRetryCount;                                                                            //@synthesize maxMetadataRetryCount=_maxMetadataRetryCount - In the implementation block
@property (nonatomic,retain) NSDictionary * serverSideConfiguration;                                                               //@synthesize serverSideConfiguration=_serverSideConfiguration - In the implementation block
@property (nonatomic,retain,readonly) NSString * serverSideConfigurationVersion;                                                   //@synthesize serverSideConfigurationVersion=_serverSideConfigurationVersion - In the implementation block
@property (nonatomic,retain) MSASProtocol * protocol;                                                                              //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) MSASPhoneInvitations * phoneInvitations;                                                              //@synthesize phoneInvitations=_phoneInvitations - In the implementation block
@property (nonatomic,retain) NSString * focusAlbumGUID;                                                                            //@synthesize focusAlbumGUID=_focusAlbumGUID - In the implementation block
@property (nonatomic,retain) NSString * focusAssetCollectionGUID;                                                                  //@synthesize focusAssetCollectionGUID=_focusAssetCollectionGUID - In the implementation block
@property (nonatomic,retain,readonly) NSArray * derivativeSpecifications;                                                          //@synthesize derivativeSpecifications=_derivativeSpecifications - In the implementation block
@property (nonatomic,retain,readonly) MSImageScalingSpecification * derivativeImageScalingSpecification;                           //@synthesize derivativeImageScalingSpecification=_derivativeImageScalingSpecification - In the implementation block
@property (nonatomic,retain,readonly) MSImageScalingSpecification * thumbnailImageScalingSpecification;                            //@synthesize thumbnailImageScalingSpecification=_thumbnailImageScalingSpecification - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * personID;                                                                                  //@synthesize personID=_personID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(MSASProtocol *)protocol;
-(void)start;
-(void)setProtocol:(MSASProtocol *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_model;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDaemon:(MSAlbumSharingDaemon *)arg1 ;
-(MSAlbumSharingDaemon *)daemon;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)eventQueue;
-(void)setEventQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isInRetryState;
-(void)retryOutstandingActivities;
-(id)initWithPersonID:(id)arg1 ;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isRetryingOutstandingActivities;
-(void)setIsRetryingOutstandingActivities:(BOOL)arg1 ;
-(NSDictionary *)serverSideConfiguration;
-(void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2 ;
-(void)acceptInvitationWithToken:(id)arg1 info:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)hasEnqueuedActivities;
-(id)serverCommunicationBackoffDate;
-(void)validateInvitationToken:(id)arg1 albumName:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setFocusAlbumGUID:(NSString *)arg1 ;
-(void)setFocusAssetCollectionGUID:(NSString *)arg1 ;
-(NSString *)focusAssetCollectionGUID;
-(id)_metadataBackoffManager;
-(id)_assetUploader;
-(id)_assetDownloader;
-(NSMutableArray *)_assetInfoToReauthForDownload;
-(id)_stopHandlerBlock;
-(void)MSASAssetDownloader:(id)arg1 willBeginBatchCount:(unsigned long long)arg2 ;
-(void)MSASAssetDownloader:(id)arg1 didFinishDownloadingAsset:(id)arg2 inAlbumGUID:(id)arg3 error:(id)arg4 ;
-(void)MSASAssetDownloaderDidFinishBatch:(id)arg1 ;
-(void)MSASAssetUploader:(id)arg1 didFinishUploadingAssetCollection:(id)arg2 intoAlbum:(id)arg3 error:(id)arg4 ;
-(void)MSBackoffManagerDidUpdateNextExpiryDate:(id)arg1 ;
-(MSASPhoneInvitations *)phoneInvitations;
-(id)memberQueueMetadataBackoffManager;
-(id)initWithPersonID:(id)arg1 eventQueue:(id)arg2 ;
-(void)workQueueApplyServerSideConfiguration;
-(void)_workQueueEmptyFileTransferQueuesCompletionBlock:(/*^block*/id)arg1 ;
-(void)purgeEverythingCompletionBlock:(/*^block*/id)arg1 ;
-(void)stopAssetDownloadsCompletionBlock:(/*^block*/id)arg1 ;
-(void)cancelCompletionBlock:(/*^block*/id)arg1 ;
-(void)workQueueCancelAllCommandsFilteredByAlbumGUID:(id)arg1 assetCollectionGUID:(id)arg2 ;
-(void)workQueueCancelCompletionBlock:(/*^block*/id)arg1 ;
-(void)setPendingRootCtag:(id)arg1 ;
-(void)setRootCtagFromPendingRootCtag;
-(id)rootCtagToCheckForChanges;
-(void)cancelOutstandingCommandsForAlbumWithGUID:(id)arg1 ;
-(void)cancelOutstandingCommandsForAssetCollectionWithGUID:(id)arg1 ;
-(void)_cancelOutstandingCommandsDisposition:(int)arg1 params:(id)arg2 ;
-(id)_serverSideConfigDictionaryByApplyingDefaultsToDictionary:(id)arg1 ;
-(NSString *)serverSideConfigurationVersion;
-(id)serverSideQueueServerSideConfiguration;
-(void)setServerSideConfiguration:(NSDictionary *)arg1 ;
-(void)serverSideQueueSetServerSideConfiguration:(id)arg1 ;
-(void)refreshServerSideConfig;
-(void)workQueueRefreshServerSideConfig;
-(void)_sendGetServerSideConfigurationDisposition:(int)arg1 params:(id)arg2 ;
-(id)latestNextActivityDate;
-(void)workQueueUpdateNextActivityDate;
-(id)persistentObjectForKey:(id)arg1 ;
-(void)setPersistentObject:(id)arg1 forKey:(id)arg2 ;
-(void)workQueueRetryOutstandingActivities;
-(void)workQueueCheckForNextCommand;
-(void)workQueuePerformNextCommand;
-(void)workQueueDidFinishCommand;
-(void)workQueueDidFinishCommandByReplacingCurrentCommandWithCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5 ;
-(void)workQueueDidFailToFinishCommandDueToTemporaryError:(id)arg1 ;
-(void)workQueueDidFinishCommandByLeavingCommandInQueue;
-(void)workQueueDidFinishCommandDueToCancellation;
-(BOOL)workQueueEndCommandWithError:(id)arg1 command:(id)arg2 params:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5 ;
-(id)_URLReauthFailureWithUnderlyingError:(id)arg1 ;
-(void)_getAlbumURLDisposition:(int)arg1 params:(id)arg2 ;
-(id)_canceledError;
-(id)_stoppedError;
-(id)_assetCollectionRejectedError;
-(id)_assetCollectionFailedError;
-(void)checkForChangesIfMissingRootCtag;
-(void)checkForChangesResetSync:(BOOL)arg1 info:(id)arg2 ;
-(void)_checkForChangesDisposition:(int)arg1 params:(id)arg2 ;
-(void)checkForUpdatesInAlbums:(id)arg1 resetSync:(BOOL)arg2 info:(id)arg3 ;
-(void)_checkForUpdatesInAlbumDisposition:(int)arg1 params:(id)arg2 ;
-(void)_didFinishCheckingUpdatesInAlbumsDisposition:(int)arg1 params:(id)arg2 ;
-(void)getAccessControlsForAlbums:(id)arg1 info:(id)arg2 ;
-(void)_getAccessControlsDisposition:(int)arg1 params:(id)arg2 ;
-(void)subscribeToAlbum:(id)arg1 info:(id)arg2 ;
-(void)_subscribeToAlbumDisposition:(int)arg1 params:(id)arg2 ;
-(void)unsubscribeFromAlbum:(id)arg1 info:(id)arg2 ;
-(void)_unsubscribeFromAlbumDisposition:(int)arg1 params:(id)arg2 ;
-(void)markAsSpamInvitationForAlbum:(id)arg1 invitationGUID:(id)arg2 info:(id)arg3 ;
-(void)_markAsSpamInvitationForAlbumDisposition:(int)arg1 params:(id)arg2 ;
-(void)markAsSpamInvitationForToken:(id)arg1 info:(id)arg2 ;
-(void)_markAsSpamInvitationForTokenDisposition:(int)arg1 params:(id)arg2 ;
-(void)checkForAssetCollectionUpdates:(id)arg1 inAlbum:(id)arg2 info:(id)arg3 ;
-(void)_checkForAssetCollectionUpdatesDisposition:(int)arg1 params:(id)arg2 ;
-(void)checkForCommentChanges:(id)arg1 inAlbumWithGUID:(id)arg2 ;
-(void)_checkForCommentChangesDisposition:(int)arg1 params:(id)arg2 ;
-(void)checkForAlbumSyncedStateChangesInAlbums:(id)arg1 info:(id)arg2 ;
-(void)_checkForAlbumSyncedStateDisposition:(int)arg1 params:(id)arg2 ;
-(void)setAlbumSyncedState:(id)arg1 forAlbum:(id)arg2 info:(id)arg3 ;
-(void)_setAlbumSyncedStateDisposition:(int)arg1 params:(id)arg2 ;
-(void)setAssetCollectionSyncedState:(id)arg1 forAssetCollection:(id)arg2 album:(id)arg3 info:(id)arg4 ;
-(void)_setAssetCollectionSyncedStateDisposition:(int)arg1 params:(id)arg2 ;
-(void)deleteAlbum:(id)arg1 info:(id)arg2 ;
-(void)_deleteAlbumDisposition:(int)arg1 params:(id)arg2 ;
-(void)deleteAssetCollections:(id)arg1 inAlbum:(id)arg2 info:(id)arg3 ;
-(void)_deleteAssetCollectionsDisposition:(int)arg1 params:(id)arg2 ;
-(void)deleteComments:(id)arg1 inAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)_deleteCommentDisposition:(int)arg1 params:(id)arg2 ;
-(void)createAlbum:(id)arg1 info:(id)arg2 ;
-(void)_createAlbumDisposition:(int)arg1 params:(id)arg2 ;
-(void)updateAlbum:(id)arg1 updateAlbumFlags:(int)arg2 info:(id)arg3 ;
-(void)_updateAlbumDisposition:(int)arg1 params:(id)arg2 ;
-(id)_createCopiedAssetsInAssetCollections:(id)arg1 ;
-(void)addAssetCollections:(id)arg1 toAlbum:(id)arg2 info:(id)arg3 ;
-(void)_addAssetCollectionsDisposition:(int)arg1 params:(id)arg2 ;
-(void)continueAddingAssetCollections:(id)arg1 skipAssetCollections:(id)arg2 toAlbum:(id)arg3 info:(id)arg4 ;
-(void)_continueAddingAssetCollectionsDisposition:(int)arg1 params:(id)arg2 ;
-(void)_sendUploadCompleteDisposition:(int)arg1 params:(id)arg2 ;
-(void)_sendPutAssetCollectionsDisposition:(int)arg1 params:(id)arg2 ;
-(void)_sendGetUploadTokensDisposition:(int)arg1 params:(id)arg2 ;
-(void)addSharingRelationships:(id)arg1 toOwnedAlbum:(id)arg2 info:(id)arg3 ;
-(void)_addSharingRelationshipsDisposition:(int)arg1 params:(id)arg2 ;
-(void)removeSharingRelationships:(id)arg1 fromOwnedAlbum:(id)arg2 info:(id)arg3 ;
-(void)_removeSharingRelationshipsDisposition:(int)arg1 params:(id)arg2 ;
-(void)addComments:(id)arg1 toAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)_addCommentDisposition:(int)arg1 params:(id)arg2 ;
-(void)scheduleEvent:(id)arg1 assetCollectionGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4 ;
-(void)_scheduleEventDisposition:(int)arg1 params:(id)arg2 ;
-(void)setPublicAccessEnabled:(BOOL)arg1 forAlbum:(id)arg2 info:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setMultipleContributorsEnabled:(BOOL)arg1 forAlbum:(id)arg2 info:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)videoURLForAssetCollection:(id)arg1 inAlbum:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)videoURLsForAssetCollection:(id)arg1 forMediaAssetType:(unsigned long long)arg2 inAlbum:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_deleteAssetFilesInAssetCollection:(id)arg1 ;
-(void)_deleteAssetFilesInAssetCollections:(id)arg1 ;
-(void)workQueueScheduleReauthForAssets:(id)arg1 inAlbum:(id)arg2 ;
-(void)_sendReauthorizeAssetsForDownloadDisposition:(int)arg1 params:(id)arg2 ;
-(int)maxMetadataRetryCount;
-(void)setMaxMetadataRetryCount:(int)arg1 ;
-(NSString *)focusAlbumGUID;
-(void)_setAssetInfoToReauthForDownload:(id)arg1 ;
-(void)_setStopHandlerBlock:(/*^block*/id)arg1 ;
-(void)setPhoneInvitations:(MSASPhoneInvitations *)arg1 ;
-(MSImageScalingSpecification *)derivativeImageScalingSpecification;
-(MSImageScalingSpecification *)thumbnailImageScalingSpecification;
-(NSArray *)derivativeSpecifications;
-(BOOL)hasShutDown;
-(void)setHasShutDown:(BOOL)arg1 ;
-(NSDictionary *)metadataBackoffManagerParameters;
-(void)setMetadataBackoffManagerParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)MMCSBackoffManagerParameters;
-(void)setMMCSBackoffManagerParameters:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serverSideConfigQueue;
-(void)setServerSideConfigQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)postCommandCompletionBlock;
-(void)setPostCommandCompletionBlock:(id)arg1 ;
@end

