/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMBLocalZoneModelObserver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMDDatabaseZoneManagerDataSource.h>
#import <libobjc.A.dylib/HMDDatabaseZoneManagerDelegate.h>
#import <libobjc.A.dylib/HMDActiveXPCClientConnectionsPeriodicTimerDelegate.h>
#import <libobjc.A.dylib/HMDLogEventSubmitting.h>

@protocol HMDCameraClipManagerDelegate, OS_dispatch_queue, HMDFileManager;
@class HMDLogEventDispatcher, HMBLocalZone, HMBCloudZone, NSObject, HMDDatabaseZoneManager, HMDCameraClipsQuotaManager, HMDCameraSignificantEventFaceClassificationResolver, HMDActiveXPCClientConnectionsPeriodicTimer, HMFMessageDispatcher, NSUUID, HMDCameraClipFeedbackManager, NSDate, NSString;

@interface HMDCameraClipManager : HMFObject <HMBLocalZoneModelObserver, HMFLogging, HMFMessageReceiver, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMDActiveXPCClientConnectionsPeriodicTimerDelegate, HMDLogEventSubmitting> {

	BOOL _hasWriteAccess;
	id<HMDCameraClipManagerDelegate> _delegate;
	HMBLocalZone* _localZone;
	HMBCloudZone* _cloudZone;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDDatabaseZoneManager* _zoneManager;
	HMDCameraClipsQuotaManager* _quotaManager;
	HMDCameraSignificantEventFaceClassificationResolver* _faceClassificationResolver;
	HMDActiveXPCClientConnectionsPeriodicTimer* _clientConnectionsTimer;
	HMFMessageDispatcher* _messageDispatcher;
	NSUUID* _cameraProfileUUID;
	id<HMDFileManager> _fileManager;
	HMDCameraClipFeedbackManager* _feedbackManager;
	NSDate* _suppressNotificationsBeforeDate;
	unsigned long long _fetchBatchLimit;
	/*^block*/id _fetchServerFactory;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                                        //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMDDatabaseZoneManager * zoneManager;                                                          //@synthesize zoneManager=_zoneManager - In the implementation block
@property (readonly) HMDCameraClipsQuotaManager * quotaManager;                                                     //@synthesize quotaManager=_quotaManager - In the implementation block
@property (readonly) HMDCameraSignificantEventFaceClassificationResolver * faceClassificationResolver;              //@synthesize faceClassificationResolver=_faceClassificationResolver - In the implementation block
@property (readonly) HMDActiveXPCClientConnectionsPeriodicTimer * clientConnectionsTimer;                           //@synthesize clientConnectionsTimer=_clientConnectionsTimer - In the implementation block
@property (readonly) HMFMessageDispatcher * messageDispatcher;                                                      //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (copy,readonly) NSUUID * cameraProfileUUID;                                                               //@synthesize cameraProfileUUID=_cameraProfileUUID - In the implementation block
@property (readonly) id<HMDFileManager> fileManager;                                                                //@synthesize fileManager=_fileManager - In the implementation block
@property (retain) HMBLocalZone * localZone;                                                                        //@synthesize localZone=_localZone - In the implementation block
@property (retain) HMBCloudZone * cloudZone;                                                                        //@synthesize cloudZone=_cloudZone - In the implementation block
@property (retain) HMDCameraClipFeedbackManager * feedbackManager;                                                  //@synthesize feedbackManager=_feedbackManager - In the implementation block
@property (copy) NSDate * suppressNotificationsBeforeDate;                                                          //@synthesize suppressNotificationsBeforeDate=_suppressNotificationsBeforeDate - In the implementation block
@property (assign) unsigned long long fetchBatchLimit;                                                              //@synthesize fetchBatchLimit=_fetchBatchLimit - In the implementation block
@property (copy) id fetchServerFactory;                                                                             //@synthesize fetchServerFactory=_fetchServerFactory - In the implementation block
@property (__weak) id<HMDCameraClipManagerDelegate> delegate;                                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hasWriteAccess;                                                                   //@synthesize hasWriteAccess=_hasWriteAccess - In the implementation block
@property (readonly) BOOL hasStartedUpCloudZone; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) HMDLogEventDispatcher * logEventDispatcher; 
+(id)logCategory;
+(double)maximumClipDuration;
-(id<HMDCameraClipManagerDelegate>)delegate;
-(void)setDelegate:(id<HMDCameraClipManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)remove;
-(id<HMDFileManager>)fileManager;
-(id)home;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMFMessageDispatcher *)messageDispatcher;
-(id)initWithCameraProfile:(id)arg1 ;
-(NSUUID *)cameraProfileUUID;
-(HMDDatabaseZoneManager *)zoneManager;
-(HMBLocalZone *)localZone;
-(void)setLocalZone:(HMBLocalZone *)arg1 ;
-(id)localZone:(id)arg1 didProcessModelCreation:(id)arg2 ;
-(id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2 ;
-(id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2 ;
-(BOOL)manager:(id)arg1 shouldShareWithUser:(id)arg2 ;
-(BOOL)manager:(id)arg1 shouldGrantWriteAccessToUser:(id)arg2 ;
-(BOOL)areShareModificationsEnabledForManager:(id)arg1 ;
-(BOOL)zoneManager:(id)arg1 shouldRequestShareInvitationFromUser:(id)arg2 ;
-(void)zoneManagerDidStart:(id)arg1 ;
-(void)zoneManagerDidStop:(id)arg1 ;
-(void)zoneManager:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2 ;
-(BOOL)hasStartedUpCloudZone;
-(void)configureWithHome:(id)arg1 ;
-(HMDLogEventDispatcher *)logEventDispatcher;
-(id)performCloudPull;
-(void)submitLogEvent:(id)arg1 error:(id)arg2 ;
-(void)setCloudZone:(HMBCloudZone *)arg1 ;
-(HMBCloudZone *)cloudZone;
-(void)handleUserCamerasAccessLevelDidChangeNotification:(id)arg1 ;
-(void)handleUserRemoteAccessDidChangeNotification:(id)arg1 ;
-(void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg1 ;
-(id)significantEventsWithDateInterval:(id)arg1 ;
-(id)significantEventsForClipContainingDate:(id)arg1 ;
-(HMDCameraSignificantEventFaceClassificationResolver *)faceClassificationResolver;
-(void)handleUserPrivilegeDidChangeNotification:(id)arg1 ;
-(unsigned long long)fetchBatchLimit;
-(void)setFetchBatchLimit:(unsigned long long)arg1 ;
-(void)clientConnectionsTimerDidFire:(id)arg1 ;
-(BOOL)hasWriteAccess;
-(void)handleSubscribeMessage:(id)arg1 ;
-(void)handleUnsubscribeMessage:(id)arg1 ;
-(void)handlePerformCloudPullMessage:(id)arg1 ;
-(void)setSuppressNotificationsBeforeDate:(NSDate *)arg1 ;
-(NSDate *)suppressNotificationsBeforeDate;
-(HMDActiveXPCClientConnectionsPeriodicTimer *)clientConnectionsTimer;
-(id)fetchServerFactory;
-(id)_performCloudPull;
-(void)setFetchServerFactory:(id)arg1 ;
-(id)initWithZoneManager:(id)arg1 quotaManager:(id)arg2 faceClassificationResolver:(id)arg3 clientConnectionsTimer:(id)arg4 messageDispatcher:(id)arg5 workQueue:(id)arg6 cameraProfileUUID:(id)arg7 fileManager:(id)arg8 ;
-(id)_significantEventModelsForClipWithUUID:(id)arg1 ;
-(id)_significantEventFromSignificantEventModel:(id)arg1 ;
-(BOOL)_fetchSignificantEventsWithDateInterval:(id)arg1 isAscending:(BOOL)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(void)handleFetchPosterFramesAssetContextMessage:(id)arg1 ;
-(void)handleFetchVideoSegmentsAssetContextMessage:(id)arg1 ;
-(void)handleFetchClipMessage:(id)arg1 ;
-(void)handleFetchClipsMessage:(id)arg1 ;
-(void)handleFetchClipForSignificantEventMessage:(id)arg1 ;
-(void)handleFetchCountOfClipsMessage:(id)arg1 ;
-(void)handleFetchHeroFrameDataRepresentationMessage:(id)arg1 ;
-(void)handleFetchHeroFrameURLMessage:(id)arg1 ;
-(void)handleFetchFaceCropDataRepresentationMessage:(id)arg1 ;
-(void)handleFetchFaceCropURLMessage:(id)arg1 ;
-(void)handleFetchSignificantEventsMessage:(id)arg1 ;
-(void)handleDeleteClipMessage:(id)arg1 ;
-(void)handleDeleteAllClipsMessage:(id)arg1 ;
-(void)handleHandleFaceMisclassificationMessage:(id)arg1 ;
-(void)handleRemoteHandleFaceMisclassificationMessage:(id)arg1 ;
-(void)handleImportClipsMessage:(id)arg1 ;
-(id)_fetchHeroFrameURLForSignificantEventModel:(id)arg1 ;
-(HMDCameraClipsQuotaManager *)quotaManager;
-(void)_cleanUpClipsAndSignificantEventsForInitialStartup:(BOOL)arg1 ;
-(BOOL)_fetchClipsWithDateInterval:(id)arg1 isAscending:(BOOL)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(id)_faceClassificationsForSignificantEventWithUUID:(id)arg1 ;
-(id)_significantEventModelsWithUUIDs:(id)arg1 ;
-(id)significantEventsForClipWithUUID:(id)arg1 ;
-(void)_cleanUpIncompleteClipsForInitialStartup:(BOOL)arg1 ;
-(void)_cleanUpExpiredClips;
-(void)_cleanUpOrphanedSignficantEvents;
-(id)_removeClipsWithUUIDs:(id)arg1 options:(id)arg2 ;
-(id)_fetchAssetContextForProperty:(id)arg1 forClipModel:(id)arg2 ;
-(void)_notifyForChangedSignificantEventModel:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)_notifyTransportsOfUpdatedClips:(id)arg1 removedClipUUIDs:(id)arg2 ;
-(void)_handleChangedClipModel:(id)arg1 wasCreated:(BOOL)arg2 mirrorOutputFuture:(id)arg3 ;
-(void)_notifyTransportsOfUpdatedSignificantEvents:(id)arg1 removedSignificantEventUUIDs:(id)arg2 ;
-(void)_notifyPrimaryResidentAboutFaceMisclassificationForFaceCropData:(id)arg1 personUUID:(id)arg2 personManagerUUID:(id)arg3 ;
-(void)_fetchAssetContextForMessage:(id)arg1 propertyName:(id)arg2 ;
-(id)_fetchCanonicalHeroFrameURLForClipModel:(id)arg1 ;
-(id)_fetchFaceCropURLForSignificantEventModel:(id)arg1 ;
-(id)_significantEventsWithUUIDs:(id)arg1 ;
-(id)_handleFaceMisclassificationForFaceCropURL:(id)arg1 personUUID:(id)arg2 personManagerUUID:(id)arg3 significantEventModel:(id)arg4 ;
-(void)_removeAllFaceClassificationModels;
-(void)_handleChangedSignificantEventNotificationModel:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)_handleChangedFaceClassificationModel:(id)arg1 ;
-(void)setFeedbackManager:(HMDCameraClipFeedbackManager *)arg1 ;
-(HMDCameraClipFeedbackManager *)feedbackManager;
-(void)setHasWriteAccess:(BOOL)arg1 ;
-(id)heroFrameURLForSignificantEventWithUUID:(id)arg1 ;
-(id)fetchHeroFrameURLForSignificantEventWithUUID:(id)arg1 ;
-(id)enableCloudStorage;
-(id)disableCloudStorage;
-(void)cleanUpClipsAndSignificantEvents;
@end

